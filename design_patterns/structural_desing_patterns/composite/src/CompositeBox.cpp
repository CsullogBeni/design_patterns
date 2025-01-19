#include "CompositeBox.hpp"

/// @brief Constructor.
/// This constructor initializes the list of boxes in the composite box.
CompositeBox::CompositeBox()
{
    boxes = std::list<Box*>();
}

/// @brief Destructor.
/// This destructor deletes all the boxes in the composite box.
CompositeBox::~CompositeBox()
{
    for (auto box : boxes) {
        delete box;
    }
}

/// @brief Method to add a box to the composite box.
/// This method adds a box to the composite box. It takes a pointer to a
/// Box object as a parameter and adds it to the list of boxes in the
/// composite box.
void CompositeBox::Add(Box* box)
{
    boxes.push_back(box);
}

/// @brief Method to remove a box from the composite box.
/// This method removes a box from the composite box. It takes a pointer
/// to a Box object as a parameter and removes it from the list of boxes
/// in the composite box.
void CompositeBox::Remove(Box* box)
{
    boxes.remove(box);
}

/// @brief Method to get a box from the composite box.
/// This method gets a box from the composite box. It takes an integer
/// as a parameter and returns a pointer to the box at that index in the
/// list of boxes.
Box* CompositeBox::GetChild(int index)
{
    if (index < boxes.size()) {
        auto it = boxes.begin();
        std::advance(it, index);
        return *it;
    }
    else
        throw std::out_of_range("Index out of range");
}

/// @brief Method to get the value of the composite box.
/// This method returns the value of the composite box. It is a pure
/// virtual method of the Box interface and is implemented by this
/// class.
const int CompositeBox::GetValue() const
{
    int sum = 0;
    for (auto box : boxes) {
        sum += box->GetValue();
    }
    return sum;
}

/// @brief Method to get the name of the composite box.
/// This method returns the name of the composite box. It is a pure
/// virtual method of the Box interface and is implemented by this
/// class.
const std::string CompositeBox::GetName() const
{
    std::string name = "";
    for (auto box : boxes) {
        name += box->GetName() + " ";
    }
    return name;
}

