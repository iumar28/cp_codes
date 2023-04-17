#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,sum,ans=0;cin>>n>>sum;
    vector<int> arr(n),prefix(n);
    for(int i=0;i<n;i++){cin>>arr[i];}
    map<int,int> mp;
    mp[0]=1;
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){prefix[i]=prefix[i-1]+arr[i];}
    for(int i=0;i<n;i++){
        int curr_sum=prefix[i]%n;
        int want=curr_sum-sum;
        if(mp.find(want)!=mp.end()){ans+=mp[want];}
        mp[prefix[i]]++;
    }
    cout<<ans;   
}