#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;

    if (num1 > num2) {
        cout << "The first number (" << num1 << ") is greater than the second number (" << num2 << ")." << endl;
    } else if (num1 < num2) {
        cout << "The first number (" << num1 << ") is less than the second number (" << num2 << ")." << endl;
    } else {
        cout << "The first number (" << num1 << ") is equal to the second number (" << num2 << ")." << endl;
    }

    if (num1 > 0 && num2 > 0) {
        cout << "Both numbers are positive." << endl;
    } else if (num1 < 0 && num2 < 0) {
        cout << "Both numbers are negative." << endl;
    } else if (num1 == num2) {
        cout << "The numbers are equal." << endl;
    } else if (num1 != num2) {
        cout << "The numbers are not equal." << endl;
    } else {
        cout << "The numbers are a mix of positive and negative or zero." << endl;
    }

    int counter = 0;
    cout << "Initial counter value: " << counter << endl;
    counter++;
    cout << "Counter after increment: " << counter << endl;
    counter--;
    cout << "Counter after decrement: " << counter << endl;

    return 0;
}
