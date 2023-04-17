#include<bits/stdc++.h>
using namespace std;
char a[1000];
vector<int> v;

class Node{
    public:
    int data;
    Node *left,*right;

    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

void strintoint(){
    char *ans=strtok(a," ");
    while(ans){
        v.push_back(stoi(ans));
        ans=strtok(NULL," ");
    }
}

Node* Createtree(){
    if(strlen(a)==0||v.size()==0){return NULL;}

    int no=v[0];
    int i=1;
    Node *root=new Node(no);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()||i<v.size()){
        Node *temp=q.front();
        q.pop();
        no=v[i++];
        temp->left=new Node(no);
    }


    
}

int counttree(Node *root,int x){
    if(root=NULL){return 0;}
}