#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) return 0.0;
    
    std::unordered_map<int, int> frequency;
    double weighted_sum = 0.0;


    for (int i = 0; i < n; ++i) {
        frequency[array[i]]++;
    }

    for (const auto& pair : frequency) {
        weighted_sum += pair.first * pair.second;
    }

    return weighted_sum / n;
}