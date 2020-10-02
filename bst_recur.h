//
// Created by leanne on 10/2/20.
// https://gcc.godbolt.org/z/7rqT6P
//

#ifndef BST_INV_BST_RECUR_H
#define BST_INV_BST_RECUR_H

#include "bst.h"
#include <iostream>
#include <memory>

using namespace std;

// template function to perform preorder traversal of the tree
template <typename tVal>
void RecursivePreOrder(binaryTree<tVal> *root)
{
    // if the tree is empty
    if (root == nullptr)
    {
        return;
    }
    cout << root-> v_ << " ";
    RecursivePreOrder(root->left.get());
    RecursivePreOrder(root->right.get());
}

template <typename tVal>
void invertBinaryTree(binaryTree<tVal> *root)
{
    // if the tree is empty
    if (root == nullptr)
    {
        return;
    }

    // swap left subtree with right subtree
    swap(root->left, root->right);

    // invert left subtree
    invertBinaryTree(root->left.get());

    // invert right subtree
    invertBinaryTree(root->right.get());
}


#endif //BST_INV_BST_RECUR_H
