#include <iostream>

void print_pass_fail(char grade);

int main() {
    print_pass_fail('A');  // Pass
    print_pass_fail('D');  // Fail
    print_pass_fail('Z');  // Nothing
    return 0;
}