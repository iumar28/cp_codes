#include<bits/stdc++.h>
using namespace std;

int solve(int no){
    vector<int> dp(no+1);
    dp[0]=0;

    for(int i=1;i<=no;i++){
        int temp=i;
        int ministeps=1e6+2;
        while(temp!=0){
            int digit=temp%10;
            temp/=10;
            if(digit==0){continue;}
            ministeps=min(ministeps,1+dp[i-digit]);
        }
        dp[i]=ministeps;
    }
    return dp[no];

}

int main(){
    int no;cin>>no;
    cout<<solve(no);
}