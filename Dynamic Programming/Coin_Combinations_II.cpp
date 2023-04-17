#include<bits/stdc++.h>
using namespace std;

int ans(vector<int> &v,int sum){
    int n=v.size(); 
    vector<vector<int>> dp(n+1,vector<int>(sum+1,0));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0){dp[i][j]=INT_MAX-1;}
            if(j==0){dp[i][j]=0;}  
            if(i==1){
                if(j%v[i]==0){dp[i][j]=j/v[i];}
                else{dp[i][j]=INT_MAX-1;}
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][sum];

}

int main(){
    int n,x;cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){cin>>v[i];}
    cout<<ans(v,x);
}