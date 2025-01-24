#include "Forest.hpp"
#include "Tree.hpp"
#include "TreeFactory.hpp"


/**
 * @class Forest
 * @brief A class representing a forest of trees.
 *
 * This class is a container for Tree objects. It provides methods to add and
 * display the trees in the forest.
 */
Forest::Forest()
{
    trees = std::list<Tree*>();
    treeFactory = new TreeFactory();
}

/**
 * @brief Destroy the Forest object.
 *
 * This destructor deletes the TreeFactory object.
 */
Forest::~Forest()
{
    delete treeFactory;
    for (auto tree : trees) {
        delete tree;
    }
}

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
void Forest::PlantTree(std::string name, std::string color, std::string texture, int xCord, int yCord){
    Tree* tree = new Tree(treeFactory, name, color, texture, xCord, yCord);
    trees.push_back(tree);
}

/**
 * @brief Display the trees in the forest.
 *
 * This method displays the names and coordinates of the trees in the forest.
 */
void Forest::Display(){
    for (auto it = trees.begin(); it != trees.end(); ++it)
    {
        (*it)->Display();
    }
}
