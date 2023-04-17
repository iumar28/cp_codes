  queue<TreeNode*> q;
    q.push(root);
    TreeNode* temp;
    int n, level = 1;
    stack<int> s;
 
    while (!q.empty()) {
        n = q.size();
        while (n--) {
            temp = q.front();
            q.pop();
 
            if (level % 2) {
                if (temp->left) {
                    q.push(temp->left);
                    s.push(temp->left->val);
                }
 
                if (temp->right) {
                    q.push(temp->right);
                    s.push(temp->right->val);
                }
            }
            else {
 
                temp->val = s.top();
                s.pop();
 
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
        }
        level++;
    }
        return root;
        