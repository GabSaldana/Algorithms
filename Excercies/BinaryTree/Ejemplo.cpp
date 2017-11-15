#include "BinaryTree.h"

int main() {
    BinaryTree *BT = new BinaryTree();
    
    BT  -> insert(10);
    BT  -> insert(8);
    BT  -> insert(3);
    BT  -> insert(5);
    BT  -> insert(2);
    BT  -> insert(2);

    BT -> preorder();
    cout << "\n";
    BT -> inorder();
    cout << "\n";
    BT -> posorder();
    cout << "\n";
    
    return 0;
    
}
