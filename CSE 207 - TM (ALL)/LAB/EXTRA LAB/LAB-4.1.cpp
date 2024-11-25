#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void copystack(stack<string>* s1, stack<string>* s2){

    stack<string> temp1;
    stack<string> temp2;

    while(!s1->empty()){
        temp1.push(s1->top());
        s1->pop();
    }

    while(!s2->empty()){
        temp2.push(s2->top());
        s2->pop();
    }

    while(!temp1.empty()){
        s2->push(temp1.top());
        temp1.pop();
    }

    while(!temp2.empty()){
        s1->push(temp2.top());
        temp2.pop();
    }
}

int main()
{
    stack<string> s1;
    s1.push("FIRST");
    s1.push("SECOND");
    s1.push("THIRD");
    stack<string> s2;
    s2.push("first");
    s2.push("second");
    s2.push("third");

    copystack(&s1,&s2);


    while(!s1.empty()){
        cout << s1.top() << "\t";
        s1.pop();
    }

    cout << "\n";

    while(!s2.empty()){
        cout << s2.top() << "\t";
        s2.pop();
    }




}
