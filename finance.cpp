//By Yussef Ibarra, Stefan Tan, Joel James
#include <iostream>
#include <cmath>
#include <assert.h> // Provides assert
#include "finance.h"
using namespace std;

namespace ibarra_tan_james{
    personalFinance::personalFinance() // initialize all variables to 0
    {
      salary = 0;
      //Assets
      sum_assets = 0;
      real_estate = 0;
      checking_account = 0;
      savings_account = 0;
      retirement_account = 0;
      //Liabilites
      sum_liabilities = 0;
      mortgages = 0;
      credit_card_debt = 0;
      personal_loans = 0;
      student_loans = 0;
      auto_loans = 0;
    }

    double personalFinance::round(double value) // function that rounds value to 2 decimal places
    {
      double rounded = ceil(value * 100.0) / 100.0;
      return rounded;
    }

    personalFinance::net_worth() /* return the net worth, which is the difference of assets and liabilities */
    {
      double sum_assets = real_estate + checking_account + savings_account + retirement_account;
      double sum_liabilities = mortgages + credit_card_debt + personal_loans + student_loans + auto_loans;
      return sum_assets - sum_liabilities;
    }

    void personalFinance::budget(){ /
      cout<< "A possible budget to achieve your money goals includes:"<<endl;
      cout<< "$"<<round(salary*0.4)<< " on needs such as rent, food, and other biils."<<endl;
      cout<< "$"<<round(salary*0.4)<<" on savings accounts, investments, and mostly to tackle debt."<<endl;
      cout<< "$"<<round(salary*0.2) <<" on any items that are not needed like eating out or a new video game."<<endl;
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

    void personalFinance::get_salary(){ // receiving the value of salary from user
      cout<<"What is your salary?"<<endl;
      cin>>salary;
      assert(salary >= 0);
    }

    void personalFinance::get_real_estate(){ // receiving the value of real_estate from user
      cout<<"How much in real estate do you own?"<<endl;
      cin>>real_estate;
      assert(real_estate >= 0);
    }

    void personalFinance::get_checking_account(){ // receiving the value of checking_account from user
      cout<<"How much do you have in your checking account?"<<endl;
      cin>>checking_account;
      assert(checking_account >= 0);
    }

    void personalFinance::get_savings_account(){ // receiving the value of savings_account from user
      cout<<"How much is in your savings account?"<<endl;
      cin>>savings_account;
      assert(savings_account >= 0);
    }

    void personalFinance::get_retirement_account(){ // receiving the value of retirement_account from user
      cout<<"How much is in your retirement account?"<<endl;
      cin>>retirement_account;
      assert(retirement_account >= 0);
    }

    void personalFinance::get_mortgages(){ // receiving the value of mortgages from user
      cout<<"How much in mortgages do you owe?"<<endl;
      cin>>mortgages;
      assert(mortgages >= 0);
    }

    void personalFinance::get_credit_card_debt(){ // receiving the value of credit_card_debt from user
      cout<<"How much credit card debt do you have?"<<endl;
      cin>>credit_card_debt;
      assert(credit_card_debt >= 0);
    }

    void personalFinance::get_personal_loans(){ // receiving the value of personal loans from user
      cout<<"How much personal loans do you owe?"<<endl;
      cin>>personal_loans;
      assert(personal_loans >= 0);
    }

    void personalFinance::get_student_loans(){ // receiving the value of students loans from user
      cout<<"How much is your student loans?"<<endl;
      cin>>student_loans;
      assert(student_loans >= 0);
    }

    void personalFinance::get_auto_loans(){ // receiving the value of auto loans from user
      cout<<"How much is your auto loans?"<<endl;
      cin>>auto_loans;
      assert(auto_loans >= 0);
    }

    void personalFinance::get_all_data(){
      get_salary();
      get_real_estate();
      get_checking_account();
      get_savings_account();
      get_retirement_account();
      get_mortgages();
      get_credit_card_debt();
      get_personal_loans();
      get_student_loans();
      get_auto_loans();
    }


}
