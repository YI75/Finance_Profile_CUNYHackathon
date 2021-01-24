#ifndef FINANCE_H
#define FINANCE_H
#include <iostream>

namespace ibarra_tan_james{
    class personalFinance{
        public:
        personalFinance();
        double net_worth const;
        void budget const;



        private:
        //Assets
        double real_estate;
        double checking_account;
        double savings_account;
        double retirement_account;
        //Liabilites
        double mortgages;
        double credit_card_debt;
        double personal_loans;
        double student_loans;
        double auto_loans;
    }
}
