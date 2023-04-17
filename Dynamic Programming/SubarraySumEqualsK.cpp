#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& v, int k) {
    int ssum=0;
    for(auto x:v){ssum+=x;}
    cout<<ssum<<endl;
    int n=v.size();
    int sum=v[0];
    vector<int> prefix(n,0);
    prefix[0]=v[0];
    unordered_map<int,int> mp;
    for(int i=1;i<n;i++){prefix[i]=prefix[i-1]+v[i];}
    int count=0;
    for(int i=0;i<n;i++){
        if(prefix[i]==k){count++;}
        if(mp.find(prefix[i]-k)!=mp.end()){count+=mp[prefix[i]-k];}
        mp[prefix[i]]++;
    }   
    return count;

}

int main(){
    vector<int> v={5,5,5,5,4,4,4,4,3,3,3,3};
    int sum=4;
    cout<<subarraySum(v,sum);

}