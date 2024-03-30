#include <chrono>
#include <iostream>
using namespace std;

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    // Initialize variables
    int addResult = 0;
    int mulResult = 1;
    int divResult = 1;

    // Addition
    for(int i = 0; i <= 10000000000; ++i) {
        addResult += i;
    }
    cout << "Add result is: " << addResult;

    // Multiplication
    for(int i = 1; i <= 5000000000; ++i) {
        mulResult *= 2;
    }

    cout << "Multiply result is: " << mulResult;

    // Division
    for(int i = 1; i <= 2000000000; ++i) {
        divResult /= 2;
    }

    cout << "Division result is: " << divResult;

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> execution_time = end - start;
    std::cout << "Execution time: " << execution_time.count() << " ms" << std::endl;

    return 0;
}
