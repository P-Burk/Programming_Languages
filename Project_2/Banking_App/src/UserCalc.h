#ifndef BANKING_APP_SRC_USERCALC_H
#define BANKING_APP_SRC_USERCALC_H
#include <iostream>
using namespace std;


class UserCalc {
    public:
        UserCalc(int t_years, double t_openAmt, double t_depositAmt, double t_interest);
        void getInitialInvestment() {cout << m_openingAmount << endl;};
        void getDepositAmount() {cout << m_depositAmount << endl;};
        void getTotalAmount() {cout << m_totalAmt << endl;};
        void getInterestAmount() {cout << m_monthInterest << endl;};
        void getMonths() {cout << m_buildMonths << endl;};
        void calcNoMonthInterest(double t_amount, double t_interest, int t_months);


    private:
        int m_buildMonths;
        double m_openingAmount;
        double m_depositAmount;
        double m_totalAmt;
        double m_monthInterest;
        
        
};

#endif