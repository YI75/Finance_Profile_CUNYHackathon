#include <iostream>
#include <iostream>
#include <cmath>
#include <assert.h> // Provides assert //
#include "finance.h"
using namespace ibarra_tan_james;
using namespace std;


int main()
{
  personalFinance test;
  test.get_all_data();
  test.net_worth();
  test.budget();
  test.current();
}
