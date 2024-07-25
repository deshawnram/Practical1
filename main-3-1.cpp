#include <iostream>

bool is_fanarray(int array[], int n);

int main() {
    int array1[] = {1, 2, 3, 2, 1};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    std::cout << "Array1 is fan array: " << (is_fanarray(array1, n1) ? "true" : "false") << std::endl;

    int array2[] = {1, 2, 1, 2, 1};
    int n2 = sizeof(array2) / sizeof(array2[0]);
    std::cout << "Array2 is fan array: " << (is_fanarray(array2, n2) ? "true" : "false") << std::endl;

    return 0;
}