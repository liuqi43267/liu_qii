#include <iostream>
using namespace std;

int main()
{
   int number,numMax1,numMax2;
   int counter = 1;

   cout << "Enter the first number: ";
   cin >> numMax1;

   cout << "Enter next number: ";
   cin >> number;

        if ( number >numMax1 )
        {
        numMax2 = numMax1;
        numMax1 = number;
        }
        else
        numMax2 = number;

   counter = 3;

   while ( counter <= 10 )
   {
      cout << "Enter next number: ";
      cin >> number;

        if ( number > numMax1 )
        {
         numMax2 = numMax1;
         numMax1= number;
        }
        else if ( number > numMax2 )
         numMax2= number;

      counter++;
   }


   cout << "\nLargest is " <<  numMax1;
   cout << "\nSecond largest is " << numMax2<< endl;
}


