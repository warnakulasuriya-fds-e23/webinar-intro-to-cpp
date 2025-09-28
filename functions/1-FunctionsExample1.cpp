#include <iostream>
#include <string>

void greetUser(std::string name) {
    std::cout << "Hello, " << name << "! Welcome to the C++ program." << std::endl;
}

int main() {
    std::string userName = "Alex";
    
    greetUser(userName); 
    
    greetUser("Dr. StellarMass");

    return 0;
}