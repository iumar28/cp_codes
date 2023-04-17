#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,sum,ans=0;cin>>n>>sum;
    vector<int> arr(n),prefix(n);
    cin>>arr[0];prefix[0]=arr[0];
    map<int,int> mp;
    mp[arr[0]]++;
    mp[0]=1;
    for(int i=1;i<n;i++){cin>>arr[i];prefix[i]=prefix[i-1]+arr[i];mp[prefix[i]]++;}
    int req_sum;
    for(int i=0;i<n;i++){
        req_sum=prefix[i]-sum;
        if(mp.find(req_sum)!=mp.end()){ans+=mp[req_sum];}
    }
    cout<<ans;  
}