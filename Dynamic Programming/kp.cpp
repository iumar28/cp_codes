#include<bits/stdc++.h>
using namespace std;

int kp(vector<int> &weight,vector<int> &value,int W,int n){
    if(n==0||W==0){return 0;}

    if(weight[n-1]<=W){
        return max(value[n-1]+kp(weight,value,W-weight[n-1],n-1),kp(weight,value,W,n-1));
    }
    // if(weight[n-1]>W)
    return kp(weight,value,W,n-1);
}

int main(){
    vector<int> weight={1,3,4,5};
    vector<int> value={1,4,5,7};
    int W=7;
    cout<<kp(weight,value,W,weight.size());
}