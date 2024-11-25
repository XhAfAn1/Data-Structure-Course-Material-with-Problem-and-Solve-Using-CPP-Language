#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void copystack(stack<string>* s1, stack<string>* s2){
//create two temporary stacks
stack<string> temp1;
stack<string> temp2;
while(!s1->empty()){ //till s1 becomes empty
temp1.push(s1->top()); //insert top element to temp1
s1->pop(); //pop the element
}
while(!s2->empty()){ //till s2 becomes empty
temp2.push(s2->top()); //insert top element to temp2
s2->pop(); //pop the element
}
while(!temp1.empty()){ //till temp1 becomes empty
s2->push(temp1.top()); //insert top element to s1
temp1.pop(); //pop the element
}
while(!temp2.empty()){ //till temp2 becomes empty
s1->push(temp2.top()); //insert top element to s2
temp2.pop(); //pop the element
}
}
int main()
{
//insert elements to s1 stack
stack<string> s1;
s1.push("FIRST");
s1.push("SECOND");
s1.push("THIRD");
//insert elements to stack2
stack<string> s2;
s2.push("first");
s2.push("second");
s2.push("third");
copystack(&s1,&s2); //call by passing references of stacks
//This loops will display the contents in stack from top to bottom
//so printing in reverse order
/*
while(!s1.empty()){
cout << s1.top() << "\t";
s1.pop();
}
cout << "\n";
while(!s2.empty()){
cout << s2.top() << "\t";
s2.pop();
}
*/
return 0;
}

