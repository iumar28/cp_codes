#include<bits/stdc++.h>
using namespace std;
vector<int,list<int>> adj[100004];
//for subtree only
vector<int> subtree(100004,0);
//Using dfs traversal for finding the size of the subtree (number of nodes it contains)
void dfs(int node,int parent){
    cout<<node<<" ";
    int sum=0;
    for(auto x:adj[node]){
        if(x!=parent){
            dfs(x,node);
            sum+=subtree[x];
        }
    }
    subtree[node]=sum+1;
    
}

//The dfs traversal
void dfs(int node,int parent){
    cout<<node<<" ";
    for(auto x:adj[node]){
        if(x!=parent){
            dfs(x,node);
        }

    }
}

//This bfs is the linear traversal technique...
void bfs(){
    queue<pair<int,int>> q;
    q.push({1,0});
    while(!q.empty()){
        auto x=q.front();
        q.pop();
        int node=x.first;
        int parent=x.second;

        for(auto x:adj[node]){
            if(x!=parent){
                q.push({x,parent});
            }
        }
    }

}

int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


}


 
