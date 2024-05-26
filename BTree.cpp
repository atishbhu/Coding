
#include <bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
      int data;
      TreeNode* left;
      TreeNode* right;

      TreeNode(int data) {
          this -> data = data;
          left = nullptr;
          right = nullptr;
      }
};

void printRecursive(TreeNode* root) {
    if(root == nullptr){
        return;
    }
    cout<<root -> data<<", ";
    printRecursive(root -> left);
    printRecursive(root -> right);
}

void pintTreeLevelWise(TreeNode* root){
    if(root == nullptr) return;

    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode* f = q.front();
        q.pop();
        cout<<f -> data<<", ";
        if(f -> left) {
            q.push(f -> left);
        }
        if(f -> right) {
            q.push(f->right);
        }
    }
}

int countNodes(TreeNode* root) {
    if(root == nullptr){
        return 0;
    }
    int leftCount = countNodes(root -> left);
    int rightCount = countNodes(root -> right);
    return leftCount + rightCount + 1;
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
        int lchildData, rchildData;
        cout<<"Enter left child (-1 for no node) "<<f->data<<endl;
        cin>>lchildData;
        if(lchildData != -1) {
            TreeNode* lchild = new TreeNode(lchildData);
            f -> left = lchild;
            q.push(lchild);
        }
        cout<<"Enter right child (-1 for no node) "<<f->data<<endl;
        cin>>rchildData;
        if(rchildData != -1) {
            TreeNode* rchild = new TreeNode(rchildData);
            f -> right = rchild;
            q.push(rchild);
        }
    }
    return root;
}

vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr) {
            return ans;
        }
        vector<int> temp;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        while(!q.empty()) {
            TreeNode* f = q.front();
            q.pop();
            if(f == nullptr) {
                ans.push_back(temp);
                temp.clear();
                if(!q.empty()) {
                    q.push(nullptr);
                }
            }else {
                temp.push_back(f->data);
                if(f -> left) {
                    q.push(f->left);
                }
                if(f -> right) {
                    q.push(f->right);
                }
            }
        }
        return ans;
}

TreeNode* takeInputRecursive() {
    int rootData;
    cout << "Enter node data (-1 for no node): ";
    cin >> rootData;

    if (rootData == -1) {
        return nullptr;
    }

    TreeNode* root = new TreeNode(rootData);

    cout << "Enter left child of " << rootData << endl;
    root->left = takeInputRecursive();

    cout << "Enter right child of " << rootData << endl;
    root->right = takeInputRecursive();

    return root;

}
int main() {
    TreeNode* root;
    root = takeInputLevelWise();
    // pintTreeLevelWise(root);
    cout<<countNodes(root);

    return 0;
}
