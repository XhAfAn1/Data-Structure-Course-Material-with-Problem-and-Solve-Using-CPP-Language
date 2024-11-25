#include<iostream>
using namespace std;
void decrement(int n)
{
if (n == 0) return;

  cout << n << " ";
  decrement(n - 1);


}

void printNumber(int n){

  if (n == 0) return;


  printNumber(n - 1);
  cout << n << " ";
 }

int main()
{
 int number;
 cout<<"Enter number";
 cin>>number;
 decrement(number);
 cout<<endl;

	printNumber(number);

	return 0;

}



