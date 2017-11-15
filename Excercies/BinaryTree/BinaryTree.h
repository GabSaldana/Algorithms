#include "BinaryTreeNode.h"

class BinaryTree {
    public:
        BinaryTree() : root(NULL) {}
        ~BinaryTree();
        
        bool isEmpty(BinaryTreeNode *head) {
            return head == NULL;
        }
        
        void insert(int value){
            if(isEmpty(root)) {
                root = new BinaryTreeNode(value, NULL, NULL);
                return;
            }
            BinaryTreeNode *temp = root;
            while (!isEmpty(temp)) {
                if (value < temp -> data) {
                    if (isEmpty(temp -> left)) {
                        temp -> left = new BinaryTreeNode(value, NULL, NULL);
                        return;
                    }
                    else 
                        temp = temp -> left;
                    continue;
                }
               else {
                    if (isEmpty(temp -> right)) {
                        temp -> right = new BinaryTreeNode(value, NULL, NULL);
                        return;
                    }
                    else 
                        temp = temp -> right;
                    continue;
                }
            }
        }
        
        void _preorder(BinaryTreeNode *root) {
            BinaryTreeNode *temp = root;
            if (!isEmpty(temp)) {
                cout << temp -> data << ", ";
                _preorder(temp -> left);
                _preorder(temp -> right);
            }
        }
        
        void preorder(){//r,i,d
            _preorder(root);
            cout << '\n';
        }
        
        void _inorder(BinaryTreeNode *root) {
            BinaryTreeNode *temp = root;
            if (!isEmpty(temp)) {
                _inorder(temp -> left);
                cout << temp -> data << ", ";
                _inorder(temp -> right);
            }
        }
        
        void inorder(){//r,i,d
            _inorder(root);
            cout << '\n';
        }
        
        void _posorder(BinaryTreeNode *root) {
            BinaryTreeNode *temp = root;
            if (!isEmpty(temp)) {
                _posorder(temp -> left);
                _posorder(temp -> right);
                cout << temp -> data << ", ";
            }
        }
        
        void posorder(){//r,i,d
            _posorder(root);
            cout << '\n';
        }
        
    private:
        BinaryTreeNode *root;
};