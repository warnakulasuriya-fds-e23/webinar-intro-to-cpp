#include <iostream>

int main() {
    int input_value;

    do {
        std::cout << "Enter a positive number (greater than 0): ";
        std::cin >> input_value;
    } while (input_value <= 0);

    std::cout << "Thank you for entering: " << input_value << std::endl;
    
    return 0;
}