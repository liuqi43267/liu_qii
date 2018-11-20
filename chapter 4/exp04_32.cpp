
#include <iostream>
using namespace std;

int main()
{
   double a,b,c;

   cout << "Enter side a: ";
   cin >> a;

   cout << "Enter side b: ";
   cin >> b;

   cout << "Enter side c: ";
   cin >> c;

   if ( a + b > c )
   {
      if ( b + c > a )
      {
         if ( c + a > b )
            cout << "These can be form a triangle." << endl;
   else
      cout << "These can not form a triangle." << endl;

      }
   }


}

