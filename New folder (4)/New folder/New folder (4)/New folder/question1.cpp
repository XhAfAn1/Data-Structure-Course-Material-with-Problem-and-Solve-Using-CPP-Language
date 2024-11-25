#include <iostream>
using namespace std;

int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}

int main()
{
    int a, b;

    cout << "Enter two number to find GCD: ";
    cin >> a >> b;

    cout << "GCD of " << a << " & " <<  b << " is: " << gcd(a, b);

    return 0;
}

