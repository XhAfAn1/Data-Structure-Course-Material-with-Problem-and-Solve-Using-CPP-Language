#include <iostream>
//#include "node.h"
#include"stack.h"
using namespace std;

class Q{
 public:
    node *frnt=NULL ,*ptr,*temp,*rear,*temp1=NULL,*temp2=NULL;



    void enQ(int a)
    {
        ptr=new node(a);
        if(frnt==NULL)
    {
        frnt=ptr;
        rear=ptr;
    }
    else
    {
        temp=frnt;
        while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            rear=ptr;
        }
    }
      void priority_queue(int a){
    ptr=new node(a);
     if(frnt==NULL)
    {
        frnt=ptr;
        rear=ptr;
    }
    else
    {
        temp=frnt;
        while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            rear=ptr;
        }
/*
        temp=frnt;
        temp2=frnt;
        while(temp2->next!=NULL)
           {

                if(temp->data < ptr->data){
                    temp1->data=temp->data;
                    temp->data=ptr->data;
                    ptr->data=temp1->data;
                }

                temp=temp->next;
                temp2=temp->next;
            }

*/

    }



    void deQ(){
        temp=frnt;
        frnt=frnt->next;
        delete temp;
    }

    int size(){
    int s=0;
    temp=frnt;
    while(temp!=NULL){
        s++;
        temp=temp->next;
    }
    return s;
    }


    bool isempty(){
    if(frnt==NULL)
        return true;
    else
        return false;
    }


    void distroy(){
    temp=frnt;

    while(temp!=NULL){
        deQ();

        temp=temp->next;
    }
    }



    int topd(){

        return frnt->data;

    }
    node* topa(){
        return frnt;
    }


    void copyQ(Q *q1){
    int n=size();
    Q *temp=new Q();

    for(int i=0;i<n;i++){
        temp->enQ(topd());
        deQ();
    }
    for(int i=0;i<n;i++){
        q1->enQ(temp->topd());
        enQ(temp->topd());
        temp->deQ();
    }



    }


    void delNeg(){
    int n=size();
    Q *temp=new Q();

    for(int i=0;i<n;i++){
        temp->enQ(topd());
        deQ();
    }
    for(int i=0;i<n;i++){
        if(temp->topd()>0)
            enQ(temp->topd());
        temp->deQ();


    }



    }

    void CategorizedQ(){
        int n=size();
    Q *q1=new Q();
             Q *q2=new Q();
             Q *q3=new Q();
             Q *q4=new Q();
    for(int i=0;i<n;i++){
             if(topd()<18){
                q1->enQ(topd());
                deQ();
             }
             else if(topd()>17 && topd()<36){
                q2->enQ(topd());
                deQ();
             }
             else if(topd()>35 && topd()<46){
                q3->enQ(topd());
                deQ();
             }
             else if(topd()>46){
                q4->enQ(topd());
                deQ();
             }
    }

             cout<<"Group 1: ";
             q1->display();
             cout<<endl;
             cout<<"Group 2: ";
             q2->display();
             cout<<endl;
             cout<<"Group 3: ";
             q3->display();
             cout<<endl;
             cout<<"Group 4: ";
             q4->display();
             cout<<endl;

    }

    void reverseQ(){
  int s=size();
  stack *st=new stack();

    for(int i=0;i<s;i++){
    st->push(topd());
    deQ();

    }
    for(int i=0;i<s;i++){
    enQ(st->topd());
    st->pop();

    }


}

void StackToQ(stack *st){

    int s=st->size();
    for(int i=0;i<s;i++){
        enQ(st->topd());
        st->pop();
    }
}


void QtoStack(stack *st){
    int s=size();
    Q *temp=new Q();
    for(int i=0;i<s;i++){
        temp->enQ(topd());
        deQ();
    }
    for(int i=0;i<s;i++){
        st->push(temp->topd());
        enQ(temp->topd());
        temp->deQ();
    }

    st->reverseStack();
}



    void display(){
    temp=frnt;
   while(temp!=NULL){
        cout<<temp->data<<" ";
        //cout<<endl;
        temp=temp->next;
    }
    }

};
