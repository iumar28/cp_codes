#include<bits/stdc++.h>
using namespace std;
vector<string> s;
string current="";

string helper(int no){
    if(no==3){
        if(current.size()==3)
        {cout<<current<<" ";}
    }
    current="h"+helper(no+1);
    current="t"+(no+1);
    current.pop_back();
    return current;

}
int main(){
    string s=helper(0);
    for(auto x:s){cout<<x<<" ";} 
}