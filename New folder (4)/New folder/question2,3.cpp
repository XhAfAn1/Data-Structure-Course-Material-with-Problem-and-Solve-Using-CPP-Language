#include<iostream>
using namespace std;
void printR(int n)
{
    if (n == 0) return;

    cout << n << " ";
    printR(n - 1);


}

void print(int n)
{

    if (n == 0) return;


    print(n - 1);
    cout << n << " ";
}

int main()
{
    int number;
    cout<<"Enter number";
    cin>>number;
    cout<<"Numbers Are: ";
    print(number);
    cout<<endl;
    cout<<"Numbers in reverse Are: ";

    printR(number);
    return 0;

}



