#include<bits/stdc++.h>
using namespace std;

int LCS(string a,string b){
    int m=a.size(),n=b.size();

    vector<vector<int>> dp(m+1,vector<int>(n+1,0));

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0){dp[i][j]=0;}
            else if(a[i-1]==b[j-1]){dp[i][j]=dp[i-1][j-1]+1;}
            else 
            {dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}
        }
    }
    string temp;
    int i=m,j=n;
   while(i>=0&&j>=0){
            if(a[i-1]==b[j-1]){temp.push_back(a[i-1]);i--;j--;}
            else if(dp[i-1][j]>dp[i][j-1]){i--;}
            else{j--;}
        }
        cout<<temp;
    return dp[m][n];
}

int main(){
    string a="abcdaf";
    string b="acbcf";
    cout<<LCS(a,b);

}