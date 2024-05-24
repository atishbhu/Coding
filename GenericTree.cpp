#include <bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
      int data;
      vector<TreeNode*> children;
      TreeNode(int data) {
          this -> data = data;
      }
};

TreeNode* takeInput() {
    int rootData;
    cout<<"Enter Data : ";
    cin>>rootData;
    TreeNode* root = new TreeNode(rootData);
    cout<<endl;
    int n;
    cout<<"Enter how many children of "<<rootData<<endl;
    cin>>n;
    for(int i = 0; i < n; i++) {
        TreeNode* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
TreeNode* takeInputLevelWise() {
    int rootData;
    cout<<"Enter root Data "<<endl;
    cin>>rootData;
    TreeNode* root = new TreeNode(rootData);
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode* f = q.front();
        q.pop();
        cout<<"Enter the number of child of "<<f->data<<endl;
        int n;
        cin>>n;
        for(int i = 1; i <= n; i++) {
            cout<<"Enter "<<i<<" th child of "<<f->data<<endl;
            int childData;
            cin>>childData;
            TreeNode* child = new TreeNode(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}

void print(TreeNode* root) {
    if(root == nullptr) {
        return;
    }
    cout<<root -> data <<" : ";
    for(int i = 0; i < root->children.size(); i++) {
        cout<<root->children[i] -> data<<", ";
    }
    cout<<endl;
    for(int i = 0; i < root->children.size(); i++) {
        print(root -> children[i]);
    }
}

int main() {
    TreeNode* root;
    root = takeInputLevelWise();
    print(root);

    return 0;
}
