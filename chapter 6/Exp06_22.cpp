#include <iostream>
using namespace std;

void square( int );

int main()
{
   int side;

   cout << "Enter side: ";
   cin >> side;
   cout << endl;

   square( side );
   cout << endl;
}

void square( int side )
{

   for ( int i = 1; i <= side; i++ )
   {

      for ( int j = 1; j <= side; j++ )
         cout << '*';
         cout << endl;
   }
}

