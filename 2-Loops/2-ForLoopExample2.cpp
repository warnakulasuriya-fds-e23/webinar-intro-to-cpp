#include <iostream>

int main() {
    int base = 2;
    int limit = 5; 
    long long result = 1;

    std::cout << "Calculating powers of " << base << " up to exponent " << limit << ":" << std::endl;

    for (int exponent = 1; exponent <= limit; exponent++) {
        result *= base;
        std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl;
    }

    return 0;
}