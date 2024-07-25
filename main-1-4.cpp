#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {5, 4, 3, 2, 1};
    int n = sizeof(array1) / sizeof(array1[0]);
    std::cout << "Sum of two arrays: " << sum_two_arrays(array1, array2, n) << std::endl;
    return 0;
}