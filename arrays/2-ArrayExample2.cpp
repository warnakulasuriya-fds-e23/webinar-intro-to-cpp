#include <iostream>
#include <iomanip>

int calculateRowSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    
    int matrix[ROWS][COLS] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {5,  10, 15, 20}
    };
    
    int grandTotal = 0;

    std::cout << "--- Matrix Data and Row Totals ---" << std::endl;

    for (int i = 0; i < ROWS; i++) {
        int rowSum = 0;
        
        std::cout << "Row " << i + 1 << ": ";
        
        for (int j = 0; j < COLS; j++) {
            std::cout << std::setw(4) << matrix[i][j];
            rowSum += matrix[i][j];
        }
        
        std::cout << " | Total: " << rowSum << std::endl;
        grandTotal += rowSum;
    }

    std::cout << "----------------------------------" << std::endl;

    int lastRowTotal = calculateRowSum(matrix[ROWS - 1], COLS);

    std::cout << "Grand Total of all elements: " << grandTotal << std::endl;
    std::cout << "Total of last row (via function): " << lastRowTotal << std::endl;

    return 0;
}