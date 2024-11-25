#include<iostream>
#include "stack.h"
using namespace std;


int main(){

 stack *s=new stack();



    int m=-1;
    while(m!=0){

        cout<<"MENU"<<endl;
    cout<<"1.Push data"<<endl;
    cout<<"2.Pop data"<<endl;
    cout<<"3.Size of the stack"<<endl;
    cout<<"4.check Isempty"<<endl;
    cout<<"5.Distroy the whole stack"<<endl;
    cout<<"6.Top data"<<endl;
    cout<<"7.copy stack"<<endl;
    cout<<"8.Binary conversion "<<endl;
    cout<<"9.Reverse the stack "<<endl;
    cout<<"10.Bracket checking "<<endl;

    cout<<"100.Display stack"<<endl;
    cout<<"press 0 to exit"<<endl<<endl;
    cout<<"Enter choice: ";

    cin>>m;
    if(m==0){
        break;
    }

    if(m==1){
            int d;
    cout<<"Enter the value: ";
    cin>>d;
        s->push(d);
    }
     else if(m==2){
        s->pop();
    }
    else if(m==3){
        cout<<"Size of the stack is: "<<s->size();
    }
    else if(m==4){
        if(s->isempty()){
            cout<<"There is no data in the Stack";
        }
        else
            cout<<"There is data available in the stack";
    }
    else if(m==5){
        s->distroy();
    }
     else if(m==6){

        cout<<"The top data the stack is: "<<s->topd();

    }

    else if(m==7){
stack *s2=new stack();
        cout<<"before copy: "<<endl;
cout<<"stack 1: "<<endl;
s->display();
cout<<endl;
cout<<"stack 2: "<<endl;
s2->display();

s->copyStack(s2);

cout<<endl;
cout<<"After copy: "<<endl;
cout<<"stack 1: "<<endl;
s->display();
cout<<endl;
cout<<"stack 2: "<<endl;
s2->display();

    }
    else if(m==8){
       s->distroy();
       int a;
cout<<"Enter the Number to convert to binary: ";
cin>>a;
s->BinaryConverter(a);
cout<<"the Binary value of "<<a<<" is: ";
  s->displaybinary();

    }

    else if(m==9){
    cout<<"before reverse "<<endl;
cout<<"stack : "<<endl;
s->display();
cout<<endl;
s->reverseStack();
cout<<endl;
cout<<"After reverse "<<endl;
cout<<"stack : "<<endl;
s->display();


    }
    else if(m==10){

       s->distroy();
       string st;
cout<<"Enter the expression including brackets: ";
cin>>st;
cout<<endl;
if(s->ParenthesisChecker(st)){
    cout<<"There is no error of parenthesis of the expression"<<endl;
}
else
    cout<<"parenthesis error"<<endl;

    }






    else if(m==100){

        cout<<"Current Stack is: "<<endl;
        s->display();

    }



    if(m<0 || m>100)
        cout<<endl<<"Invalid Option"<<endl;


    cout<<endl;

    cout<<"Current Stack is: "<<endl;
    s->display();

    cout<<endl;
    }
    cout<<"Final Stack is: "<<endl;
    s->display();
    }
