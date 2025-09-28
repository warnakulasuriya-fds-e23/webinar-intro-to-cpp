#include <iostream>

int main() {
    int countdown = 5;

    while (countdown > 0) {
        std::cout << countdown << std::endl;
        countdown--;
    }

    std::cout << "Lift off!" << std::endl;
    
    return 0;
}