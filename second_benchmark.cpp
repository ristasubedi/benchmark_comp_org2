#include <chrono>
#include <iostream>

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    // Initialize variables
    double addResult = 0;
    double mulResult = 1;
    double divResult = 1;

    // Addition
    for(double i = 0; i <= 10000000000; ++i) {
        addResult += i; // Simple addition
    }

    // Multiplication, note: simplified to avoid doubleeger overflow
    for(double i = 1; i <= 5000000000; ++i) {
        mulResult *= 2; // Note: In actuality, this would overflow very quickly
    }

    // Division, note: simplified to avoid division by zero
    for(double i = 1; i <= 2000000000; ++i) {
        divResult /= 2; // Note: This is a simplification
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> execution_time = end - start;
    std::cout << "Execution time: " << execution_time.count() << " ms" << std::endl;

    return 0;
}
