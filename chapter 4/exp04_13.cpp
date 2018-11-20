#include <iostream>
using namespace std;

int main()
{
    double gallons,milesage;
    double totalGal ,totalMi;
    double miPerGal,totalMiPerGal;

   cout << "Enter miles driven (-1 to quit): ";
   cin >> milesage;

   while ( milesage != -1 )
   {
      cout << "Enter gallons used: ";
      cin >> gallons;

      totalMi = milesage + 1;
      totalGal = gallons + 1;

      if ( gallons != 0 )
      {
         miPerGal =  milesage / gallons;
         cout << "MPG this tankful:" << miPerGal<<endl;
      }


      if ( totalGal != 0 )
      {
         totalMiPerGal = totalMi/ totalGal;
         cout << "Total MPG: " << totalMiPerGal<<endl<<endl;
      }

      cout << "Enter miles driven (-1 to quit): ";
      cin >> milesage;
   }
}

