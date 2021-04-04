// DisplayMenu class definition

#ifndef BANKING_APP_SRC_DISPLAY_H
#define BBANKING_APP_SRC_DISPLAY_H

class DisplayMenu {
    public:
        void emptyMenu();
        void populatedMenu(double t_investAmt, double t_monthDeposit, double t_interestRate, int t_years);
        void noDepositOutputHeader();
        void monthlyDepositOutputHeader();
        void depositOutputFooter();
        void depositOutputBody(int t_year, double t_yearEndBalance, double t_yearEndInterest);
        
    private:
        double m_initInvestAmt;
        double m_monthDeposit;
        double m_annualInterest;
        int m_numYears;

};

#endif