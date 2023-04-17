#include<bits/stdc++.h>
using namespace std;

int main(){
    int first[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){cin>>first[i][j];}
    }
    int second[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){cin>>second[i][j];}
    }
    int ans=0;
    if(first[0][0]==second[0][0]&&first[0][1]==second[0][1]&&first[1][0]==second[1][0]&&first[1][1]==second[1][1]){ans++;}
    if(first[0][0]==second[0][1]&&first[0][1]==second[0][2]&&first[1][0]==second[1][1]&&first[1][1]==second[1][2]){ans++;}
    if(first[0][0]==second[1][0]&&first[0][1]==second[1][1]&&first[1][0]==second[2][0]&&first[1][1]==second[2][1]){ans++;}
    if(first[0][0]==second[1][1]&&first[0][1]==second[1][2]&&first[1][0]==second[2][1]&&first[1][1]==second[2][2]){ans++;}
    cout<<ans;
}