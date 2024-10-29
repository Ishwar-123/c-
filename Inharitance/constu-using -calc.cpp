#include <iostream>
using namespace std;

class Calculator {
    public:
        int num1; // First number
        int num2; // Second number
        int result; // Result of the operation

        // Constructor that initializes the numbers
        Calculator(int a, int b) {
            num1 = a;
            num2 = b;
            result = 0; // Initialize result
        }

        // Method for addition
        void add() {
            result = num1 + num2;
            cout << "Addition: " << result << endl;
        }

        // Method for subtraction
        void subtract() {
            result = num1 - num2;
            cout << "Subtraction: " << result << endl;
        }

        // Method for multiplication
        void multiply() {
            result = num1 * num2;
            cout << "Multiplication: " << result << endl;
        }

        // Method for division
        void divide() {
            result = num1 / num2;
            cout << "division: " << result << endl;
        }
};

int main() {
    int a, b;

    cout << "Enter value of A: ";
    cin >> a; // Input for A
    cout << "Enter value of B: ";
    cin >> b; // Input for B

    // Create a Calculator object
    Calculator calc(a, b);

    // Perform calculations
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();

    return 0; // End of the program
}
