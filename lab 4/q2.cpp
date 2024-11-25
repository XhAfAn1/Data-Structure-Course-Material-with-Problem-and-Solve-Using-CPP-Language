#include<iostream>
#include "stack.h"
using namespace std;

void copyStack(stack *s1, stack *s2){
    int n=s1->size();
    stack *temp=new stack();

    for(int i=0;i<n;i++){
        temp->push(s1->topd());
        s1->pop();
    }
    for(int i=0;i<n;i++){
        s2->push(temp->topd());
        temp->pop();
    }

}

int main(){
stack *s1=new stack();
stack *s2=new stack();
int n;
cout<<"How many data you want to push in stack 1: ";
cin>>n;
for(int i=0;i<n;i++){
    int d;
    cout<<"Enter value to push: ";
    cin>>d;
    s1->push(d);
}

cout<<"before copy: "<<endl;
cout<<"stack 1: "<<endl;
s1->display();
cout<<endl;
cout<<"stack 2: "<<endl;
s2->display();

copyStack(s1,s2);

cout<<endl;
cout<<"After copy: "<<endl;
cout<<"stack 1: "<<endl;
s1->display();
cout<<endl;
cout<<"stack 2: "<<endl;
s2->display();

}
