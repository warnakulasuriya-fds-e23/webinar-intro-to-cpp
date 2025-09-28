#include <iostream>
#include <string>

int main() {
    int age = 32;
    int years_experience = 8;
    std::string category;

    if (age < 18) {
        category = "Ineligible (Too Young)";
    } else if (age >= 60) {
        category = "Senior (Retirement Age)";
    } else {
        if (years_experience >= 10 && age >= 30) {
            category = "Expert Level";
        } else if (years_experience >= 5 || age > 25) {
            category = "Mid-Level";
        } else {
            category = "Junior Level";
        }
    }

    std::cout << "Age: " << age << std::endl;
    std::cout << "Experience: " << years_experience << " years" << std::endl;
    std::cout << "Job Category: " << category << std::endl;

    return 0;
}