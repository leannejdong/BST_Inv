#include "bst_recur.h"
#include "bst_iter.h"
#include "nTree_Inv.h"
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

//    binaryTree<int> number = 1;
//    binaryTree<int> *root = &number;
//
//    root->left =  make_unique<binaryTree<int>>(2);
//    root->right =  make_unique<binaryTree<int>>(3);
//    root->left->left =  make_unique<binaryTree<int>>(4);
//    root->left->right = make_unique<binaryTree<int>>(5);
//    root->right->left = make_unique<binaryTree<int>>(6);
//    root->right->right = make_unique<binaryTree<int>>(7);
//
//    stackinvertBinaryTree(root);
//    RecursivePreOrder(root);
//    nonRecursivePreOrder(root);

    /*   Let us create below tree
 *              10
 *        /   /    \   \
 *        2  34    56   100
 *       / \         |   /  | \
 *      77  88       1   7  8  9
 */

    nTree number = 10;
    nTree *root = &number;

    // unique_ptr<nTree> root = newNode(10);
    (root->child).push_back(newNode(2));
    (root->child).push_back(newNode(34));
    (root->child).push_back(newNode(56));
    (root->child).push_back(newNode(100));
    (root->child[0]->child).push_back(newNode(77));
    (root->child[0]->child).push_back(newNode(88));
    (root->child[2]->child).push_back(newNode(1));
    (root->child[3]->child).push_back(newNode(7));
    (root->child[3]->child).push_back(newNode(8));
    (root->child[3]->child).push_back(newNode(9));

    cout << "Level order traversal Before Mirroring\n";

    invertnTree(root);

    nonRecursiveTraversal(root);



}
