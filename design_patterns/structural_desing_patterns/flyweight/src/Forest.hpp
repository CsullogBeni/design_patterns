#pragma once

#include <iostream>
#include <list>

class Tree;
class TreeFactory;

/**
 * @class Forest
 * @brief A class representing a forest of trees.
 *
 * This class is a container for Tree objects. It provides methods to add and
 * display the trees in the forest.
 */
class Forest {
private:
    /**
     * @brief The list of trees in the forest.
     *
     * This is a list of Tree objects in the forest.
     */
    std::list<Tree*> trees;

    /**
     * @brief The tree factory used to create trees.
     *
     * This is an instance of the TreeFactory class used to create new Tree
     * objects.
     */
    TreeFactory* treeFactory;

public:
    /**
     * @brief Construct a new Forest object.
     *
     * Initializes a new instance of the Forest class.
     */
    Forest();

    /**
     * @brief Destroy the Forest object.
     *
     * Cleans up any resources used by the Forest.
     */
    ~Forest();

    /**
     * @brief Plant a tree in the forest.
     *
     * @param name The name of the tree.
     * @param color The color of the tree.
     * @param texture The texture of the tree.
     * @param xCord The x coordinate of the tree.
     * @param yCord The y coordinate of the tree.
     *
     * This method creates a new Tree object and adds it to the forest.
     */
    void PlantTree(std::string name, std::string color, std::string texture, int xCord, int yCord);

    /**
     * @brief Display the trees in the forest.
     *
     * This method displays the names and coordinates of the trees in the
     * forest.
     */
    void Display();
};
