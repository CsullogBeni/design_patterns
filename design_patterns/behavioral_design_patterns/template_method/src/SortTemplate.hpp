#pragma once

#include <iostream>
#include <vector>


/**
 * @class SortTemplate
 * @brief The SortTemplate class is an abstract base class that provides a template
 *        for sorting algorithms.
 *
 * This class provides a template for sorting algorithms. It declares a pure
 * virtual method SortingAlgorithm that must be implemented by derived classes.
 * The class also provides a constructor that takes a vector of integers as an
 * argument and initializes the array member variable. The Sort method sorts the
 * array using the SortingAlgorithm method and prints the sorted array. The
 * Print method prints the sorted array.
 */
class SortTemplate
{
protected:

    /**
     * @var std::vector<int> array
     * @brief The array to be sorted.
     */
    std::vector<int> array;

    /**
     * @fn virtual void SortingAlgorithm() = 0
     * @brief Pure virtual method to be implemented by derived classes.
     *
     * This method must be implemented by derived classes to perform the
     * actual sorting.
     */
    virtual void SortingAlgorithm() = 0;

public:
    /**
     * @fn SortTemplate(const std::vector<int>& input)
     * @brief Constructor of the SortTemplate class.
     *
     * This constructor takes a vector of integers as an argument and
     * initializes the array member variable.
     * @param input The input vector to be sorted.
     */
    SortTemplate(const std::vector<int>& input) {
        array = input;
    }

    /**
     * @fn virtual ~SortTemplate()
     * @brief Virtual destructor of the SortTemplate class.
     *
     * This virtual destructor ensures that derived classes are properly
     * destroyed.
     */
    virtual ~SortTemplate() {}

    /**
     * @fn void Sort()
     * @brief Sorts the array using the SortingAlgorithm method and prints the
     *        sorted array.
     *
     * This method sorts the array using the SortingAlgorithm method and
     * prints the sorted array.
     */
    void Sort() {
        SortingAlgorithm();
        Print();
    }

    /**
     * @fn void Print()
     * @brief Prints the sorted array.
     *
     * This method prints the sorted array.
     */
    void Print() {
        std::cout << "Sorted array: ";
        for (const auto& num : array) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
};
