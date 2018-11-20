#include <iostream>
using namespace std;

int main()
{
   int account;
   double num1, num2, num3;
   double balance,limit;

   cout << "Enter account number (or -1 to quit): ";
   cin >>  num1;

   while ( account != -1 )
   {
      cout << "Enter beginning balance: ";
      cin >> num1;
      cout << "Enter total charges: ";
      cin >> num2;
      cout << "Enter total credits: ";
      cin >> num3;
      cout << "Enter credit limit: ";
      cin >> limit;


       balance =  num1 +  num2 - num3;
      cout << "New balance is " << num1<<endl;


      if (balance  > limit )
        cout << "Account:     " <<  num1 <<endl;
        cout<< "Credit limit: "<< limit<<endl;
        cout << "Balance:     " << num1<<endl;
        cout<< "Credit Limit Exceeded.";

      cout << "\n\nEnter account number (or -1 to quit): ";
      cin >>  num1;
   }
}


