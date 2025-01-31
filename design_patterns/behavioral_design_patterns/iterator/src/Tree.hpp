#pragma once

#include "Iterator.hpp"


/**
 * @class Tree
 * @brief A class representing a tree structure.
 *
 * This class is an abstract base class for tree structures. It defines a pure virtual
 * method CreateIterator, which must be implemented by derived classes to return an 
 * iterator for traversing the elements of the tree. The CreateIterator method returns
 * an iterator that can be used to traverse the tree in different orders (pre-order,
 * in-order, and post-order).
 *
 * @tparam T The type of elements stored in the tree.
 */
template <typename T>
class Tree
{
public:
    virtual Iterator<T>* CreatePreOrderIterator() = 0;
    virtual Iterator<T>* CreateInOrderIterator() = 0;
    virtual Iterator<T>* CreatePostOrderIterator() = 0;
};
