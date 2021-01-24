//By Yussef Ibarra, Stefan Tan, Joel James
#include <iostream>
#include <cmath>
#include <assert.h> // Provides assert //
#include "finance.h"
using namespace std;

namespace ibarra_tan_james{
    personalFinance::personalFinance()
    {
      salary=0;
      //Assets
      sum_assets=0;
      real_estate=0;
      checking_account=0;
      savings_account=0;
      retirement_account=0;
      //Liabilites
      sum_liabilities=0;
      mortgages = 0;
      credit_card_debt = 0;
      personal_loans = 0;
      student_loans = 0;
      auto_loans = 0;
    }

    double personalFinance::round(double value)
    {
      double rounded;
      rounded = ceil(value * 100.0) / 100.0;
      return rounded;
    }

    personalFinance::net_worth()
    {
      double sum_assets = real_estate + checking_account + savings_account + retirement_account;
      double sum_liabilities = mortgages + credit_card_debt + personal_loans + student_loans + auto_loans;
      return sum_assets - sum_liabilities;
    }

    void personalFinance::budget(){
      cout<< "A possible budget to achieve your money goals includes:"<<endl;
      cout<< "$"<<ceil(salary*0.4)<< " on needs such as rent, food, and other biils."<<endl;
      cout<< "$"<<ceil(salary*0.4)<<" on savings accounts, investments, and mostly to tackle debt."<<endl;
      cout<< "$"<<ceil(salary*0.2) <<" on any items that are not needed like eating out or a new video game."<<endl;
    }

    void personalFinance::current()
    {
      cout<<"Salary: "<<salary<<endl;
      cout<<"Assets: "<<sum_assets<<endl;
      cout<<"Liabilites: "<<sum_liabilities<<endl;
    }


    personalFinance operator + (const personalFinance& s1, const personalFinance& s2)
    {
      personalFinance result;
      result.salary = s1.salary + s2.salary;
      result.real_estate = s1.real_estate + s2.real_estate;
      result.checking_account = s1.checking_account +s2.checking_account;
      result.savings_account = s1.savings_account + s2.savings_account;
      result.retirement_account = s1.retirement_account + s2.retirement_account;
      result.mortgages = s1.mortgages + s2.mortgages;
      result.credit_card_debt = s1.credit_card_debt + s2.credit_card_debt;
      result.personal_loans = s1.personal_loans + s2.personal_loans;
      result.student_loans = s1.student_loans + s2.student_loans;
      result.auto_loans = s1.auto_loans + s2.auto_loans;
      return result;
    }
}
