#include "TreeFactory.hpp"
#include "TreeType.hpp"


/**
 * @brief Construct a new TreeFactory object.
 *
 * Initializes a new instance of the TreeFactory class.
 */
TreeFactory::TreeFactory() {
    this->treeTypes = std::list<TreeType*>();
}

/**
 * @brief Destroy the TreeFactory object.
 *
 * Cleans up any resources used by the TreeFactory.
 */
TreeFactory::~TreeFactory() 
{
    for (auto it = this->treeTypes.begin(); it != this->treeTypes.end(); ++it)
    {
        delete *it;
    }
}

/**
 * @brief Get a TreeType object.
 *
 * Retrieves a TreeType object from the factory. If a TreeType with the specified
 * name, color, and texture does not exist, a new one is created and stored.
 *
 * @param name The name of the tree type.
 * @param color The color of the tree type.
 * @param texture The texture of the tree type.
 * @return A TreeType object matching the specified parameters.
 */
TreeType* TreeFactory::GetTreeType(std::string name, std::string color, std::string texture) {
    for (auto it = this->treeTypes.begin(); it != this->treeTypes.end(); ++it)
    {
        if ((*it)->GetName() == name && (*it)->GetColor() == color && (*it)->GetTexture() == texture)
        {
            return *it;
        }
    }
    TreeType* treeType = new TreeType(name, color, texture);
    this->treeTypes.push_back(treeType);
    return treeType;
}
