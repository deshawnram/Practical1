#include <iostream>

int min_element(int array[], int n);

int main() {
    int array[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "Minimum element: " << min_element(array, n) << std::endl;
    return 0;
}