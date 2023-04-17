#include<bits/stdc++.h>
using namespace std;

pair<int,int> finder(vector<int> &v){
    int first=0,second=0,first_no=INT_MAX,second_no=INT_MAX;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(first_no==v[i]){first++;}
        else if(second_no==v[i]){second++;}
        else if(first==0){first_no=v[i],first++;}
        else if(second==0){second_no=v[i],second++;}
        else{first--,second--;}
    }   
    int first=0,second=0;
    for(int i=0;i<n;i++){
        if(v[i]==first_no){first++;}
        else if(v[i]==second_no){second++;}
    }
    if(first>n/3){return {first_no,first};}
    if(second>n/3){return {second_no,second}};
    return -1;


}

int main(){
    vector<int> v={};

}