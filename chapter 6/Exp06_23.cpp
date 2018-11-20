#include <iostream>
using namespace std;

void square( int, char );

int main()
{
   int side;
   char character;

   cout << "Enter a character and the side length: ";
   cin >> character >> side;
   cout << endl;

   square( side, character );
   cout << endl;
}


void square( int side, char fillCharacter )
{

   for ( int i = 1; i <= side; i++ )
   {

      for ( int j = 1; j <= side; j++ )
         cout << fillCharacter;

      cout << '\n';
   }
}

