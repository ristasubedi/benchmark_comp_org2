#include <fstream>
#include <iostream>
#include <chrono>

int main() {
    auto start_time = std::chrono::high_resolution_clock::now();

    // Writing to the file
    std::ofstream out_file("large_file.txt", std::ios::binary);
    if (!out_file) {
        std::cerr << "Error opening file for writing.\n";
        return 1;
    }

    const long long total_bytes_to_write = 1000000000LL; // 10^9 bytes
    const int chunk_size = 100;
    long long bytes_written = 0;
    char write_buffer[chunk_size] = {0};

    while (bytes_written < total_bytes_to_write) {
        out_file.write(write_buffer, chunk_size);
        bytes_written += chunk_size;
    }
    out_file.close();

    // Reading from the file
    std::ifstream in_file("large_file.txt", std::ios::binary);
    if (!in_file) {
        std::cerr << "Error opening file for reading.\n";
        return 1;
    }

    long long bytes_read = 0;
    char read_buffer[chunk_size];

    while (in_file.read(read_buffer, chunk_size) || in_file.gcount() != 0) {
        bytes_read += in_file.gcount();
    }
    in_file.close();

    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> total_time_taken = end_time - start_time;

    std::cout << "Total time taken is " << total_time_taken.count() << " seconds" << std::endl;

    return 0;
}
