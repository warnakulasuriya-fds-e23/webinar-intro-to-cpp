#include <iostream>

int main() {
    int score = 85; 

    std::cout << "The student's score is: " << score << std::endl;

    if (score >= 90) {
        std::cout << "Grade: A (Excellent!)" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade: B (Good Job)" << std::endl;
    } else if (score >= 70) {
        std::cout << "Grade: C (Average)" << std::endl;
    } else {
        std::cout << "Grade: F (Needs Improvement)" << std::endl;
    }

    return 0;
}