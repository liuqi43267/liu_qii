#include <iostream>
#include <iomanip>
using namespace std;

int celsius( int ), fahrenheit( int );

int main()
{
   cout << "Fahrenheit equivalents of Celsius temperatures:" << endl;

   for ( int t = 0; t < 4; t++ )
      cout << setw( 7 ) << "Celsius" << setw( 12 ) << "Fahrenheit "<< endl;

   for ( int i = 0; i < 25; i++ )
   {
      for ( int j = 0; j <= 75; j += 25 )
         cout << setw( 7 ) << i + j
            << setw( 11 ) << fahrenheit( i + j ) << endl;
   }

   cout << setw( 64 ) << 100 << setw( 11 ) << fahrenheit( 100 ) << endl;

   cout << "\nCelsius equivalents of Fahrenheit temperatures:" << endl;

   for ( int t = 0; t < 4; t++ )
      cout << setw( 10 ) << "Fahrenheit" << setw( 9 ) << "Celsius ";

   cout << endl;

   for ( int i = 32; i < 77; i++ )
   {
      for ( int j = 0; j <= 135; j += 45 )
         cout << setw( 10 ) << i + j
            << setw( 8 ) << celsius( i + j ) << endl;
   }
   cout << setw( 67 ) << 212 << setw( 8 ) << celsius( 212 ) << endl;
}


int celsius( int f )
{
   return static_cast< int > ( 5.0 / 9.0 * ( f - 32 ) );
}
int fahrenheit( int c)
{
   return static_cast< int > ( 9.0 / 5.0 * c + 32 );
}

