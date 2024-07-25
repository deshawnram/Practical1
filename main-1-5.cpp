#include <iostream>

int count_evens(int number);

int main() {
    int number = 10;
    std::cout << "Count of even numbers up to " << number << ": " << count_evens(number) << std::endl;
    return 0;
}