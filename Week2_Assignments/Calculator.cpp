/*
 * Calculator.cpp
 *
 *  Date: March 14, 2021
 *  Author: Preston Burkhardt
 */

#include <iostream>

using namespace std;

int main(){                     // changed void to int due to compile error
    // deleted "char statement[100]" due to it not being used
	double op1, op2;            // changed data type to double so that user can input floating point numbers or integers
	char operation;
	char answer = 'Y';          // added the semicolon, cleaned up the spacing, and changed double quotes to single quotes because this is a char type


	while ((answer == 'y') || (answer == 'Y')){ // cleaned up the spacing; added OR statement to catch upper and lower case 'y'
        cout << "Enter number" << endl;         // cleaned the user input part of the code block to be logically formatted and ask for multiple numbers   
        cin >> op1;                             // along with the expression to perform on them
		cout << "Enter expression" << endl;     
        cin >> operation;
        cout << "Enter number" << endl;
		cin >> op2; 
        
        
        // added brackets to all if statements around the executions so that the program branches properly based on user input
		if (operation == '+') {                                             // changed double quotes to single quotes due to comparing char to char, not char to string
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;      // >> (wrong direction) arrows where changed to <<
        }                                                                 
		if (operation == '-') {
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;      // >> (wrong direction) arrows where changed to << 
        }
		if (operation == '*') {
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;      // added semicolon to the end, corrected expression in the output string to *
        }
		if (operation == '/') {
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;      // corrected expression in the output string to /
        }

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;

        // added if statement at end to output program finished message if user choses not to evaluate another expression
        if (answer == 'n' || answer == 'N') {
            cout << "Program Finished." << endl;
        }
	}
}






