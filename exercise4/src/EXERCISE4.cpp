#include <iostream>
using namespace std;

// Function prototypes
int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(int, int);
int modulus(int, int);

int main() {
    char choice;
    int num1, num2, result;
    do {
        cout << "MENU\n"
                "1. Add\n"
                "2. Subtract\n"
                "3. Multiply\n"
                "4. Divide\n"
                "5. Modulus\n"
                "Enter your choice (1-5): ";
        int operation;
        cin >> operation;

        cout << "Enter integer number 1: ";
        cin >> num1;
        cout << "Enter integer number 2: ";
        cin >> num2;

        switch (operation) {
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                if (num2 == 0) {
                    cout << "The second integer is zero, divide by zero\n";
                    break;
                }
                float division_result;
                division_result = divide(num1, num2);
                cout << "Result: " << division_result << endl;
                break;
            case 5:
                int calculateModulus(int a,int b) {return a%b:}
                break;
            default:
                cout << "Invalid choice\n";
        }

        cout << "Press y or Y to continue: ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
