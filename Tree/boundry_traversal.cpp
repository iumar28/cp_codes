    #include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = nullptr;
    return temp;
}

bool isleaf(Node *root)
{
    if ((root->left == nullptr) && (root->right == nullptr))
    {
        return true;
    }
    return false;
}

void addleft(Node *root, vector<int> &ans)
{
    Node *current = root->left;
    // ans.push_back(current->data);
    while (current)
    {
        if (!isleaf(current))
        {
            ans.push_back(current->data);
        }
        if (current->left)
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }
    }
}

void addright(Node *root, vector<int> &ans)
{
    Node *current = root->right;
    // ans.push_back(current->data);
    vector<int> aux;
    while (current)
    {
        if (!isleaf(current))
        {
            aux.push_back(current->data);
        }
        if (current->right)
        {
            current = current->right;
        }
        else
            current = current->left;
    }
    for (int i = aux.size() - 1; i >= 0; i--)
    {
        ans.push_back(aux[i]);
    }
}

void addleaves(Node *root, vector<int> &ans)
{
    if (isleaf(root))
    {
        ans.push_back(root->data);
        return;
    }
    if (root->left)
    {
        addleaves(root->left, ans);
    }
    if (root->right)
    {
        addleaves(root->right, ans);
    }
}

vector<int> boundary(Node *root)
{
    vector<int> ans;
    if (!root)
        return ans;
    if (!isleaf(root))
    {
        ans.push_back(root->data);
    }
    addleft(root, ans);
    addleaves(root, ans);
    addright(root, ans);
    return ans;
}

int main()
{
    Node *root = newNode(23);
    root->left = newNode(45);
    root->left->left = newNode(54);
    root->left->right = newNode(78);
    root->left->right->left = newNode(22);
    root->left->right->right = newNode(44);
    root->right = newNode(55);
    root->right->right = newNode(50);

    vector<int> ans = boundary(root);
    for (auto x : ans)
    {
        cout << x << " ";
    }
}