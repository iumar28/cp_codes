// In this code, we will try to find out the closest value of a number using binary search.

#include<bits/stdc++.h>
using namespace std;

void invariant(vector<int> a,int no){
    int mid;
    int low=-1,high=a.size();
    while(low+1<high){
        mid=low+(high-low)/2;
        if(a[mid]<=no){low=mid;}
        else{high=mid;}
    }
    cout<<a[mid];
    // return mid;
}

int main(){
    vector<int> a={3,5,10,11,13,18,25,27,31};
    int no=20;
    invariant(a,no);

}