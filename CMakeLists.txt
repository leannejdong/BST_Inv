cmake_minimum_required(VERSION 3.12)
project(BST_Inv)

set(CMAKE_CXX_STANDARD 20)
enable_testing()
add_executable(BST_Inv main.cpp bst_recur.h bst_iter.h bst.h nTree_Inv.h)
add_executable(tree_test tree_test.cpp)
add_test(NAME tree COMMAND tree_test)