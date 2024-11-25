#include<iostream>
using namespace std;
int main()
{
	long num,deci,rem,base=1,binary=0;
	cout<<"Enter a decimal integer : ";
	cin>>num;
	deci=num;
	while(num>0)
	{
		rem=num%2;
		binary=binary+rem*base;
		num=num/2;
		base=base*10;
	}
	cout<<"It's binary equivalent is : "<<binary<<endl;
	return 0;
}
