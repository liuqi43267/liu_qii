#include <iostream>
using namespace std;

int main()
{
   int product = 1;

   // calculate product
   // increment counter i by 2 for odd numbers
   for ( int i = 3; i <= 15; i += 2 )
      product *= i;

   // display resulting product
   cout << "Product of the odd integers from 1 to 15 is: "
      << product << endl;
}

