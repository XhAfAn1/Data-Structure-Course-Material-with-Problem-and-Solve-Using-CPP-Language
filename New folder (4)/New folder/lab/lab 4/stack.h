#include <iostream>
#include "node.h"

using namespace std;

class stack{
 public:
    node *top=NULL ,*ptr,*temp;


//push function

    void push(int a)
    {
        ptr=new node(a);
        if(top==NULL)
    {
        top=ptr;
    }
    else
    {
        ptr->next=top;
        top=ptr;
    }
    }


    //pop function

    void pop(){
        temp=top;
        top=top->next;
        delete temp;
    }

    //size function


    int size(){
    int count=0;
    temp=top;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
    }

    //isEmpty function


    bool isempty(){
    if(top==NULL)
        return true;
    else
        return false;
    }

    //distroy function

    void distroy(){
    temp=top;

    while(temp!=NULL){
        pop();

        temp=temp->next;
    }
    }

    //top data function

    int topd(){

        return top->data;

    }

    //top adress function

    node* topa(){
        return top;
    }



    void copyStack(stack *s2){
    int n=size();
    stack *temp=new stack();

    for(int i=0;i<n;i++){
        temp->push(topd());
        pop();
    }
    for(int i=0;i<n;i++){
        s2->push(temp->topd());
        push(temp->topd());
        temp->pop();
    }

}

void BinaryConverter(int a){
while(a!=0){
    push(a%2);
    a=a/2;
}
}



void reverseStack(){
 stack *temp1=new stack();
  stack *temp2=new stack();
  int s=size();
    for(int i=0;i<s;i++){
            temp1->push(topd());
    pop();
    }
    for(int i=0;i<s;i++){
            temp2->push(temp1->topd());
    temp1->pop();
    }
    for(int i=0;i<s;i++){
            push(temp2->topd());
    temp2->pop();
    }


}






bool ParenthesisChecker(string s){

    int n=s.size();
    for(int i=0;i<n;i++){

             if (s[i] == '(')
            push(1);
        else if (s[i] == '{')
            push(2);
        else if (s[i] == '[')
            push(3);



           else if(s[i]==')')
           {
               if(size()!=0 && topd()==1)
                    pop();
                else
                    return false;
           }
           else if(s[i]=='}')
           {
               if(size()!=0 && topd()==2)
                    pop();
                else
                    return false;
           }
           else if(s[i]==']')
           {
               if(size()!=0 && topd()==3)
                    pop();
                else
                    return false;
           }

    }
    if(size()==0)
    return true;
    else
        return false;

}






    //display function

    void display(){
    temp=top;
   while(temp!=NULL){
        cout<<temp->data<<" ";
        cout<<endl;
        temp=temp->next;
    }
    }

    //display for binary function


    void displaybinary(){
    temp=top;
   while(temp!=NULL){
        cout<<temp->data;

        temp=temp->next;
    }
    }
};
