#include<bits/stdc++.h>

using namespace std;

int precednce(char op)
{
if(op == '*' || op == '/')
return 2;
else if(op == '+' || op == '-')
return 1;
else
return -1;
}

void infixToPostx(string infix)
{
std::stack<char> input;
input.push('N');
int l = infix.length();
string postfix;
for(int i = 0; i < l; i++)
{
if((infix[i] >= 'a' && infix[i] <= 'z')||(infix[i] >= 'A' && infix[i] <= 'Z')||(infix[i] >= '0' && infix[i] <= '9'))
{
postfix+=infix[i];
}
else if(infix[i] == '(')
{
input.push('(');
}
else if(infix[i] == ')')
{
while(input.top() != 'N' && input.top() != '(')
{
char c = input.top();
input.pop();
postfix += c;
}
if(input.top() == '(')
{
char c = input.top();
input.pop();
}
}
else if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/')
{
while(input.top() != 'N' && precednce(infix[i]) <= precednce(input.top()))
{
char c = input.top();
input.pop();
postfix += c;
}
input.push(infix[i]);
}
else
{
cout<<"Invalid input string";
exit(0);
}
}
while(input.top() != 'N')
{
char c = input.top();
input.pop();
postfix += c;
}
cout <<"Postfix : "<<postfix<< endl;

}
int main()
{
string input;
cout<<"Enter a string:";
getline(cin,input);
infixToPostx(input);
return 0;

}

