#include <bits/stdc++.h>
#include <string>
using namespace std;
bool haslower(string s){
  for(auto x:s){
    if(islower(x)){
      return true;
    }
  }
  return false;
}
int sizze(string s){
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){ans++;}
    }
    return ans;
}
bool hasupper(string s){
  for(auto x:s){
    if(isupper(x)){return true;}}
  return false;
}
bool hasspecial(string s){
  for(auto x:s){
        if(!islower(x)&&!isupper(x)&&!isdigit(x)){return true;}
    }
    return false;
}

int main() {
  string line;
  cin>>line;
  cout<<line.size();
  int size=sizze(s);
  if(size>=6&&size<=23){cout<<"yes";}
  //checking for strong
  if(haslower(line)&&hasupper(line)&&hasspecial(line)&&size>=10&&size<=25){cout<<"strong";}
  else if(haslower(line)&&hasupper(line)){if(size<10&&hasspecial(line)){cout<<"medium";}}
  else if(haslower(line)&&hasupper(line)&&hasspecial(line)&&size>=8){cout<<"medium";}
  else if(size>=6&&size<=25){cout<<"weak";}
  else{
      cout<<"invalid";
  }
  
}
