
#include <iostream>
using namespace std;

int main()
{
   int number = 1,f=1;
   int accuracy;
   double e = 1;


   cout << "Enter the accuracy of e: ";
   cin >> accuracy;

   while ( number < accuracy )
   {
      f *= number;
      e += 1.0 / f;
      number++;
   }

   cout << "e is " << e << endl;
}



