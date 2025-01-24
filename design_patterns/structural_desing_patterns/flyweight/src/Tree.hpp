#pragma once

#include <iostream>

class TreeType;
class TreeFactory;


/**
 * @class Tree
 * @brief A class representing a tree in the flyweight design pattern.
 *
 * This class represents a tree in the flyweight design pattern. It is a concrete
 * component that encapsulates a TreeType object and the coordinates of the tree.
 * It provides a method to display the tree.
 */
class Tree 
{
private:

    /**
     * @brief The type of the tree.
     * This is the type of the tree. It is a TreeType object.
     */
    TreeType* treeType;

    /**
     * @brief The x coordinate of the tree.
     *
     * This is the x coordinate of the tree.
     */
    int xCord;

    /**
     * @brief The y coordinate of the tree.
     *
     * This is the y coordinate of the tree.
     */
    int yCord;

public:

    /**
     * @brief Constructor
     * 
     * @param treeFactory The tree factory
     * @param name The name of the tree
     * @param color The color of the tree
     * @param texture The texture of the tree
     * @param xCord The x coordinate of the tree
     * @param yCord The y coordinate of the tree
     */
    Tree(TreeFactory* treeFactory, std::string name, std::string color, std::string texture, int xCord, int yCord);

    /**
     * @brief Construct a new Tree object
     * 
     * @param name The name of the tree
     * @param color The color of the tree
     * @param texture The texture of the tree
     * @param xCord The x coordinate of the tree
     * @param yCord The y coordinate of the tree
     */
    Tree(std::string name, std::string color, std::string texture, int xCord, int yCord);
    /**
     * @brief Method to display the tree.
     *
     * This method displays the tree. It takes no parameters and returns nothing.
     */
    void Display() const;
};
