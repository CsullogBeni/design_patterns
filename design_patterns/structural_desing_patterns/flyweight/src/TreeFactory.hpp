#pragma once

#include <iostream>
#include <list>

class TreeType;

/**
 * @class TreeFactory
 * @brief Factory class for creating and managing TreeType objects.
 *
 * The TreeFactory class is responsible for maintaining a collection of TreeType objects.
 * It provides a method to obtain a TreeType object based on specified name, color, and texture,
 * ensuring that duplicate TreeType objects are not created.
 */
class TreeFactory {
private:
    /**
     * @brief List of unique TreeType objects.
     *
     * This list stores TreeType objects created by the factory to avoid duplicates.
     */
    std::list<TreeType*> treeTypes;

public:
    /**
     * @brief Construct a new TreeFactory object.
     *
     * Initializes a new instance of the TreeFactory class.
     */
    TreeFactory();

    /**
     * @brief Destroy the TreeFactory object.
     *
     * Cleans up any resources used by the TreeFactory.
     */
    ~TreeFactory();

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
    TreeType* GetTreeType(std::string name, std::string color, std::string texture);
};
