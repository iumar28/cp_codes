#include<bits/stdc++.h>
using namespace std;

string decodeMessage(string key, string message) {
    
    string s="abcdefghijklmnopqrstuvwxyz";
    map<char,int> visited;
    for(auto x:s){visited[x]=1;}
    map<char,char> mp;
    int count=0;
    for(int i=0;i<key.size();i++){
      if(key[i]!=' '&&visted[key]==0){mp[key[i]]=s[count++];count=count%26;}
    }
    string ans;
    for(auto x:message){
        if(x==' '){ans.push_back(' ');}
        else{ans.push_back(mp[x]);}
    }
    for(auto x:mp){cout<<x.first<<" "<<x.second<<endl;}
        
        return  ans;

}

int main(){
    cout<<decodeMessage("the quick brown fox jumps over the lazy dog","vkbs bs t suepuv");
}