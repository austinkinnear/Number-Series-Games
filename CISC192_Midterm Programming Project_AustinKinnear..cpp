/*
* Author: Austin Kinnear
*
* CISC 192 Midterm Programming Project
*
* Date: 7/13/23 
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    char yesNo, option = 'n';

    do {
        // Display game menu
        cout << endl << endl << " **** Number Series Games **** " << endl << endl;
        cout << "1. Count Backwards" << endl;
        cout << "2. Even-Number Series" << endl;
        cout << "3. Negative Ten Series" << endl;
        cout << "4. Exit Menu" << endl << endl;

        cout << "Select your game with option 1, 2, 3, or exit with 4: ";
        cin >> option;
        cout << endl << endl;

        switch (option) {
            case '1': { 
                int firstNumber;
                int i;

                cout << "Welcome to Count Backwards" << endl;
                cout << "Enter a starting number: ";
                cin >> firstNumber;

                while (firstNumber <= 0) { // Displays error message for negative numbers
                    cout << "Error: The starting number must be greater than 0. Enter a new number: ";
                    cin >> firstNumber;
                }
                // Displays numbers in descending order from the initial condition to 0
                cout << "Numbers in the series: ";
                for (i = firstNumber; i >= 0; i--) {
                    cout << i << " ";
                }

                cout << endl;
                break;
            }
            case '2': {
                int firstNumber;
                int i;

                cout << "Welcome to the Even-Number Series" << endl;
                cout << "Enter a starting number: ";
                cin >> firstNumber;

                while (firstNumber % 2 != 0) { // Displays error message for odd number inputs (evaluated by the modulus operator % 2)
                    cout << "Error: The starting number must be an even number. Enter a new number: ";
                    cin >> firstNumber;
                }
                // Displays even numbers in descending order from the initial condition down to 0
                cout << "Numbers in the series: ";
                for (i = firstNumber; i >= 0; i -= 2) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            }
            case '3': {
                int firstNumber;

                cout << "Welcome to the Negative Ten Series" << endl;
                cout << "Enter a negative number that is a multiple of 10: ";
                cin >> firstNumber;

                while (firstNumber >= 0 || firstNumber % 10 != 0) { // Displays error message for incorrect number inputs that are not multiples of 10 or negative.
                    cout << "Error: The number must be negative and a multiple of 10. Please enter a new number: ";
                    cin >> firstNumber;
                }
                // Displays numerical multiples of -10 in increasing order from the initial condition to 0
                cout << "Numbers in the series: ";
                for (int i = 0; i >= firstNumber; i -= 10) {
                    cout << i << " ";
                }
                cout << endl;

                break;
            }
        }
    
    } while (option != '4'); //end the while loop

    return 0;
} //end main
