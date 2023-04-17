#include<bits/stdc++.h>
using namespace std;
#define int long long

int maxSubArray(vector<int>& nums) {
        int cs=0,ans=0,allneg=0;
        for(auto x:nums)
        {if(x<0)
         allneg++;}
        
        if(nums.size()==1)
            return nums[0];
       else if(allneg==nums.size())
            return *max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(cs+nums[i]>0){cs+=nums[i];}
            else{cs=0;}
            if(ans<cs)
                ans=cs;
            if(cs<0)
                cs=0;
        }
        return ans;
        
}

int32_t main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){cin>>v[i];}
    cout<<maxSubArray(v);

}