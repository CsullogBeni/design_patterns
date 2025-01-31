#include <iostream>
#include <thread>

#include "BinaryTree.hpp"


/**
 * @brief Pre-order traversal of a binary tree.
 *
 * This function performs a pre-order traversal of a binary tree and prints the
 * elements of the tree to the standard output in pre-order. It takes a BinaryTree
 * object as argument and prints the elements of the tree in pre-order.
 * @param tree The BinaryTree object to traverse in pre-order.
 * @tparam T The type of elements stored in the binary tree.
 */
template <typename T>
void PreOrderTraversal(BinaryTree<T> tree) {
    std::cout << "Begin Pre-order traversal" << std::endl;
    int iterator = 0;
    Iterator<int>* preOrderIterator = tree.CreatePreOrderIterator();
    while (preOrderIterator->HasNext()) {
        std::cout << "Pre-order traversal " << iterator++ << ".: " << preOrderIterator->Next() << std::endl;
    }
    std::cout << "End of pre-order traversal." << std::endl;
}


/**
 * @brief In-order traversal of a binary tree.
 *
 * This function performs an in-order traversal of a binary tree and prints the
 * elements of the tree to the standard output in in-order. It takes a BinaryTree
 * object as argument and prints the elements of the tree in in-order.
 * @param tree The BinaryTree object to traverse in in-order.
 * @tparam T The type of elements stored in the binary tree.
 */

template <typename T>
void InOrderTraversal(BinaryTree<T> tree) {
    std::cout << "Begin In-order traversal" << std::endl;
    int iterator = 0;
    Iterator<int>* inOrderIterator = tree.CreateInOrderIterator();
    while (inOrderIterator->HasNext()) {
        std::cout << "In-order traversal " << iterator++ << ".: " << inOrderIterator->Next() << std::endl;
    }
    std::cout << "End of in-order traversal." << std::endl;
}


/**
 * @brief Post-order traversal of a binary tree.
 *
 * This function performs a post-order traversal of a binary tree and prints the
 * elements of the tree to the standard output in post-order. It takes a BinaryTree
 * object as argument and prints the elements of the tree in post-order.
 * @param tree The BinaryTree object to traverse in post-order.
 * @tparam T The type of elements stored in the binary tree.
 */
template <typename T>
void PostOrderTraversal(BinaryTree<T> tree) {
    std::cout << "Begin Post-order traversal" << std::endl;
    int iterator = 0;
    Iterator<int>* postOrderIterator = tree.CreatePostOrderIterator();
    while (postOrderIterator->HasNext()) {
        std::cout << "Post-order traversal " << iterator++ << ".: " << postOrderIterator->Next() << std::endl;
    }
    std::cout << "End of post-order traversal." << std::endl;
}

/**
 * @brief Entry point of the program demonstrating the iterator pattern on a binary tree.
 *
 * This function creates a binary tree, inserts seven integer values into it, and
 * performs pre-order, in-order, and post-order traversals using iterators. The
 * traversal results are printed to the standard output.
 */
int main() {

    BinaryTree<int> tree;

    tree.Insert(1);
    tree.Insert(2);
    tree.Insert(3);
    tree.Insert(4);
    tree.Insert(5);
    tree.Insert(6);
    tree.Insert(7);

    std::thread preThread(PreOrderTraversal<int>, tree);
    std::thread inThread(InOrderTraversal<int>, tree);
    std::thread postThread(PostOrderTraversal<int>, tree);

    preThread.join();
    inThread.join();
    postThread.join();

    return 0;
}
