#include<iostream>
using namespace std;

class stack{
    int size,top=-1;
    int* s;
    public:
    stack(int size);
    ~stack();
    void push(int a);
    void pop();
    bool isfull();
    bool isempty();
    void show();
    int topmost();
};
stack::~stack() {
    delete[] s;
}

bool stack:: isfull()
{if(top==size-1)return true;
return false;}

bool stack:: isempty(){
    if(top==-1){return true;}
    return false;
}
stack::stack(int size){
    this->size=size;
    top=-1;
    s=new int[size];
}

void stack::push(int a){
    if(isfull()){cout<<"stack overflow";}
    else{
        s[top++]=a; 
    }
}
void stack:: pop(){
    if(top==-1){cout<<"Stack is empty";}
    else{cout<<s[top--]<<" element is deleted successdfully\n";}
}
void stack:: show(){
    for(int i=top;i>=0;i--){
        cout<<s[i]<<"| ";
    }
    cout<<endl;
}

int main(){
    int a[]={9,8,7,6,5,4,3};
    int size=sizeof(a)/sizeof(a[0]);
    stack stk(sizeof(a)/sizeof(a[0]));

    for(int i=0;i<size;i++){
        stk.push(i+6);
    }
    cout<<"the stack we made is:";
    stk.show();
}