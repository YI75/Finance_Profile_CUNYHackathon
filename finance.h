#ifndef FINANCE_H
#define FINANCE_H
#include <iostream>

namespace ibarra_tan_james{
    class personalFinance{
        public:
        personalFinance();
        double round(double value);
        double net_worth();
        void budget();
        void current()  const;
        friend personalFinance operator+(const personalFinance& s1, const personalFinance& s2);
        void get_salary();
        void get_real_estate();
        void get_checking_account();
        void get_savings_account();
        void get_retirement_account();
        void get_mortgages();
        void get_credit_card_debt();
        void get_personal_loans();
        void get_student_loans();
        void get_auto_loans();
        void get_all_data();
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
    };
}
#endif
