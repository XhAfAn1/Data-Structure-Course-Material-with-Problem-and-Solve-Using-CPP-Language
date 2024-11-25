#include<iostream>
#include "stack.h"
using namespace std;


void copyStack(stack *s1, stack *s2){
    stack *temp=new stack();
    int s=s1->size();
    for(int i=0;i<s;i++){
            temp->push(s1->topd());
    s1->pop();
    }
    for(int i=0;i<s;i++){
            s2->push(temp->topd());
    temp->pop();
    }

}

void intTobinary(int a,stack *b){
while(a!=0){
    b->push(a%2);
    a=a/2;
}
}

void stackreverse(stack *s1){
 stack *temp1=new stack();
  stack *temp2=new stack();
  int s=s1->size();
    for(int i=0;i<s;i++){
            temp1->push(s1->topd());
    s1->pop();
    }
    for(int i=0;i<s;i++){
            temp2->push(temp1->topd());
    temp1->pop();
    }
    for(int i=0;i<s;i++){
            s1->push(temp2->topd());
    temp2->pop();
    }


}


bool BracketChecker(string s){
    stack *b=new stack();
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='(' or  s[i]=='{' or s[i]=='['){
            b->push(s[i]);
           }
    }
    b->display();
    return true;
}

int main(){

string s="[{()}]";
if(BracketChecker(s)){
    cout<<"balanced";
}
else
    cout<<"error";



/*
    stack *s1=new stack();

    //intTobinary(45,s1);

    s1->push(1);
    s1->push(2);
    s1->push(3);
    s1->push(4);
    s1->push(5);
    s1->push(6);

    stackreverse(s1);
    s1->display();

*/

    /*
    stack *s1=new stack();
    stack *s2=new stack();

    s1->push(1);
    s1->push(2);
    s1->push(3);
    s1->push(4);
    s1->push(5);
    s1->push(6);
    copyStack(s1,s2);

    s2->display();
    */
    /*
      stack s;



    int m=-1;
    while(m!=0){
            cout<<endl;
        cout<<"MENU"<<endl;
    cout<<"1.Push"<<endl;
    cout<<"2.Pop "<<endl;
    cout<<"3.Size"<<endl;
    cout<<"4.Isempty"<<endl;
    cout<<"5.Destry"<<endl;
    cout<<"6.Top"<<endl;
    cout<<"7.Display"<<endl;
    cout<<"press 0 to exit"<<endl<<endl;
    cout<<"Enter :";

    cin>>m;
    if(m==0){
        break;
    }

    if(m==1){
            int d;
    cout<<"Enter the value: ";
    cin>>d;
        s.push(d);
    }
     else if(m==2){
        s.pop();
    }
    else if(m==3){
        cout<<"Size of the stack is: "<<s.size();
    }
    else if(m==4){
        if(s.isempty()){
            cout<<"The Stack is Empty";
        }
        else
            cout<<"The Stack is not Empty";
    }
    else if(m==5){
        s.distroy();
    }
     else if(m==6){
        //cout<<"The top data is: "<<s.topa()->data;
        cout<<"The top data is: "<<s.topd();

    }



    if(m<0 || m>8)
        cout<<endl<<"Invalid Option"<<endl;


    cout<<endl;

    cout<<"Current Stack is: "<<endl;
    s.display();


    cout<<endl;
    cout<<endl;
    }
    cout<<"Final Stack is: "<<endl;
    s.display();
    */
}


