#include "MergeSort.hpp"

void MergeSort::SortingAlgorithm() {
    this->Mergesort(array, 0, array.size() - 1);
};

void MergeSort::Mergesort(std::vector<int>& array, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        Mergesort(array, left, mid);
        Mergesort(array, mid + 1, right);
        Merge(array, left, mid, right);
    }
}

void MergeSort::Merge(std::vector<int>& array, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftArray(n1), rightArray(n2);

    for (i = 0; i < n1; i++) leftArray[i] = array[left + i];
    for (j = 0; j < n2; j++) rightArray[j] = array[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = rightArray[j];
        j++;
        k++;
    }
};