#include<bits/stdc++.h>
using namespace std;

struct node{
    public: 
    int data;
    node *left,*right;

    // node(int data){
    //     this->data=data;
    //     left=right=NULL;
    // }
};

void preorder(struct node* node){
    if(node==NULL){return;}
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}

void inorder(struct node* node){
    if(node==NULL){return;}
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
void postorder(struct node* node){
    if(node==NULL){return;}
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}

node* newnode(int data){
    node* temp=new node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}


int main(){
    struct node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);

}