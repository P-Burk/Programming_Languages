/*
* Name: Preston Burkhardt
* Class: CS-210 Programming Languanges
* Project 2: Airgead Banking App
* Southern New Hampshire University
*/

#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>
#include <limits>   // needed for streamsize parameter in cin.ignore()


#include "UserCalc.h"
//#include "DisplayMenu.h"

using namespace std;


int main() {
    char userSelection = '0';
    double userInitialInvestAmt = 0.00;
    double userMonthlyDeposit = 0.00;
    double userAnnualInterest = 0.00;
    int userNumOfYrs = 0;
    double dblUserInput;
    int intUserInput;
    DisplayMenu newDisplay;
    

    newDisplay.emptyMenu();
    cin >> userSelection;
    
    if (userSelection == 'q') {
        cout << "Goodbye." << endl;
        return 0;
    }

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

        auto User1 = std::make_unique<UserCalc>(userNumOfYrs, userInitialInvestAmt, userMonthlyDeposit, userAnnualInterest);

        newDisplay.populatedMenu(userInitialInvestAmt, userMonthlyDeposit, userAnnualInterest, userNumOfYrs);

        cin >> userSelection;
        if (userSelection == 'q') {
            cout << "Goodbye." << endl;
            return 0;
        }

        User1->getCalcOutput();
    }



    /*
    while (userSelection != 'q') {
        newDisplay.emptyMenu();

        cout << "Enter the initial investment amount: $ ";
        cin >> dblUserInput;
        if (cin.fail()) {
            cout << "Invalid input. Please enter numbers only." << endl;
        }
        //data type validation
        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');;
            cout << "Enter the initial investment amount: $ ";
            cin >> dblUserInput;
        }
        newDisplay.setInvestAmt(dblUserInput);



        cout << "Enter the monthly deposit amout: $ ";
        cin >> dblUserInput;
        if (cin.fail()) {
            cout << "Invalid input. Please enter numbers only." << endl;
        }
        //data type validation
        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');;
            cout << "Enter the monthly deposit amout: $ ";
            cin >> dblUserInput;
        }
        newDisplay.setMonthDeposit(dblUserInput);

        cout << "Enter the annual interest rate: % ";
        cin >> dblUserInput;
        if (cin.fail()) {
            cout << "Invalid input. Please enter numbers only." << endl;
        }
        //data type validation
        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');;
            cout << "Enter the annual interest rate: % ";
            cin >> dblUserInput;
        }
        newDisplay.setAnnualInterest(dblUserInput);


        cout << "Enter the number of years: ";
        cin >> intUserInput;
        //if (cin.fail()) {
        //    cout << "Invalid input. Please enter numbers only." << endl;
       // }
        //data type validation
        while (cin.fail()) {
            if (intUserInput == 'q') {
                cout << "User has chosen to quit program. Goodbye.";
                return 1;
            }
            cout << "Invalid input. Please enter numbers only." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter the number of years: ";
            cin >> intUserInput;
        }
        newDisplay.setNumYears(intUserInput);

        newDisplay.populatedMenu();

        cin >> userSelection;

    }
    */


    return 0;
}