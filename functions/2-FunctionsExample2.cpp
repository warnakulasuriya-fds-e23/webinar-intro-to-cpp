#include <iostream>

int cube(int number) {
    return number * number * number;
}

void displayResult(int original, int cubed) {
    std::cout << "The number entered was: " << original << std::endl;
    std::cout << "The cube of " << original << " is: " << cubed << std::endl;
}

int main() {
    int input = 4;
    
    int result = cube(input);
    
    displayResult(input, result);

    return 0;
}