#include <iostream>
using namespace std;

bool multiple( int, int );

int main()
{
   int x,y;

   for ( int i = 1; i <= 3; i++ )
   {
      cout << "Enter two integers: ";
      cin >> x >> y;


      if ( multiple( x, y ) )
         cout << y << " is a multiple of " << x << endl;
      else
         cout << y << " is not a multiple of " << x << endl;
   }

}
bool multiple( int a, int b )
{
   return !( b % a );
}

