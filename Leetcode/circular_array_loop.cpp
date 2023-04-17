#include<bits/stdc++.h>
using namespace std;

int next(vector<int> &ans,int index){
    int n=ans.size();
    return (index+ans[index]+n)%n;
}
int ans(vector<int> &v){
    int n=v.size();
    // for(int &x:v){
    //     x%=n;
    for(int i=0;i<n;i++){
        v[i]=v[i]%n;
        int slow=i,fast=i;

        while(v[slow]*v[next(v,slow)]>0 && v[fast]*v[next(v,fast)]>0 && v[fast]*v[next(v,next(v,fast))]>0){
            slow=next(v,slow);
            fast=next(v,next(v,fast));

            if(fast==slow){
                if(slow==next(v,slow)){return false;}
                return true;
                }
        }
        //yaha ham un numbers ki value zero banaenge jinki vajah se cycle nahi ban paa rahi...
        slow=i;
        int val=v[i];
        while(val*v[slow]>0){
            int nexx=next(v,slow);
            v[slow]=0;
            slow=nexx;
        }
    return false;
    }

}

int main(){
    vector<int> v={-1,-1,-1};
    cout<<ans(v);
}