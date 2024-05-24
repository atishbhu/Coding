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
    root = takeInput();
    print(root);

    return 0;
}
