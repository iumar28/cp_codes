#include<bits/stdc++.h>
using namespace std;

class stak{
    public:
    stack<int> s;
    int mini;

    void push(int x){
        if(s.size()==0){mini=x;s.emplace(x);}
        else {
            if(x>=mini){s.emplace(x);}
            else{
                if(x<mini){
                    s.emplace(2*x-mini);
                    mini=x;
                }
            }
        }
    }
    int pop(){
        int top=s.top();
        if(top>=mini){return top;}
        else {
            if(top<mini){
                mini=2*mini-top;
            }
        }
        s.pop();
    }
    int get_top(){
        return s.top();
    }
    int getmin(){ return mini;}
    bool isEmpty(){ return s.size()==0;}
    
};

int main(){
    stak ss;
    ss.push(5);
    ss.push(15);
    ss.push(57);
    ss.push(67);
    ss.push(87);
    cout<<"\n The minimum element is: "<<ss.getmin();
    ss.push(1);
    cout<<"\n"<<ss.getmin();


}