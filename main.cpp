#include <iostream>
#include <iostream>
#include <cmath>
#include <assert.h> // Provides assert //
#include "finance.h"
using namespace ibarra_tan_james;
using namespace std;


int main()
{
  //First instance of personalFinance
  cout<<"First Financial Profile:"<<endl;
  personalFinance test1;
  test1.get_all_data();
  test1.net_worth();
  test1.current();
  cout<<"Your net worth is $"<<test1.get_net_worth()<<endl<<endl;
  test1.budget();
  //Second instance of personalFinance
  cout<<"Second Financial Profile:"<<endl;
  personalFinance test2;
  test2.get_all_data();
  test2.net_worth();
  test2.current();
  cout<<"Your net worth is $"<<test2.get_net_worth()<<endl<<endl;
  test2.budget();
  //Third instance of personalFinance, combined net worth of test 1 and 2.
  cout<<"Combination of both Financial Profiles:"<<endl;
  personalFinance test3;
  test3 = test1 + test2;
  cout<<"Together, test 1 and 2 have:"<<endl;
  test3.net_worth();
  test3.current();
  cout<<"Your net worth is $"<<test3.get_net_worth()<<endl<<endl;
  test3.budget();
}
