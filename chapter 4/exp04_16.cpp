#include <iostream>
using namespace std;

int main()
{
   double num1,num2,salary;

   cout << "Enter hours worked (-1 to end): ";
   cin >>num1;

   while ( num1!= -1.0 )
   {

      cout << "Enter hourly rate of the employee ($00.00): ";
      cin >> num2;


        if (num1<= 40 )
         salary =num1 *num2;
        else
         salary = 40.0 * num2+ ( num1 - 40.0 ) * num2 * 1.5;

      cout << "Salary is $" << salary;

      cout << "\n\nEnter hours worked (-1 to end): ";
      cin >>num1;
   }
}


