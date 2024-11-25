#include<iostream>
using namespace std;
void RecursiveCopyStack(stack<int>& S,stack<int>& copy)
{

	if (S.size() == 0)
		return;

	int val = S.top();


	S.pop();


	RecursiveCopyStack(S, copy);


	copy.push(val);
}


void copyStack(stack<int>& S)
{
	stack<int> copy;
	RecursiveCopyStack(S, copy);
	cout << "Copy one from another: ";
	int f = 0;
	while (!copy.empty()) {

         if (f == 0) {
			cout << copy.top();
			f = 1;
		}
		else
			cout << "	   "<< copy.top();
            copy.pop();
	}
}

