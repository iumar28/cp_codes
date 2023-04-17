//problem link: https://www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261?leftPanelTab=1

#incldue<bits/stdc++.h>
using namespace std;
int help(int n,vector<int> &nums,vector<int> &dp){
    //This is the code of memoization
    if(n==0){return nums[0];}
    if(n<0){return 0;}
    if(dp[n]!=-1){return dp[n];}
    
    int pick=nums[n]+help(n-2,nums,dp);
    int notpick=0+help(n-1,nums,dp);
    
    return dp[n]=max(pick,notpick);
}
int tabulation(vector<int> &nums){
    int n=nums.size();
    vector<int> dp(n,-1);
    dp[0]=nums[0];

    for(int i=1;i<n;i++){
        int pick=nums[i]+dp[i-1];
        int notpick=INT_MIN;
        if(i-2>=0){notpick=0+dp[i-2];}
        dp[i]=max(pick,notpick);
    }
    return dp[n-1];
}
int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    vector<int> dp(n,-1);
    return help(n-1,nums,dp);
    // Write your code here.
}