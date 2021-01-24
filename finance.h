#ifndef FINANCE_H
#define FINANCE_H
#include <iostream>

namespace ibarra_tan_james{
    class personalFinance{
        public:
        personalFinance();
        double round(double value);
        double net_worth() const;
        void budget() const;
        void current()  const;
        friend personalFinance operator+(const personalFinance& s1, const personalFinance& s2);


        private:
        double salary;
        //Assets
        double sum_assets;
        double real_estate;
        double checking_account;
        double savings_account;
        double retirement_account;
        //Liabilites
        double sum_liabilities;
        double mortgages;
        double credit_card_debt;
        double personal_loans;
        double student_loans;
        double auto_loans;
    }
}
#endif
