#include<bits/stdc++.h>
using namespace std;
#define int long long



int minimalKSum(vector<int>& nums, int k) {
    long long maxi=*max_element(nums.begin(),nums.end());
    vector<long long> v(maxi+k,0);
    for(long long i=0;i<nums.size();i++){v[nums[i]]=-1;}
    long long i=1,sum=0;
    while(k>0){
        if(v[i]!=-1){sum+=i;k--;}
        i++;
    }
    return sum;
}
int32_t main(){
    vector<int> v={5,6};
    int k=6;
    int ans=minimalKSum(v,k);
    cout<<ans;
}