#include <iostream>
using namespace std;

int main()
{
   int factorial = 1; // current factorial value

   cout << "x\tx!\n";
   for ( int i = 1; i <= 5; i++ )
   {
      factorial *= i; // i!
      
      cout << i << '\t' << factorial << '\n';
   }

   cout << endl;
}
