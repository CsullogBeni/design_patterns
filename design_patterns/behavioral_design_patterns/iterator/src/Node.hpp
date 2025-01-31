#pragma once


/**
 * @class Node
 * @brief A node in a binary tree.
 *
 * This class is used to create a binary tree. It contains a value of type T and
 * two pointers to the left and right child nodes.
 */
template <typename T>
class Node 
{
public:
    /**
     * @brief The value of the node.
     */
    T value;

    /**
     * @brief The left child node.
     */
    Node* left;
    
    /**
     * @brief The right child node.
     */
    Node* right;

    /**
     * @brief Constructor.
     * @param value The value of the node.
     */
    Node(T value) : value(value), left(nullptr), right(nullptr) {};
};
