#pragma once

#include <queue>
#include "Tree.hpp"
#include "Iterator.hpp"
#include "Node.hpp"


template<typename T>
class PreOrderIterator;

template<typename T>
class InOrderIterator;

template<typename T>
class PostOrderIterator;

/**
 * @class BinaryTree
 * @brief A class representing a binary tree.
 *
 * This class is used to create a binary tree. It contains a private member
 * variable of type Node<T>* called m_root, which is the root of the tree.
 * The class contains a default constructor, a destructor, and three methods.
 *
 * @tparam T The type of elements stored in the tree.
 */
template <typename T>
class BinaryTree : public Tree<T>
{
private:
    /// The root of the tree.
    Node<T>* m_root;

public:
    /**
     * @brief Default constructor.
     *
     * The default constructor is used to create an empty binary tree.
     */
    BinaryTree() : m_root(nullptr) {}

    /**
     * @brief Destructor.
     *
     * The destructor is used to destroy the binary tree.
     */
    ~BinaryTree() {};

    /**
     * @brief Get the root of the tree.
     *
     * This method is used to get the root of the tree.
     * @return The root of the tree.
     */
    Node<T>* GetRoot() { return m_root; }

    /**
     * @brief Insert a value into the tree.
     *
     * This method is used to insert a value into the tree.
     * @param value The value to be inserted.
     */
    void Insert(T value)
    {
        Node<T>* newNode = new Node<T>(value);

        if (m_root == nullptr) {
            m_root = newNode;
            return;
        }

        std::queue<Node<T>*> queue;
        queue.push(m_root);
        
        while (!queue.empty()) {
            Node<T>* node = queue.front();
            queue.pop();

            if (node->left == nullptr) {
                node->left = newNode;
                return;
            } else {
                queue.push(node->left);
            }

            if (node->right == nullptr) {
                node->right = newNode;
                return;
            } else {
                queue.push(node->right);
            }
        }
    }

    /**
     * @brief Create a pre-order iterator for the tree.
     *
     * This method is used to create a pre-order iterator for the tree.
     * @return An iterator that can be used to traverse the tree in pre-order.
     */
    Iterator<T>* CreatePreOrderIterator() override {

        return new PreOrderIterator<T>(this);
    }

    /**
     * @brief Create an in-order iterator for the tree.
     *
     * This method is used to create an in-order iterator for the tree.
     * @return An iterator that can be used to traverse the tree in in-order.
     */
    Iterator<T>* CreateInOrderIterator() override {
        return new InOrderIterator<T>(this);
    }

    /**
     * @brief Create a post-order iterator for the tree.
     *
     * This method is used to create a post-order iterator for the tree.
     * @return An iterator that can be used to traverse the tree in post-order.
     */
    Iterator<T>* CreatePostOrderIterator() override {
        return new PostOrderIterator<T>(this);
    }
};


/**
 * @class PreOrderIterator
 * @brief An iterator class that traverses a binary tree in pre-order.
 *
 * This class is an iterator class that traverses a binary tree in pre-order.
 * It uses a stack to traverse the tree. The class provides an interface to
 * traverse the tree in pre-order, and it is a derived class from class
 * Iterator.
 *
 * @tparam T The type of the elements stored in the tree.
 */
template<typename T>
class PreOrderIterator : public Iterator<T>
{
private:
    /// A queue used to store the nodes in the tree.
    std::queue<Node<T>*> m_queue;

    /**
     * @brief Pre-order iteration in a binary tree.
     * 
     * This recursive method is used to traverse the tree in pre-order.
     * 
     * @param node current node of the binary tree.
     */
    void PreOrder(Node<T>* node) {
        if (node == nullptr) return;
        m_queue.push(node);
        PreOrder(node->left);
        PreOrder(node->right);
    }

public:
    /**
     * @brief Constructor.
     *
     * The constructor takes a pointer to a BinaryTree object and construct
     * the iterator.
     *
     * @param tree A pointer to a BinaryTree object.
     */
    PreOrderIterator(BinaryTree<T>* tree)
    {
        if (!tree->GetRoot()) return;
        PreOrder(tree->GetRoot());
    }

    /**
     * @brief Check if there are more elements to iterate over.
     *
     * This method checks if there are more elements to iterate over. It
     * returns true if there are more elements, and false otherwise.
     *
     * @return True if there are more elements, false otherwise.
     */
    bool HasNext() override  {
        return !m_queue.empty();
    }

