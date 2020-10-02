//
// Created by leanne on 10/2/20.
//

#ifndef BST_INV_BST_H
#define BST_INV_BST_H

#include <memory>


template <typename tVal>
struct binaryTree
{
    tVal v_;
    std::unique_ptr<binaryTree<tVal>> left;
    std::unique_ptr<binaryTree<tVal> > right;
    binaryTree(tVal v): v_(v),
                        left(nullptr), right(nullptr) {}
};
#endif //BST_INV_BST_H
