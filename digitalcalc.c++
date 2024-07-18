#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

// Function declaring
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double squareRoot(double a);
double exponentiate(double base, double exp);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);

int main() {
    int choice;
    double a, b;
    
    do {
        // Display menu
        cout << "\n===== Calculator Menu =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Square Root\n";
        cout << "6. Exponentiation\n";
        cout << "7. Sine\n";
        cout << "8. Cosine\n";
        cout << "9. Tangent\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter the number: ";
                cin >> a ;
                cin >> b ;
                cout << "Result: " << add(a, b) << endl;
                break;
            case 2:
                cout << "Enter the number: ";
                cin >> a ;
                cin >> b ;
                cout << "Result: " << subtract(a, b) << endl;
                break;
            case 3:
                 cout << "Enter the number: ";
                cin >> a ;
                cin >> b ;
                cout << "Result: " << multiply(a, b) << endl;
                break;
            case 4:
                 cout << "Enter the number: ";
                cin >> a ;
                cin >> b ;
                try {
                    cout << "Result: " << divide(a, b) << endl;
                } catch (const char* msg) {
                    cerr << msg << endl;
                }
                break;
            case 5:
                cout << "Enter a number: ";
                cin >> a;
                try {
                    cout << "Result: " << squareRoot(a) << endl;
                } catch (const char* msg) {
                    cerr << msg << endl;
                }
                break;
            case 6:
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                cout << "Result: " << exponentiate(a, b) << endl;
                break;
            case 7:
                cout << "Enter an angle in radians: ";
                cin >> a;
                cout << "Result: " << sine(a) << endl;
                break;
            case 8:
                cout << "Enter an angle in radians: ";
                cin >> a;
                cout << "Result: " << cosine(a) << endl;
                break;
            case 9:
                cout << "Enter an angle in radians: ";
                cin >> a;
                cout << "Result: " << tangent(a) << endl;
                break;
            case 0:
                cout << "Exiting calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 0);
    
    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        throw "Error: Division by zero!";
    }
}

double squareRoot(double a) {
    if (a >= 0) {
        return sqrt(a);
    } else {
        throw "Error: Square root of negative number!";
    }
}

double exponentiate(double base, double exp) {
    return pow(base, exp);
}

double sine(double angle) {
    return sin(angle);
}

double cosine(double angle) {
    return cos(angle);
}

double tangent(double angle) {
    return tan(angle);
}