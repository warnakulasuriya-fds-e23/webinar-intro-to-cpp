#include <iostream>
#include <iomanip>

int main() {
    int size = 5;

    // Outer loop: controls the rows (i)
    for (int i = 1; i <= size; i++) {
        // Inner loop: controls the columns (j)
        for (int j = 1; j <= size; j++) {
            // Calculate and print the product
            std::cout << std::setw(3) << i * j;
        }
        // Print a newline character after each row is complete
        std::cout << std::endl;
    }
    return 0;
}