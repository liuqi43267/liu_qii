#include <iostream>
#include <iomanip>
using namespace std;

int reverseDigits( int );

int main()
{
   int number;

   cout << "Enter a number between 1 and 9999: ";
   cin >> number;

   cout << "The number with its digits reversed is: ";
   cout << reverseDigits( number ) << endl;
}

int reverseDigits( int a )
{
   int reverse = 0;

   while ( a > 0 )
   {
      reverse *= 10;
      reverse += a % 10;
      a /= 10;
   }

   return reverse;
}

