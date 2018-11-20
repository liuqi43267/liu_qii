
#include <iostream>
using namespace std;

int main()
{
   int number = 0;
   int a,b,c,d;
   int m = 0;

   while ( m != 5 )
   {
      cout << "Enter a five-digit number: ";
      cin >> number;

      if ( number < 100000 )
      {
         if ( number > 9999 )
            m = 5;
         else
            cout << "Number must be five digits" << endl;
      }
      else
         cout << "Number must be five digits" << endl;
   }

   a = number / 10000;
   b = number % 10000 / 1000;
   c = number % 10000 % 1000 % 100 / 10;
   d= number % 10000 % 1000 % 100 % 10;

   if ( a== d )
   {
      if ( b == c )
         cout << number << " is a palindrome!!!" ;
      else
         cout << number << "\n is not a palindrome." ;
   }
   else
      cout << number << " \n is not a palindrome." << endl;
}

