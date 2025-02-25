#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    TreeNode* root;

    BinaryTree() : root(nullptr) {}

    TreeNode* insert(TreeNode* node, int data) {
        if (node == nullptr) {
            return new TreeNode(data);
        }

        if (data < node->data) {
            node->left = insert(node->left, data);
        } else {
            node->right = insert(node->right, data);
        }

        return node;
    }

    void inOrderTraversal(TreeNode* node) {
        if (node == nullptr) return;

        inOrderTraversal(node->left);
        cout << node->data << " ";
        inOrderTraversal(node->right);
    }
};

int main() {
    BinaryTree tree;
    tree.root = tree.insert(tree.root, 10);
    tree.insert(tree.root, 5);
    tree.insert(tree.root, 15);
    tree.insert(tree.root, 3);
    tree.insert(tree.root, 7);

    cout << "In-order Traversal: ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    return 0;
}
