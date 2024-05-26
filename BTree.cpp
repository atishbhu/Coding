
#include <iostream>
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
    root = takeInputRecursive();
    printRecursive(root);

    return 0;
}
