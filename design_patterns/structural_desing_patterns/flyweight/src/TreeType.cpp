#include "TreeType.hpp"


TreeType::TreeType() {}

/**
 * @brief Constructor.
 * @param name The name of the tree.
 * @param color The color of the tree.
 * @param texture The texture of the tree.
 *
 * This is the constructor of the class. It takes the name, color and texture as parameters.
 * It initializes the name, color and texture of the tree.
 */
TreeType::TreeType(std::string name, std::string color, std::string texture) {
    this->name = name;
    this->color = color;
    this->texture = texture;
}

/**
 * @brief Get the name of the tree.
 *
 * @return std::string
 */
std::string TreeType::GetName() const {
    return this->name;
}

/**
 * @brief Get the color of the tree.
 *
 * @return std::string
 */
std::string TreeType::GetColor() const {
    return this->color;
}

/**
 * @brief Get the Texture object
 * 
 * @return std::string 
 */
std::string TreeType::GetTexture() const {
    return this->texture;
}

/**
 * @brief Method to display the name, color and texture of the tree.
 * @param xCord The x coordinate of the tree.
 * @param yCord The y coordinate of the tree.
 *
 * This method displays the name, color and texture of the tree. It takes the x and y
 * coordinates of the tree as parameters.
 */
void TreeType::Display(int xCord, int yCord) const {
    std::cout << "Tree at (" << xCord << ", " << yCord << ")\n - Name: " << this->name << "\n - Color: " << this->color << "\n - Texture: " << this->texture << std::endl;
    int height = 3;
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j) {
            std::cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    int trunkWidth = height / 3;
    int trunkHeight = height / 4;
    if (trunkWidth % 2 == 0) ++trunkWidth;

    for (int i = 0; i < trunkHeight; ++i) {
        for (int j = 1; j <= height - trunkWidth / 2 - 1; ++j) {
            std::cout << " ";
        }

        for (int k = 1; k <= trunkWidth; ++k) {
            std::cout << "|";
        }

        std::cout << std::endl;
    }
}
