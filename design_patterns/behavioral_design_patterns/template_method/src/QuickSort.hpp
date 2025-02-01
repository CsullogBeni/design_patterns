#pragma once

#include "SortTemplate.hpp"


/**
 * @class QuickSort
 * @brief The QuickSort class is a derived class from SortTemplate that implements the quicksort algorithm.
 *
 * The QuickSort class overrides the SortingAlgorithm method from the SortTemplate class to provide
 * a quicksort implementation. It includes methods for performing the quicksort operation and partitioning
 * the array.
 */
class QuickSort : public SortTemplate {
private:
    /**
     * @brief Overridden method from SortTemplate class that sorts the array using the quicksort algorithm.
     */
    void SortingAlgorithm() override;

    /**
     * @brief Recursive method to sort the array using the quicksort algorithm.
     *
     * This method takes the array, and the start and end indices, recursively sorting
     * the array by partitioning it and sorting the partitions.
     * @param array The array to be sorted.
     * @param low The start index of the array.
     * @param high The end index of the array.
     */
    void Quicksort(std::vector<int>& array, int low, int high);

    /**
     * @brief Method to partition the array for the quicksort algorithm.
     *
     * This method selects a pivot element and partitions the array into two parts:
     * elements less than the pivot and elements greater than the pivot.
     * @param array The array to be partitioned.
     * @param low The start index of the array.
     * @param high The end index of the array.
     * @return The partition index.
     */
    int Partition(std::vector<int>& array, int low, int high);

public:
    /**
     * @brief Constructor of the QuickSort class.
     *
     * This constructor takes the input array and initializes the array of the
     * SortTemplate class.
     * @param input The input array to be sorted.
     */
    QuickSort(const std::vector<int>& input) : SortTemplate(input) {}
};
