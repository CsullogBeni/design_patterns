#pragma once

#include "SortTemplate.hpp"


/**
 * @class MergeSort
 * @brief The MergeSort class is a derived class from SortTemplate class that
 *        implements the merge sort algorithm.
 *
 * The MergeSort class is a derived class from SortTemplate class that
 * implements the merge sort algorithm. It overrides the SortingAlgorithm
 * method of the SortTemplate class.
 */
class MergeSort : public SortTemplate {
protected:
    /**
     * @fn void SortingAlgorithm() override
     * @brief Overriden method from SortTemplate class that sorts the array
     *        using the merge sort algorithm.
     */
    void SortingAlgorithm() override;

    /**
     * @fn void Mergesort(std::vector<int>& array, int left, int right)
     * @brief Recursive method to sort the array using the merge sort algorithm.
     *
     * This method takes the array and the start and end indices of the array
     * and recursively divides the array into two halves until the length of
     * the array is 1, then merges the two halves in sorted order.
     * @param array The array to be sorted.
     * @param start The start index of the array.
     * @param end The end index of the array.
     */
    void Mergesort(std::vector<int>& array, int left, int right);

    /**
     * @fn void Merge(std::vector<int>& array, int left, int mid, int right)
     * @brief Method to merge the two halves of the array in sorted order.
     *
     * This method takes the array and the start index, the middle index and
     * the end index of the array and merges the two halves in sorted order.
     * @param array The array to be merged.
     * @param left The start index of the array.
     * @param mid The middle index of the array.
     * @param right The end index of the array.
     */
    void Merge(std::vector<int>& array, int left, int mid, int right);

public:
    /**
     * @fn MergeSort(const std::vector<int>& input)
     * @brief Constructor of the MergeSort class.
     *
     * This constructor takes the input array and initializes the array of the
     * SortTemplate class.
     * @param input The input array to be sorted.
     */
    MergeSort(const std::vector<int>& input) : SortTemplate(input) {}
};
