#include<bits/stdc++.h>
using namespace std;

int unboundedKnapsack(vector<int> &val, vector<int> &wt,int W, int n)
{
    // dp[i] is going to store maximum value
    // with knapsack capacity i.
    int dp[W+1];
    memset(dp, 0, sizeof dp);
 
    // Fill dp[] using above recursive formula
    for (int i=0; i<=W; i++)
      for (int j=0; j<n; j++)
         if (wt[j] <= i)
            dp[i] = max(dp[i], dp[i-wt[j]] + val[j]);
 
    return dp[W];
}
 

int main(){
    int W=100;
    vector<int> val={10,30,20};
    vector<int> weight={5,10,15};
    cout<<unboundedKnapsack(val,weight,W,val.size());
}