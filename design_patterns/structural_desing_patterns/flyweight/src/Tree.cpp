#include "Tree.hpp"

#include "TreeFactory.hpp"
#include "TreeType.hpp"


/**
 * @brief Construct a new Tree object
 * 
 * @param treeFactory The tree factory
 * @param name The name of the tree
 * @param color The color of the tree
 * @param texture The texture of the tree
 * @param xCord The x coordinate of the tree
 * @param yCord The y coordinate of the tree
 */
Tree::Tree(TreeFactory* treeFactory, std::string name, std::string color, std::string texture, int xCord, int yCord) {
    this->treeType = treeFactory->GetTreeType(name, color, texture);
    this->xCord = xCord;
    this->yCord = yCord;
}

/**
 * @brief Method to display the tree.
 *
 * This method displays the tree. It takes no parameters and returns nothing.
 */
void Tree::Display() const {
    this->treeType->Display(this->xCord, this->yCord);
}
