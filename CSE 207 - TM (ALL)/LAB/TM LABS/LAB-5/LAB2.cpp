#include<iostream>
using namespace std;
int decrement(int);
int printNumber(int);

int main()
{
 int number;
 cout<<"Enter number to get decrement using recursion";
 cin>>number;
 cout<<decrement(number);
 cout<<" "<<endl;

	cout << "\n (1 to " << number << ") : ";
	printNumber(number);

	return 0;
 
}
int printNumber(int number){
 if (number >= 1)
		{
			// Reduce the number and try again 
			// Until n is greater than zero
			printNumber(number - 1);
			// Display calculated result
			cout << " " << number;
		}	
 	
 }

int decrement(int num)
{
 if(num==1)
 {

  return 1;
 }
 else
 {
  cout<<num<<" ";
  return decrement(num-1);
 }
 
}
