#include<bits/stdc++.h>
using namespace std;
char a[1000];
vector<int> v;

class Node {
	public:
	int data;
	Node *left,*right;
	Node(int data){
		this->data=data;
		left=right=NULL;
	}
}

node* Createtree(){
	if(root==NULL){return NULL;}

	int no=v[0];
	node *root=new node(n);
	int i=1;
	queue<Node*> q;
	q.push(root);
	

	while(!q.empty||&&i<v.size()){
		Node *temp=q.front();
		q.pop();
		no=v[i++];
		temp->left = new node(no);
		if(i>=v.size()){break;}

		no=v[i++];
		temp->right=new node(no);
		if(i>=v.size()){break;}




	}
}

int sum(Node *root,int x){
	if(root==NULL){return 0;}

	int leftsum=sum(root->left);
	int rightsumm=sum(root->right);

	return root->data+leftsum+rightsum;
}

int counttrees(Node *root,int x){
	if(root==NULL){return 0;}
	int ans=0;
	if(sum(root)==x){ans=1;}

	int left=counttrees(root->left,x);
	int right=counttrees(root->right,x);

	return ans+left+right;
}
void stringttoint(){
	char *ans=strtok(a," ");
	while(ans){
		v.push_back(stoi(ans));
		ans=strtok(NULL," ");
	}
	for(auto x:v){cout<<x<<" ";}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		cin.getline(a,1000);
		stringttoint();
		
	}
}