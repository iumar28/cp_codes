#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9+7;

 int uniquePathsWithObstacles(vector<vector<char>>& grid) {
    int m=grid.size(),n=grid[0].size(); // m is row and n is column
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    dp[0][1]=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(grid[i-1][j-1]!='*'){
                dp[i][j]=(dp[i-1][j]+dp[i][j-1]);
                dp[i][j]%=mod;
            }
        }
    }
    return dp[m][n]%mod;

 }

int32_t main(){
  int n;cin>>n;
  vector<vector<char>> grid(n,vector<char>(n));
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cin>>grid[i][j];

      }
  }
  cout<<uniquePathsWithObstacles(grid);
}