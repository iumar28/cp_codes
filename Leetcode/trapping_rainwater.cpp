#include<bits/stdc++.h>
using namespace std;

int ans(vector<int> &v){
    int n=v.size(),left=0,right=v.size()-1,area=0;
    while(left<right){
        cout<<area<<" ";
        area=max(area,min(v[left],v[right])*(right-left));
        if(v[left]<v[right]){left++;}
        else{right--;}
    }
    return area;
}

int main(){
    vector<int> v={1,8,6,2,5,4,8,3,7};
    cout<<ans(v);

}