#include <chrono>
#include <iostream>
#include <vector>

int main() {
    auto start_time = std::chrono::high_resolution_clock::now();


    std::vector<int> array_elements(5 * 100000);

    // Performing write and read operations
    for (int i = 0; i < 10000; ++i) { // Outer loop
        for (size_t j = 0; j < array_elements.size(); ++j) {
            array_elements[j] = j;
            volatile int another_array = array_elements[j];
        }
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> total_time_taken = end_time - start_time;

    std::cout << "Total time taken is " << total_time_taken.count() << " seconds" << std::endl;

    return 0;
}
