// main-1-2.cpp
#include <iostream>

double array_mean(int array[], int n);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "Average of array: " << array_mean(array, n) << std::endl;
    return 0;
}