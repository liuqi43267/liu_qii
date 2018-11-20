#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool isPrime( int );

int main()
{
   int count = 1;

   cout << "The prime numbers from 1 to 10000 are:" << endl;
   cout << setw( 6 ) << 2;

   for ( int i = 3; i < 10000; i += 2 )
   {
      if ( isPrime( i ) )
      {
         count++;
         cout << setw( 6 ) << i;

         if ( count % 10 == 0 )
            cout << '\n';
      }
   }

   cout << endl << "Total of " << count
      << " prime numbers between 1 and 10000." << endl;
}

bool isPrime( int n )
{

   for ( int i = 2;i <= static_cast< int > ( sqrt( static_cast< double > ( n ) ) );i++ )
   {
      if ( n % i == 0 )
         return false;
   }

   return true;
}
