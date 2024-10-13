#include <iostream>
using namespace std;

double calculateSalary(int year) {
    if (year == 1) {
        return 15000; // Base salary for the first year
    } else {
        double previousYearSalary = calculateSalary(year - 1);
        return previousYearSalary * 1.04 + 400; // 4% increase plus 400 kr
    }
}

int main() {
    int year;
    while (true) {
        cout << "Enter the year number (1-50): ";
        cin >> year;

        if (year >= 1 && year <= 50) {
            break; // Exit the loop if the year is valid
        } else {
            cout << "Error: Please enter a valid year number between 1 and 50." << endl;
        }
    }

    cout << "The salary for year " << year << " is: " << calculateSalary(year) << " kr" << endl;
    return 0;
}