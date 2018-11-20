#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges( double );

int main()
{
   double hour,charge;
   double totalCharges = 0.0;
   double totalHours = 0.0;
   bool first = true;

   cout << "Enter the hours parked : ";


   for ( int i = 1; i <= 3; i++ )
   {
      cin >> hour;
      totalHours += hour;


      if ( first )
      {
         cout << setw( 5 ) << "Car" << setw( 15 ) << "Hours";
        cout<< setw( 15 ) << "Charge\n";

         first = false;
      }

      charge = calculateCharges( hour );
      totalCharges += charge;

      cout << setw( 3 ) << i << setw( 17 ) << setprecision( 1 ) << hour;
      cout<< setw( 14 ) << setprecision( 2 ) << charge << "\n";
   }


   cout << setw( 7 ) << "TOTAL" << setw( 13 ) << setprecision( 1 )
      << totalHours << setw( 14 ) << setprecision( 2 )
      << totalCharges << endl;
}


double calculateCharges( double hours )
{
   double charge;

   if ( hours < 3.0 )
      charge = 2.0;
   else
      charge = 2.0 + .5 * ceil( hours - 3.0 );

   return ( charge > 10.0 ? 10.0 : charge );
}
