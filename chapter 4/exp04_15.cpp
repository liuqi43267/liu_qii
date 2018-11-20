
#include <iostream>
using namespace std;

int main()
{
   double num1,num2;
   cout << "Enter sales in dollars (-1 to end): ";
   cin >> num1;

   while ( num1 != -1 )
   {
      num2 = 200.0 + 0.09 * num1;
      cout << "Salary is: $" << num2<<endl<<endl;

      cout << "Enter sales in dollars (-1 to end): ";
      cin >> num1;
   }
}


