#include <iostream>
using namespace std;

int gcdCal(int n1, int n2)
{
    if (n2 != 0)
       return gcdCal(n2, n1 % n2);
    else
       return n1;
}

int main()
{
   int n1, n2;

   cout << "Enter two number: ";
   cin >> n1 >> n2;

   cout << "GCD of " << n1 << " & " <<  n2 << " is: " << gcdCal(n1, n2);

   return 0;
}

