#include <iostream>

int main() {
    int height = 5;

    // Outer loop: controls the number of rows
    for (int i = 1; i <= height; i++) {
        
        // Inner loop 1: prints spaces for alignment
        // The number of spaces decreases as 'i' increases
        for (int j = 1; j <= height - i; j++) {
            std::cout << " ";
        }
        
        // Inner loop 2: prints asterisks (stars)
        // The number of stars increases as 'i' increases
        for (int k = 1; k <= i; k++) {
            std::cout << "*";
        }
        
        // Move to the next line after the row is complete
        std::cout << std::endl;
    }
    return 0;
}