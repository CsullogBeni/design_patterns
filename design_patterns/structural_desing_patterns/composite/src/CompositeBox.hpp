#pragma once

#include "Box.hpp"
#include <list>
#include <exception>
#include "Box.hpp"
#include "Product.hpp"

/**
 * @class CompositeBox
 * @brief A class representing a composite box in the composite design pattern.
 *
 * This class is the composite container in the composite design pattern. It is a
 * concrete component that represents a box that can contain other boxes. It
 * implements the Box interface and provides methods for adding and removing
 * other boxes from the container.
 */
class CompositeBox : public Box
{
private:

    /// @brief List of boxes in the composite box.
    ///
    /// This list stores all the boxes in the composite box. It is a private
    /// member of the class and is used by the methods of the class to
    /// manage the boxes.
    std::list<Box*> boxes;

public:

    /// @brief Constructor.
    ///
    /// This constructor initializes the list of boxes in the composite box.
    CompositeBox();

    /// @brief Destructor.
    ///
    /// This destructor deletes all the boxes in the composite box.
    ~CompositeBox();

    /// @brief Method to add a box to the composite box.
    ///
    /// This method adds a box to the composite box. It takes a pointer to a
    /// Box object as a parameter and adds it to the list of boxes in the
    /// composite box.
    void Add(Box* box);

    /// @brief Method to remove a box from the composite box.
    ///
    /// This method removes a box from the composite box. It takes a pointer
    /// to a Box object as a parameter and removes it from the list of boxes
    /// in the composite box.
    void Remove(Box* box);

    /// @brief Method to get a box from the composite box.
    ///
    /// This method gets a box from the composite box. It takes an integer
    /// as a parameter and returns a pointer to the box at that index in the
    /// list of boxes.
    Box* GetChild(int index);

    /// @brief Method to get the value of the composite box.
    ///
    /// This method returns the value of the composite box. It is a pure
    /// virtual method of the Box interface and is implemented by this
    /// class.
    const int GetValue() const override;

    /// @brief Method to get the name of the composite box.
    ///
    /// This method returns the name of the composite box. It is a pure
    /// virtual method of the Box interface and is implemented by this
    /// class.
    const std::string GetName() const override;
};
