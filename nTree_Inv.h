//
// Created by leanne on 10/3/20.
//

#ifndef BST_INV_NTREE_INV_H
#define BST_INV_NTREE_INV_H
#include <iostream>
#include <stack>
#include <memory>
#include <vector>
#include <sstream>

using namespace std;
using std::vector;

// data structure to store an n-ary tree
struct nTree
{
    int v_;
    vector<unique_ptr<nTree>>child;
    nTree(int v): v_(v), child() {}
};

unique_ptr<nTree>newNode(int v)
{
    return make_unique<nTree>(v);
}

// The non-recursive pre-order traversal can be implemented using a stack
// Function to perform preorder traversal of the ntree
void nonRecursiveTraversal(nTree *root, ostream &stream)
{
    std::stack<nTree *> s;

    // push the current node onto stack
    s.push(root);
    //loop while the stack not empty
    while (!s.empty())
    {
        //store the current node and pop it from the stack
        //  unique_ptr<nTree> curr = s.top();
        nTree* curr = s.top();
        s.pop();
        // current node has been traversed
        if(curr != nullptr)
        {
            stream << curr-> v_ << " ";
        }
        // store all childrent of current node from right to left
        vector<unique_ptr<nTree>>::iterator it = curr->child.end();
        while(it != curr->child.begin())
        {
            it--;
            s.push((*it).get());

        }
    }
}

void PrintInvnTree(nTree *root)
{
    if (root == nullptr)
    {
        return;
    }

    // create an empty stack and push root inside
    stack<nTree *> s;
    s.push(root);

    //run till stack is empty
    while (!s.empty())
    {
        int n = s.size();

        // if this node has children
        while (n > 0)
        {
            // pop top node from stack
            nTree * curr = s.top();
            s.pop();
            cout << curr->v_ << " ";

            for (size_t i = 0; i< curr->child.size(); i++)
                s.push(curr->child[i].get());
            n--;
        }
        cout << endl;
    }
}
#endif
