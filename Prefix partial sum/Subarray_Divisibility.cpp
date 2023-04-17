#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,ans=0;cin>>n;
    vector<int> arr(n),prefix(n);
    for(int i=0;i<n;i++){cin>>arr[i];}
    map<int,int> mp;
    mp[0]=1;
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){prefix[i]=prefix[i-1]+arr[i];}
    for(int i=0;i<n;i++){
        int curr_sum=prefix[i];
        int target=((curr_sum%n)+n)%n;
        // if(curr_sum>=n){
        if(mp.find(target)!=mp.end()){ans+=mp[target];}
        mp[target]++;
    }
    cout<<ans;   
}