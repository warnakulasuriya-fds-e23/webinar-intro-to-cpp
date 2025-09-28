#include <iostream>

int main() {
    int scores[5] = {85, 92, 78, 95, 88};

    int totalScore = 0;
    
    std::cout << "Element at index 0 (First score): " << scores[0] << std::endl;
    std::cout << "Element at index 2 (Third score): " << scores[2] << std::endl;

    std::cout << "\nAll scores in the array:" << std::endl;
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Score " << i + 1 << ": " << scores[i] << std::endl;
        totalScore += scores[i];
    }
    
    double averageScore = (double)totalScore / 5;
    
    std::cout << "\nTotal Score: " << totalScore << std::endl;
    std::cout << "Average Score: " << averageScore << std::endl;

    return 0;
}