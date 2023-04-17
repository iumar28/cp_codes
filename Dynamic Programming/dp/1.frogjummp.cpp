#include <bits/stdc++.h> 
// This is recursion+memoization
int help(vector<int> &v,int n,vector<int> &dp){
    if(n==0){return 0;}
    if(dp[n]!=-1){return dp[n];}
    int first=help(v,n-1,dp)+abs(v[n-1]-v[n]);;
    int second=INT_MAX;
    if(n>1){
        second=help(v,n-2,dp)+abs(v[n-2]-v[n]);
    }
    return dp[n]=min(first,second);
}
int frogJump(int n, vector<int> &height)
{
    vector<int> dp(n,0);
    dp[0]=0;
    //This is the tabulation method
    for(int i=1;i<n;i++){
        int first=dp[i-1]+abs(height[i]-height[i-1]);
        int second=INT_MAX;
        if(i>1){
            second=dp[i-2]+abs(height[i]-height[i-2]);
        }
        dp[i]=min(first,second);
    }
    return dp[n-1];
   
}