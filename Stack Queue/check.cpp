#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5};
    for(int i=4;i>3;i++)
    {arr[i+1]=i;}
    for(int i=0;i<10;i++){cout<<arr[i]<<" ";}

}