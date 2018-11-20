#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip();

int main()
{
   int heads = 0,tails = 0;
   srand( time( 0 ) );

   for ( int i= 1; i <= 100; i++ )
   {
      if ( flip() == 0 )
      {
         ++tails;
         cout << "Tails ";
      }
      else
      {
         ++heads;
         cout << "Heads ";
      }
      if ( i % 10 == 0 )
         cout << endl;
   }

   cout << "\nThe total number of Heads was " << heads
      << "\nThe total number of Tails was " << tails << endl;
}

int flip()
{
   return rand() % 2;
}