    /**
     * @brief Get the next element in the iteration.
     *
     * This method gets the next element in the iteration. It throws an
     * IteratorEndException if there are no more elements to iterate over.
     *
     * @return The next element in the iteration.
     */
    T Next() override{
        if (!HasNext()) throw std::out_of_range("No more elements");
        Node<T>* node = m_queue.front();
        m_queue.pop();
        return node->value;
    }
};


/**
 * @class InOrderIterator
 * @brief An iterator class that traverses a binary tree in in-order.
 *
 * This class is an iterator class that traverses a binary tree in in-order.
 * It uses a stack to traverse the tree. The class provides an interface to
 * traverse the tree in in-order, and it is a derived class from class
 * Iterator.
 *
 * @tparam T The type of the elements stored in the tree.
 */
template<typename T>
class InOrderIterator : public Iterator<T>
{
private:
    /// A queue used to store the nodes in the tree.
    std::queue<Node<T>*> m_queue;

    /**
     * @brief 
     *
     * @param node The current node.
     */
    void InOrder(Node<T>* node) {
        if (node == nullptr) return;
        InOrder(node->left);
        m_queue.push(node);
        InOrder(node->right);
    }

public:
    /**
     * @brief Constructor.
     *
     * The constructor takes a pointer to a BinaryTree object and construct
     * the iterator.
     *
     * @param tree A pointer to a BinaryTree object.
     */
    InOrderIterator(BinaryTree<T>* tree) {
        if (!tree->GetRoot()) return;
        InOrder(tree->GetRoot());
    }

    /**
     * @brief Check if there are more elements to iterate over.
     *
     * This method checks if there are more elements to iterate over. It
     * returns true if there are more elements, and false otherwise.
     *
     * @return True if there are more elements, false otherwise.
     */
    bool HasNext() override {
        return !m_queue.empty();
    }

    /**
     * @brief Get the next element in the iteration.
     *
     * This method gets the next element in the iteration. It throws an
     * IteratorEndException if there are no more elements to iterate over.
     *
     * @return The next element in the iteration.
     */
    T Next() override {
        if (!HasNext()) throw std::out_of_range("No more elements");
        Node<T>* node = m_queue.front();
        m_queue.pop();
        return node->value;
    }
};


/**
 * @class PostOrderIterator
 * @brief An iterator class that traverses a binary tree in post-order.
 *
 * This class is an iterator class that traverses a binary tree in post-order.
 * It uses a stack to traverse the tree. The class provides an interface to
 * traverse the tree in post-order, and it is a derived class from class
 * Iterator.
 *
 * @tparam T The type of the elements stored in the tree.
 */
template<typename T>
class PostOrderIterator : public Iterator<T>
{
private:
    /// The queue used to store the nodes in the tree.
    std::queue<Node<T>*> m_queue;

    /**
     * @brief Post-order iteration in a binary tree.
     * 
     * This recursive method is used to traverse the tree in post-order.
     * 
     * @param node current node of the binary tree.
     */
    void PostOrder(Node<T>* node) {
        if (node == nullptr) return;
        PostOrder(node->left);
        PostOrder(node->right);
        m_queue.push(node);
    }

public:
    /**
     * @brief Constructor.
     *
     * The constructor takes a pointer to a BinaryTree object and construct
     * the iterator.
     *
     * @param tree A pointer to a BinaryTree object.
     */
    PostOrderIterator(BinaryTree<T>* tree) {
        if (tree->GetRoot() == nullptr) return;
        PostOrder(tree->GetRoot());
    }

    /**
     * @brief Check if there are more elements to iterate over.
     *
     * This method checks if there are more elements to iterate over. It
     * returns true if there are more elements, and false otherwise.
     *
     * @return True if there are more elements, false otherwise.
     */
    bool HasNext() override {
        return !m_queue.empty();
    }

    /**
     * @brief Get the next element in the iteration.
     *
     * This method gets the next element in the iteration. It throws an
     * IteratorEndException if there are no more elements to iterate over.
     *
     * @return The next element in the iteration.
     */
    T Next() override {
        if (!HasNext()) throw std::out_of_range("No more elements");
        Node<T>* node = m_queue.front();
        m_queue.pop();
        return node->value;
    }
};
