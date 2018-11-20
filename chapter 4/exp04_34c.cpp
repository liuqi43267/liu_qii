
#include <iostream>
using namespace std;

int main()
{
   int number = 1,f=1;
   int accuracy,x;
   double e = 1.0,ex = 1.0;

   cout << "Enter exponent: ";
   cin >> x;

   cout << "Enter the accuracy of e: ";
   cin >> accuracy;

   while ( number < accuracy )
   {
      ex *= x;
      f *= number;
      e += ex / f;
      number=number+1;
   }

   cout << "e to the " << x << " is " << e << endl;
}



