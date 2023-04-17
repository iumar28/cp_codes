#include<bits/stdc++.h>
using namespace std;

bool mul(int a,int b,int c){
    if(a*b==c){return true;}
    return false;
}
bool div(int a,int b,int c){
    if(b*c==a){return true;}
    return false;
}
bool add(int a,int b,int c){
    if(a+b==c){return true;}
    return false;
}
bool sub(int a,int b,int c){
    if(a-b==c){return true;}
    return false;
}

int main(){
    vector<char> v;
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    if(mul(a[0][0],a[0][1],a[0][2])){v.push_back('*');}
    else if(div(a[0][0],a[0][1],a[0][2])){v.push_back('/');}
    else if(add(a[0][0],a[0][1],a[0][2])){v.push_back('+');}
    else if(sub(a[0][0],a[0][1],a[0][2])){v.push_back('-');}
    else{v.push_back(' ');}


    if(mul(a[1][0],a[1][1],a[1][2])){v.push_back('*');}
    else if(div(a[1][0],a[1][1],a[1][2])){v.push_back('/');}
    else if(add(a[1][0],a[1][1],a[1][2])){v.push_back('+');}
    else if(sub(a[1][0],a[1][1],a[1][2])){v.push_back('-');}
    else{v.push_back(' ');}


    if(mul(a[2][0],a[2][1],a[2][2])){v.push_back('*');}
    else if(div(a[2][0],a[2][1],a[2][2])){v.push_back('/');}
    else if(add(a[2][0],a[2][1],a[2][2])){v.push_back('+');}
    else if(sub(a[2][0],a[2][1],a[2][2])){v.push_back('-');}
    else{v.push_back(' ');}

    if(mul(a[0][0],a[1][0],a[2][0])){v.push_back('*');}
    else if(div(a[0][0],a[1][0],a[2][0])){v.push_back('/');}
    else if(add(a[0][0],a[1][0],a[2][0])){v.push_back('+');}
    else if(sub(a[0][0],a[1][0],a[2][0])){v.push_back('-');}
    else{v.push_back(' ');}

    if(mul(a[0][1],a[1][1],a[2][1])){v.push_back('*');}
    else if(div(a[0][1],a[1][1],a[2][1])){v.push_back('/');}
    else if(add(a[0][1],a[1][1],a[2][1])){v.push_back('+');}
    else if(sub(a[0][1],a[1][1],a[2][1])){v.push_back('-');}
    else{v.push_back(' ');}

    char ans[5][5]={'0'};
    vector<vector<char>> ans(5,vector<char>(5,0));
    for(int i=0;i<5;i++){
        ans[i][0]
    }
    ans[0][0]=a[0][0];
    ans[2][0]=a[1][0];
    ans[2][2]=a[1][1];
    ans[4][2]=a[2][1];
    ans[0][4]=a[0][2];
    ans[2][4]=a[1][2];
    ans[4][4]=a[2][2];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



    // for(auto x:v){cout<<x<<" ";}





}