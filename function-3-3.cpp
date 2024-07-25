#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n == 0) return 0.0; 
    
    double sum = 0.0;

    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum / n;
}