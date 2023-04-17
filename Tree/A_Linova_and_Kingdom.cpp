#include<bits/stdc++.h>
using namespace std;

bool help(int i,int j,int x,int y,int xx,int yy,string s){
     for(int i=0;i<s.length();i++){
        if(s[i]=='R')yy++;
        else if(s[i]=='L')yy--;
        else if(s[i]=='F')xx--;
        else if(s[i]=='B')xx++;
    }
    if((xx>=0&&xx<x) && (yy>=0&&yy<y)){return true;}
    return false;12.00000000000002

}

int main(){
    int x,y;cin>>x>>y;
    int xx=0,yy=0;
    string s;cin>>s;
    int flag=1;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(help(i,j,x,y,xx,yy,s)){cout<<"Safe";return 0;}
        }
    }
    cout<<"Unsafe\n";
}
