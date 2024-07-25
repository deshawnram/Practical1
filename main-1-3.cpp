#include <iostream>

int num_count(int array[], int n, int number);

int main() {
    int array[] = {1, 2, 3, 4, 5, 1, 1};
    int n = sizeof(array) / sizeof(array[0]);
    int number = 1;
    std::cout << "Count of " << number << " in array: " << num_count(array, n, number) << std::endl;
    return 0;
}