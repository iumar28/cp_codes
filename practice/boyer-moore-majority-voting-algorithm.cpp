// This is to find the element which appear more than n/2 times
#include<bits/stdc++.h>
using namespace std;

pair<int,int> finder(vector<int> &v){
     int votes=0,element=-1;
    for(int i=0;i<v.size();i++){
        if(votes==0){element=v[i];votes=1;}
        else {
            if(v[i]==element){votes++;}
            else{votes--;}
        }
    }
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==element){count++;}
    }
    return {element,count};
}

int main(){
    vector<int> v={1,1,1,1,2,3,5};
    pair<int,int> pp=finder(v);
    cout<<pp.first<<" "<<pp.second;
   
}