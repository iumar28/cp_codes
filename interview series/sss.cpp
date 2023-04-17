#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> fans;
    
    string temp="";
    for(int i=0;i<s.size();i++){
        
        if(s[i]==','){
            int no=stoi(temp);
            fans.push_back(no);
            temp="";
            // cout<<temp<<" ";temp="";
            }
        else(temp.push_back(s[i]));
        // cout<<no<<" ";
    }
    int tt=stoi(temp);
    fans.push_back(tt);
    sort(fans.begin(),fans.end());
    cout<<"[";
    for(auto x:fans){cout<<x<<",";}
    cout<<"]";
        
}