#include <iostream>
#include <string>
#include <iomanip>

#include "UserCalc.h"

using namespace std;

UserCalc::UserCalc(int t_years, double t_openAmt, double t_depositAmt, double t_interestAmt) {
    m_buildMonths = t_years * 12;
    m_openingAmount = t_openAmt;
    m_depositAmount = t_depositAmt;
    m_monthInterest = t_interestAmt;
}

void UserCalc::calcNoMonthInterest(double t_amount, double t_interest, int t_months) {
    int year;
    double monthBalance = t_amount;
    double yearEndBalance;
    double monthInterest;
    double yearEndEarnedInterest;
    for (int i = 0; i <= t_months; i++) {
        monthBalance = monthBalance + (monthBalance * ((t_interest / 100) / 12));
        monthInterest = monthBalance * ((t_interest / 100) / 12);
    }
}