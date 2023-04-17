#include<iostream>
using namespace std;
#include<set>

int main(){

    int n;cin>>n;
    set<int> s;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        s.insert(a);
    }
    cout<<s.size(); 
}