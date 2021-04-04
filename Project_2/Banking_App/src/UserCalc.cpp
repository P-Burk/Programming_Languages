#include <iostream>
#include <string>
#include <iomanip>

#include "UserCalc.h"

using namespace std;

// constructor for new UserCalc objects
UserCalc::UserCalc(int t_years, double t_openAmt, double t_depositAmt, double t_interestAmt) {
    m_buildMonths = t_years * 12;
    m_openingAmount = t_openAmt;
    m_depositAmount = t_depositAmt;
    m_yearInterest = t_interestAmt;
}

// used to calculate the monthly compounding interest amounts with NO monthly deposits and outputs the cooresponding table
// takes an initial amount,  yearly interest rate, and  total months as arguements
void UserCalc::calcNoMonthInterest(double t_amount, double t_interest, int t_months) {
    double openingingAmt = t_amount;
    double totalMoney = 0.00;
    double interestMoney = 0.00;
    double closingBalance = 0.00;
    double monthlyInterest = (t_interest / 100) / 12;
    double yearlyInterestAccrue = 0.00;

    calcDisplay.noDepositOutputHeader();    // calls the table header

    for (int i = 1; i <= t_months; i++) {
        totalMoney = openingingAmt;
        interestMoney = totalMoney * monthlyInterest;
        yearlyInterestAccrue = yearlyInterestAccrue + interestMoney;
        closingBalance = totalMoney + interestMoney;
        if (i % 12 == 0) {;                 // if statement to only call depositOutputBody() at the 1 year intervals
            calcDisplay.depositOutputBody((i / 12), closingBalance, yearlyInterestAccrue);       // calls the table body output 
            yearlyInterestAccrue = 0;       // reset yearly interest
            cout << endl;
        }
        openingingAmt = closingBalance;
    }

    calcDisplay.depositOutputFooter();      // calls the table footer
}

// used to calculate the monthly compounding interest amounts with monthly deposits and outputs the cooresponding table
// takes an initial amount, monthly deposit amount, yearly interest rate, and total months as arguements
void UserCalc::calcMonthDepositInterest(double t_amount, double deposit, double t_interest, int t_months) {
    double openingingAmt = t_amount;
    double totalMoney = 0.00;
    double interestMoney = 0.00;
    double closingBalance = 0.00;
    double monthlyInterest = (t_interest / 100) / 12;
    double yearlyInterestAccrue = 0.00;

    calcDisplay.monthlyDepositOutputHeader();   // calls the table header

    // loops through for each month and caluculates the monthly interest numbers/account value
    for (int i = 1; i <= t_months; i++) {
        totalMoney = openingingAmt + deposit;
        interestMoney = totalMoney * monthlyInterest;
        yearlyInterestAccrue = yearlyInterestAccrue + interestMoney;
        closingBalance = totalMoney + interestMoney;
        if (i % 12 == 0) {;                 // if statement to only call depositOutputBody() at the 1 year intervals
            calcDisplay.depositOutputBody((i / 12), closingBalance, yearlyInterestAccrue);       // calls the table body output 
            yearlyInterestAccrue = 0;       // reset yearly interest
            cout << endl;
        }
        openingingAmt = closingBalance;
    }

    calcDisplay.depositOutputFooter(); // calls the table footer
} 

// function for calling both helper functions that calculate interest/account numbers and output the two different tables
void UserCalc::getCalcOutput() {
    calcNoMonthInterest(m_openingAmount, m_yearInterest, m_buildMonths);
    cout << endl;
    calcMonthDepositInterest(m_openingAmount, m_depositAmount, m_yearInterest, m_buildMonths);
    cout << endl;
    


}