#include <iostream>
#include <string>
#include <iomanip>

#include "DisplayMenu.h"

using namespace std;

void DisplayMenu::testFunction() {
    cout << "this is a test" << endl;
}

void DisplayMenu::emptyMenu() {
    cout << setw(34) << setfill('*') << "*" << endl;
    printf("********** %s ************", "Data Input"), cout << endl;
    cout << "Initial Investement Amount: " << endl;
    cout << "Monthly Deposit: " << endl;
    cout << "Annual Interest: " << endl;
    cout << "Number of Years: " << endl;
    cout << "Press any key to continue or \"q\" to quit. . . " << endl;
    cout << endl;
}

void DisplayMenu::populatedMenu() {
       cout << setw(34) << setfill('*') << "*" << endl;
    printf("********** %s ************", "Data Input"), cout << endl;
    cout << "Initial Investement Amount: $" << m_initInvestAmt << endl;
    cout << "Monthly Deposit: $" << m_monthDeposit << endl;
    cout << "Annual Interest: %" << m_annualInterest <<endl;
    cout << "Number of Years: " << m_numYears << endl;
    cout << "Press any key to continue . . . " << endl; 
    cout << endl;
}