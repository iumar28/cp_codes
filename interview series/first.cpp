#include<bits/stdc++.h>
using namespace std;
int ans[3][3];

void rotate(int v[3][3]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            ans[j][i]=v[i][j];
        }
    }
    swap(ans[0][0],ans[2][0]);
    swap(ans[0][1],ans[2][1]);
    swap(ans[0][2],ans[2][2]);
}

int main(){
    int v[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    rotate(v);    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}