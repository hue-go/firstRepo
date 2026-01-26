#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char symb;
    bool askCalc = true;

    cout << "CALCULATOR" << endl;

    while (askCalc) {
        
        //USER INPUT
        cout << "\nEnter your first number: ";
        cin >> num1;

        // let user only enter NUMBERS for num1 and num2
        //while (!(cin >> num1)) {
        //    cout << "Please make sure to enter a number. Try again: ";
        //    cin.clear();
        //}

        cout << "Enter your desired calculation ('+, -, *, /, %' only): ";
        cin >> symb;

        cout << "Enter your second number: ";
        cin >> num2;

        // CALCS
        if (symb == '+') {
            cout << "Sum: " << num1 + num2 << endl;
        } 

        else if (symb == '-') {
            cout << "Difference: " << num1 - num2 << endl;
        } 

        else if (symb == '*') {
            cout << "Product: " << num1 * num2 << endl;
        } 

        else if (symb == '/') {
            if (num2 == 0) {
                cout << "Error: You cannot divide by zero!" << endl;
            } else {
                cout << "Quotient: " << num1 / num2 << endl;
            }
        } 

        else if (symb == '%') {
            if (num1 >= num2) {
                cout << "Modulus: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
            } else {
                cout << "Error: The first number must be greater than or equal to the second for modulus operation!" << endl;
            }
            
        }

        else if (symb == 'q' || symb == 'Q') {
            askCalc = false;
            break; 
        }

        else {
            cout << "Invalid operator!" << endl;
            //EXIT STATEMENT
            //cout << "Would you like to do another calculation? (Y/N): ";
            //cin >> symb;
            //if (symb == 'N' || symb == 'n') {
            //    askCalc = false;
            //} else if (symb == 'Y' || symb == 'y') {
            //askCalc = true;
            //}
        }
    }

    cout << "PROGRAM EXITED" << endl;

    return 0;
}
