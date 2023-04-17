#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){cin>>v[i];}

    int k;cin>>k;

    deque<int> window;
    for(int i=0;i<n;i++){

        while(!window.empty()&&v[window.back()]<=v[i]){
            window.pop_back();
        }
        window.push_back(i);
        // if(window.front()==i-k){
        //     window.pop_front();
        // }
        if(i>=k-1){
            cout<<v[window.front()]<<" ";
        }
    }

    return 0;
}