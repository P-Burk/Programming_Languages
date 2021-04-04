#ifndef BANKING_APP_SRC_DISPLAY_H
#define BBANKING_APP_SRC_DISPLAY_H

class DisplayMenu {
    public:
        void testFunction();
        void emptyMenu();
        void populatedMenu();
        void setInvestAmt(double t_invAmount) {m_initInvestAmt = t_invAmount;};
        void setMonthDeposit(double t_depAmt) {m_monthDeposit = t_depAmt;};
        void setAnnualInterest(double t_interestAmt) {m_annualInterest = t_interestAmt;};
        void setNumYears(int t_years) {m_numYears = t_years;};
        
    private:
        double m_initInvestAmt;
        double m_monthDeposit;
        double m_annualInterest;
        int m_numYears;

};

#endif