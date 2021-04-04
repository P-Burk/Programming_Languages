/*
* Name: Preston Burkhardt
* Class: CS-210 Programming Languanges
* Project 2: Airgead Banking App
* Southern New Hampshire University
*/

#include <cstdio>
#include <iostream>
#include <ostream>
#include <stdio.h>
#include <string>
#include <iomanip>
#include <limits>   // needed for streamsize parameter in cin.ignore()


#include "UserCalc.h"
//#include "DisplayMenu.h"

using namespace std;


int main() {
    //initialize and define default values for variables used
    char userSelection = '0';
    double userInitialInvestAmt = 0.00;
    double userMonthlyDeposit = 0.00;
    double userAnnualInterest = 0.00;
    int userNumOfYrs = 0;
    DisplayMenu newDisplay;     // initializes DisplayMenu object
    

    newDisplay.emptyMenu();
    cin >> userSelection;
    
    // quits program if user enters 'q'
    if (userSelection == 'q') {
        cout << "Goodbye." << endl;
        return 0;
    }

    // loops through gathering user input that is used to calculate compounding interest accounts
    while (userSelection != 'q') {
        cout << "Enter the initial investment amount: $ ";
        cin >> userInitialInvestAmt;

        cout << "Enter the monthly deposit amout: $ ";
        cin >> userMonthlyDeposit;

        cout << "Enter the annual interest rate: % ";
        cin >> userAnnualInterest;

        cout << "Enter the number of years: ";
        cin >> userNumOfYrs;

        cout << endl;

        newDisplay.populatedMenu(userInitialInvestAmt, userMonthlyDeposit, userAnnualInterest, userNumOfYrs);

        
        cin >> userSelection;   // user input based on the question of whether their input is correct

        // while loop to catch any entries that aren't 'y' or 'n'
        while (userSelection != 'y' && userSelection != 'n') {
                cout << "Please choose 'y' or 'n'." << endl;
                cin >> userSelection;
        }

        // if user selects 'n', ask for their input numbers again
        while (userSelection == 'n') {
            cout << "Enter the initial investment amount: $ ";
            cin >> userInitialInvestAmt;

            cout << "Enter the monthly deposit amout: $ ";
            cin >> userMonthlyDeposit;

            cout << "Enter the annual interest rate: % ";
            cin >> userAnnualInterest;

            cout << "Enter the number of years: ";
            cin >> userNumOfYrs;

            cout << endl;
            newDisplay.populatedMenu(userInitialInvestAmt, userMonthlyDeposit, userAnnualInterest, userNumOfYrs);
            cin >> userSelection;

            // breaks out of while loop if the user selects 'y' to confirm their input values
            if (userSelection == 'y') {
                break;
            }
            // else trigger a while loop to get either 'y' or 'n'
            else {
                while (userSelection != 'y' && userSelection != 'n') {
                    cout << "Please choose 'y' or 'n'." << endl;
                    cin >> userSelection;
                }
            }
        }

        // creates new UserCalc object
        auto User1 = make_unique<UserCalc>(userNumOfYrs, userInitialInvestAmt, userMonthlyDeposit, userAnnualInterest);

        // calls the getCalcOutput() function to calculate and output the compounding interest tables.
        User1->getCalcOutput();

        // asks the user if they would like to run another account simulation. Exits program if they enter 'n'.
        cout << "Would you like to simulate another account? (y/n)" << endl;
        cin >> userSelection;
        if (userSelection == 'n') {
            cout << "Goodbye.";
            userSelection = 'q';
        }
    }

    return 0;
}