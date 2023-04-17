#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &v){
    int row=v.size(),col=v[0].size();

    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(v[j][i],v[i][j]);
        }
    }
     for(auto x:v){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    // for(int i=0;i<row;i++){
    //     reverse(v[i].begin(),v[i].end());
    // }
   
}

int main(){
vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
rotate(v);
}