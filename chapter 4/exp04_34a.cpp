
#include <iostream>
using namespace std;

int main()
{
   int number;
   int result = 1;

   cout << "Enter a number: ";
   cin >> number;

   cout << number << "! is ";

   while ( number > 0 )
   {
      result *= number;
      number--;
   }

   cout << result << endl;
}

