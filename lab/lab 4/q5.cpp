#include<iostream>
#include<stack>
using namespace std;

bool ParenthesisChecker(string s){
    stack<char> *s1=new stack<char>();
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='(' ||  s[i]=='{' || s[i]=='['){
            s1->push(s[i]);
           }
           else if(s[i]==')')
           {
               if(s1->size()!=0 && s1->top()=='(')
                    s1->pop();
                else
                    return false;
           }
           else if(s[i]=='}')
           {
               if(s1->size()!=0 && s1->top()=='{')
                    s1->pop();
                else
                    return false;
           }
           else if(s[i]==']')
           {
               if(s1->size()!=0 && s1->top()=='[')
                    s1->pop();
                else
                    return false;
           }

    }
    if(s1->size()==0)
    return true;
    else
        return false;

}



int main(){

string s;
cout<<"Enter the expression including brackets: ";
cin>>s;
cout<<endl;
if(ParenthesisChecker(s)){
    cout<<"There is no error of parenthesis of the expression"<<endl;
}
else
    cout<<"parenthesis error"<<endl;

}
