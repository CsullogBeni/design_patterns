#include "QuickSort.hpp"

void QuickSort::SortingAlgorithm() {
    Quicksort(array, 0, array.size() - 1);
}

void QuickSort::Quicksort(std::vector<int>& array, int low, int high) {
    if (low < high) {
        int pi = Partition(array, low, high);
        Quicksort(array, low, pi - 1);
        Quicksort(array, pi + 1, high);
    }
}

int QuickSort::Partition(std::vector<int>& array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (array[j] < pivot) {
            i++;
            std::swap(array[i], array[j]);
        }
    }
    std::swap(array[i + 1], array[high]);
    return (i + 1);
}