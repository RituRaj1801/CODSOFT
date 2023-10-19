#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int choice;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Select an operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    cin >> choice;

    double result;
    bool validChoice = true;

    switch (choice) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                validChoice = false;
            } else {
                result = num1 / num2;
            }
            break;
        default:
            cout << "Error: Invalid choice." << endl;
            validChoice = false;
    }

    if (validChoice) {
        cout << "Result: " << result << endl;
    }
    return 0;
}
