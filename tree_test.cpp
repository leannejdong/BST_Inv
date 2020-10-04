#include "nTree_Inv.h"

#include <cassert>

int main()
{
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

    PrintInvnTree(root);

    ostringstream stream;
    nonRecursiveTraversal(root, stream);
    string output = stream.str();
    string expected_output = "10 2 77 88 34 56 1 100 7 8 9 ";
    assert(output == expected_output);

}