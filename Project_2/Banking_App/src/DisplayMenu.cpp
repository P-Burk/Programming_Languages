#include <iostream>
#include <string>
#include <iomanip>

#include "DisplayMenu.h"

using namespace std;

// outputs the empty start menu to inform user of fields/data needed
void DisplayMenu::emptyMenu() {
    cout << setw(46) << setfill('*') << "*" << endl;
    printf("**************** %s ******************", "Data Input"), cout << endl;
    cout << "Initial Investement Amount: " << endl;
    cout << "Monthly Deposit: " << endl;
    cout << "Annual Interest: " << endl;
    cout << "Number of Years: " << endl;
    cout << "Press any key to continue or \"q\" to quit. . . " << endl;
    cout << setw(46) << setfill('*') << "*" << endl;
}

// outputs the start menu, but with the data the user entered populated in the correct fields
void DisplayMenu::populatedMenu(double t_investAmt, double t_monthDeposit, double t_interestRate, int t_years) {
    cout << setw(46) << setfill('*') << "*" << endl;
    printf("**************** %s ******************", "Data Input"), cout << endl;
    cout << "Initial Investement Amount: $ " << t_investAmt << endl;
    cout << "Monthly Deposit: $ " << t_monthDeposit << endl;
    cout << "Annual Interest: % " << t_interestRate <<endl;
    cout << "Number of Years: " << t_years << endl;
    cout << "Are these values correct? (y/n) " << endl;
    cout << setw(46) << setfill('*') << "*" << endl;
}

// outputs the header for the table with no monthly deposits
void DisplayMenu::noDepositOutputHeader() {
    cout << setw(62) << setfill('=') << "=" <<endl;
    printf("   %s   ", "Balance and Interest Without Additional Monthly Deposits"), cout << endl;
    cout << setw(62) << setfill('=') << "=" <<endl;
    printf("   %s       %s      %s ", "Year", "Year End Balance", "Year End Earned Interest"), cout << endl;
    cout << setw(62) << setfill('-') << "-" <<endl;
}

// outputs the header for the table with monthly deposits
void DisplayMenu::monthlyDepositOutputHeader() {
    cout << setw(62) << setfill('=') << "=" <<endl;
    printf("     %s     ", "Balance and Interest With Additional Monthly Deposits"), cout << endl;
    cout << setw(62) << setfill('=') << "=" <<endl;
    printf("   %s       %s      %s ", "Year", "Year End Balance", "Year End Earned Interest"), cout << endl;
    cout << setw(62) << setfill('-') << "-" <<endl;
}

// outputs the body of the compounding interest tables
void DisplayMenu::depositOutputBody(int t_year, double t_yearEndBalance, double t_yearEndInterest) {
    cout << setw(5) << setfill(' ') << t_year << "\t";
    cout << setw(11) << setfill(' ') << ' '; printf("$%.2f", t_yearEndBalance); cout << "\t\t";
    cout << setw(4) << setfill(' ') << ' '; printf("$%.2f", t_yearEndInterest);
    cout << endl;
}

// outputs the footer of the compounding interest tables
void DisplayMenu::depositOutputFooter() {
    cout << setw(62) << setfill('-') << "-" <<endl;
}

