// CPP program to check for balanced brackets.
#include <bits/stdc++.h>
using namespace std;
 
// function to check if brackets are balanced
bool areBracketsBalanced(string expr)
{ 
    stack<char> temp;
        for(int i=0;i<expr.length();i++)
        {
            if(temp.empty())
            {
                temp.push(expr[i]);
            }
            else if((temp.top()=='('&& expr[i]==')')  ||  (temp.top()=='{' && expr[i]=='}')  ||  (temp.top()=='[' && expr[i]==']'))
            {
                temp.pop();
            }
            else
            {
                temp.push(expr[i]);
            }
        }
        if(temp.empty())
        {
            return true;
        }
        return false;
}
 
// Driver code
int main()
{
    string expr = "{()}[]";
 
    // Function call
    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
