#pragma once

#include <iostream>


/**
 * @class Tree
 * @brief A class representing a tree in the flyweight design pattern.
 *
 * This class represents a tree in the flyweight design pattern. It has a name, color and texture.
 * The class is immutable and the data cannot be changed after the object is created.
 * The class provides a constructor to create a tree with the given name, color and texture.
 * The class provides a method to display the name, color and texture of the tree.
 */
class TreeType
{
private:

    /**
     * @brief The name of the tree.
     *
     * This is the name of the tree.
     */
    std::string name;

    /**
     * @brief The color of the tree.
     *
     * This is the color of the tree.
     */
    std::string color;

    /**
     * @brief The texture of the tree.
     *
     * This is the texture of the tree.
     */
    std::string texture;

public:

    TreeType();

    /**
     * @brief Constructor.
     * @param name The name of the tree.
     * @param color The color of the tree.
     * @param texture The texture of the tree.
     *
     * This is the constructor of the class. It takes the name, color and texture as parameters.
     * It initializes the name, color and texture of the tree.
     */
    TreeType(std::string name, std::string color, std::string texture);

    /**
     * @brief Get the name of the tree.
     *
     * @return std::string
     */
    std::string GetName() const;

    /**
     * @brief Get the color of the tree.
     *
     * @return std::string
     */
    std::string GetColor() const;

    /**
     * @brief Get the Texture object
     * 
     * @return std::string 
     */
    std::string GetTexture() const;

    /**
     * @brief Method to display the name, color and texture of the tree.
     *
     * This method displays the name, color and texture of the tree.
     */
    void Display(int xCord, int yCord) const;
};
