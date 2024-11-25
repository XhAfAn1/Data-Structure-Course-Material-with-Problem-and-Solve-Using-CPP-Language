#include<iostream>
#include "queue.h"
using namespace std;



int main(){


 Q *q=new Q();
    stack *s=new stack();


    int m=-1;
    while(m!=0){

        cout<<"MENU"<<endl;
    cout<<"1.enqueue"<<endl;
    cout<<"2.dequeue"<<endl;
    cout<<"3.Size"<<endl;
    cout<<"4.Isempty"<<endl;
    cout<<"5.Distroy "<<endl;
    cout<<"6.Top data"<<endl;

    cout<<"7.copy Queue"<<endl;
    cout<<"8.Group Queue"<<endl;
    cout<<"9.delete negetive Queue"<<endl;
    cout<<"10.stack to queue"<<endl;
    cout<<"11.Reverse Queue"<<endl;
    cout<<"12.Queue to Stack"<<endl;

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
        q->enQ(d);
    }
     else if(m==2){
        q->deQ();
    }
    else if(m==3){
        cout<<"Size of the stack is: "<<q->size();
    }
    else if(m==4){
        if(q->isempty()){
            cout<<"There is no data in the Stack";
        }
        else
            cout<<"There is data available in the stack";
    }
    else if(m==5){
        q->distroy();
    }
     else if(m==6){

        cout<<"The top data the stack is: "<<q->topd();

    }

    else if(m==7){
Q *q2=new Q();
        cout<<"before copy: "<<endl;
cout<<"Queue 1: "<<endl;
q->display();
cout<<endl;
cout<<"queue 2: "<<endl;
q2->display();

q->copyQ(q2);

cout<<endl;
cout<<"After copy: "<<endl;
cout<<"queue 1: "<<endl;
q->display();
cout<<endl;
cout<<"queue 2: "<<endl;
q2->display();

    }
    else if(m==8){
             q->CategorizedQ();
    }



    else if(m==9){
          cout<<"before deleting negetive: "<<endl;
cout<<"Queue : "<<endl;
q->display();
cout<<endl;


q->delNeg();

cout<<endl;
cout<<"After delete: "<<endl;
cout<<"queue : "<<endl;
q->display();
cout<<endl;


    }
    else if(m==10){

            q->distroy();
            int n;
cout<<"How many data you want to push in stack : ";
cin>>n;
for(int i=0;i<n;i++){
    int d;
    cout<<"Enter value to push: ";
    cin>>d;
    s->push(d);
}
cout<<"before convert "<<endl;
cout<<"stack: "<<endl;
s->display();
cout<<endl;
    cout<<"Queue: "<<endl;
q->display();
q->StackToQ(s);
cout<<"After convert "<<endl;
cout<<"stack: "<<endl;
s->display();
cout<<endl;
    cout<<"Queue: "<<endl;
q->display();

    }
    else if(m==11){

             cout<<"before reverse "<<endl;
cout<<"queue : "<<endl;
q->display();
cout<<endl;
q->reverseQ();
cout<<endl;
cout<<"After reverse "<<endl;
cout<<"queue : "<<endl;
q->display();
    }

    else if(m==12){
q->QtoStack(s);
    cout<<"Queue: "<<endl;
q->display();

cout<<endl;
cout<<"stack: "<<endl;
s->display();
    }







    else if(m==100){

        cout<<"Current queue is: "<<endl;
        q->display();

    }



    if(m<0 || m>100)
        cout<<endl<<"Invalid Option"<<endl;


    cout<<endl;

    cout<<"Current queue is: "<<endl;
    q->display();

    cout<<endl;
    }
    cout<<"Final queue is: "<<endl;
    q->display();





    }

