#include <iostream>
using namespace std;

int fib(int x)
{
    if((x==1)||(x==0))
    {
        return(x);
    }
    else
    {
        return(fib(x-1)+fib(x-2));
    }
}
int main()
{
    int x, i=0, sum=0;
    cout << "Enter the terms of the series: ";
    cin >> x;
    cout << "Fibonnaci Series : ";
    while(i < x)
    {
        cout << " " << fib(i);
        i++;
    }
    sum = sum+fib(i);
    cout<<endl;
    cout << "SUM= " << sum-1;
    return 0;
}

