// UserCalc class definition

#ifndef BANKING_APP_SRC_USERCALC_H
#define BANKING_APP_SRC_USERCALC_H
#include <iostream>

// includes DisplayMenu class definition
#include "DisplayMenu.h"

using namespace std;


class UserCalc {
    public:
        UserCalc(int t_years, double t_openAmt, double t_depositAmt, double t_interest);
        void getCalcOutput();


    private:
        DisplayMenu calcDisplay;        // initializes new DisplayMenu object in order to use the table output functions
        int m_buildMonths;
        double m_openingAmount;
        double m_depositAmount;
        double m_totalAmt;
        double m_yearInterest;

        // two helper functions used by the getCalcOutput() function
        void calcNoMonthInterest(double t_amount, double t_interest, int t_months);
        void calcMonthDepositInterest(double t_amount, double deposit, double t_interest, int t_months);
        
        
};

#endif