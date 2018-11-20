#include <iostream>
using namespace std;

int main()
{
   int number,numMax;
   int counter = 1;


   cout << "Enter the first number: ";
   cin >> numMax;

   while ( counter < 10 )
   {
      cout << "Enter the next number : ";
      cin >> number;


        if ( number > numMax)
         numMax = number;

    counter = counter + 1;
   }

   cout << "Largest is " << numMax << endl;
}
