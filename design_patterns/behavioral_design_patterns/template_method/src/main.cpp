#include <vector>
#include "MergeSort.hpp"
#include "QuickSort.hpp"



int main() {
    MergeSort merge_sort(std::vector<int>{5, 2, 9, 1, 3, 6, 8, 4, 7, 0});
    merge_sort.Sort();

    QuickSort quick_sort(std::vector<int>{5, 2, 9, 1, 3, 6, 8, 4, 7, 0});
    quick_sort.Sort();

    return 0;
}