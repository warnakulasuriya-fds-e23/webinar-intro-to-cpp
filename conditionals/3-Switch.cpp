#include <iostream>
#include <string>

int main() {
    int day_number = 3;
    std::string day_type;

    switch (day_number) {
        case 1:
        // assuming 1 is sunday
            day_type = "Weekend";
            break;
        case 2:
            day_type = "Weekday";
            break;        
        case 3:
            day_type = "Weekday";
            break;        
        case 4:
            day_type = "Weekday";
            break;        
        case 5:
            day_type = "Weekday";
            break;        
        case 6:
            day_type = "Weekday";
            break;
        case 7:
            day_type = "Weekend";
            break;        
        default:
            day_type = "Invalid Day Number";
    }

    std::cout << "Day Number: " << day_number << std::endl;
    std::cout << "Type: " << day_type << std::endl;

    return 0;
}