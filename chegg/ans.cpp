#include<bits/stdc++.h>
using namespace std;

#define size 3000
int main(){
    set<int> s;
    for(int i=10;i>0;i--){s.insert(i);}
    s.insert(23434);
    s.insert(2345);
    for(auto x:s){cout<<x<<" ";}
    
}