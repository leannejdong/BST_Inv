#include "bst_recur.h"
#include "bst_iter.h"
#include <iostream>

int main() {
    /* Construct below tree
               1
             /   \
            /     \
           2       3
          / \     / \
         4   5   6   7
     */

    binaryTree<int> number = 1;
    binaryTree<int> *root = &number;

    root->left =  make_unique<binaryTree<int>>(2);
    root->right =  make_unique<binaryTree<int>>(3);
    root->left->left =  make_unique<binaryTree<int>>(4);
    root->left->right = make_unique<binaryTree<int>>(5);
    root->right->left = make_unique<binaryTree<int>>(6);
    root->right->right = make_unique<binaryTree<int>>(7);

    stackinvertBinaryTree(root);
    RecursivePreOrder(root);
    nonRecursivePreOrder(root);

}
