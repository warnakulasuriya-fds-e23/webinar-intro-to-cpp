#include <iostream>
#include <string>

int main() {
    int day_number = 3;
    std::string day_type;

    switch (day_number) {
        case 1:
        case 7:
            day_type = "Weekend";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            day_type = "Weekday";
            break;
        default:
            day_type = "Invalid Day Number";
    }

    std::cout << "Day Number: " << day_number << std::endl;
    std::cout << "Type: " << day_type << std::endl;

    return 0;
}