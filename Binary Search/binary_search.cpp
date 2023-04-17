#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> a,int no){
    int low=0,high=a.size();
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==no){return mid;}
        else if(no>a[mid]){low=mid+1;}
        else{high=mid;}
    }
    return -1;
}

int main(){
    vector<int> a={3,5,8,13,18,19,21,27,32};
    cout<<binary_search(a,13);
}