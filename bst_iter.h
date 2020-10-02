//
// Created by leanne on 10/2/20.
// https://gcc.godbolt.org/z/Pxfshx

#ifndef BST_INV_BST_ITER_H
#define BST_INV_BST_ITER_H
#include "bst.h"
#include <iostream>
#include <stack>
#include <memory>

// The non-recursive pre-order traversal can be implemented using a stack
// Function to perform preorder traversal of the binary tree
template <typename tVal>
void nonRecursivePreOrder(binaryTree<tVal> *root)
{
    std::stack<binaryTree<tVal> *> s;
    while(true)
    {
        while(root)
        {
            std::cout << " v= " << root-> v_;
            s.push(root);
            root = root->left.get();
        }
        if(s.empty())
            break;
        root = s.top();
        s.pop();
        root = root->right.get();
    }
}

template <typename tVal>
void stackinvertBinaryTree(binaryTree<tVal> *root)
{
    // if the tree is empty
    if (root == nullptr)
    {
        return;
    }
    // create an empty stack and push root nide
    std::stack<binaryTree<tVal> *> s;
    s.push(root);

    // run till stack is empty
    while (!s.empty())
    {
        // pop top node from stack
        binaryTree<tVal> * curr = s.top();
        s.pop();
        // swap left child with right child
        swap(curr->left, curr->right);
        // push right chile of popped node to the stack
        if (curr->right)
        {
            s.push(curr->right.get());
        }
        // push left child of popped node of the stack
        if (curr->left)
        {
            s.push(curr->left.get());
        }
    }

}




#endif //BST_INV_BST_ITER_H
