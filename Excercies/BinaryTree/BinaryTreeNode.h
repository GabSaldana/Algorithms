#include<bits/stdc++.h>

using namespace std;

class BinaryTreeNode { 
    public:
        BinaryTreeNode(int data = 0, BinaryTreeNode *left = NULL, BinaryTreeNode *right = NULL) : 
            data(data), right(right), left(left) {}
        friend class BinaryTree;
    private:
        int data;
        BinaryTreeNode *left, *right;
};