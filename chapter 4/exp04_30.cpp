
#include <iostream>
using namespace std;

int main()
{
   double r,d,C,S;
   double pi = 3.14159;

   cout << "Enter the radius: ";
   cin >> r;

    d=2*r;
    C=r * 2.0*pi;
    S=pi*r*r;

   cout << "The diameter is " <<d << endl;
   cout << "The circumference is " << C;
   cout << "\nThe area is " << S<< endl;
}



