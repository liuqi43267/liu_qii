#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double hypotenuse( double, double );

int main()
{
   double a,b;

   for ( int i = 1; i <= 3; i++ )
   {
      cout << "\nEnter 2 sides : ";
      cin >> a >> b;

      cout << "Hypotenuse is:  " << setprecision( 1 )
         << hypotenuse( a,b ) << endl;
   }
}

double hypotenuse( double s1, double s2 )
{
   return sqrt( s1 * s1 + s2 * s2 );
}

