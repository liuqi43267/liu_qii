#include <iostream>
using namespace std;

int integerPower( int, int );

int main()
{
   int exp,base;

   cout << "Enter the base and exponent: ";
   cin >> base >> exp;
   cout << base << " to the power " << exp << " is: "
      << integerPower( base, exp ) << endl;
}

int integerPower( int ba, int ex )
{
   int result = 1;

      for ( int i = 1; i <= ex; i++ )
      result *= ba;

   return result;
}

