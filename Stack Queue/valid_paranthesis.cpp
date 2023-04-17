#include<bits/stdc++.h>
using namespace std;


  bool isValid(string s) {
      stack<char> u;
      for(int i=0;i<s.size();i++){
          if(s[i]=='[' ||s[i]=='(' || s[i]=='{')
          {u.push(s[i]);}
          else {
            //   char top=u.top;
            if((s[i]==')'&&u.top()=='(') || (s[i]==']' && u.top()=='[') || (s[i]=='}' && u.top()=='{'))
            {u.pop();}
            else
            {return false;}              
         }
      }
      if(u.size()==0){return true;}
      return false;

    }

int main(){
    string s="()[]{}";
    cout<<isValid(s);


}
