#include<iostream>
#include "sll.h"

using namespace std;


int smallkey(sll s){
int small=s.get(0);
for(int i=0;i<s.size();i++){

    if(s.get(i)<small)
        {
            small=s.get(i);
        }
}
return small;
}


void display(sll s){
for(int i=0;i<s.size();i++){
    cout<<s.get(i)<<" ";
}
}
/*
void delneg(sll s){
     node *temp=s.head;
     int count=0;
    while(temp!=NULL)
    {
        count++;
        if(temp->data<0)
        {
            s.remove(count);
            count--;
        }
        temp=temp->next;
    }
}
*/
void delneg(sll s){

     for(int i=0;i<s.size();i++){
        if(s.get(i)<0){
            s.remove(i);
            i--;
        }
     }
}
/*

void delnegnext(sll s){
     node *temp=s.head;
     int count=-1;
    while(temp!=NULL)
    {
        count++;
        if(temp->data<0)
        {
            count++;
        if(count <s.size() && temp->next->data>=0){

        s.remove(count);

        }
        count--;

        }
        temp=temp->next;
    }
}

*/
void delnegnext(sll s)
{

    for(int i=0; i<s.size(); i++)
    {
        if(s.get(i)<0  && i+1<s.size())
        {
            if((s.get(i+1))>0)
            {
                s.remove(i+1);
                i--;
            }

        }

    }


}

void append(sll s){
     node *temp=s.head;

     int count=s.size();


     for(int i=0;i<count;i++){

            s.create(temp->data);
            temp=temp->next;
     }


}



int main()
{

    sll s;



    int m=-1;
    while(m!=0){
            cout<<endl;
         cout<<"MENU"<<endl;
    cout<<"1.Add item"<<endl;
    cout<<"2.Find smallkey "<<endl;
    cout<<"3.Delete negetive node"<<endl;
    cout<<"4.Delete the following node of negetive"<<endl;
    cout<<"5.Append the list"<<endl;
    cout<<"6.Swap two node"<<endl;
    cout<<"7.Display the List"<<endl;
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
        s.create(d);
    }


    if(m==2){
            cout<<endl<<"The smallest key value is: "<<smallkey(s)<<endl;
            //display(s);
    }

    if(m==3){
        delneg(s);
    cout<<"all negetive nodes has been deleted"<<endl;

    }
    if(m==4){
         delnegnext(s);
        cout<<"All the next positive value nodes following negetive nodes has been deleted"<<endl;
    }

    if(m==5){
           append(s);
            cout<<"Successfully appended the same list"<<endl;
    }
    if(m==6){
        int a,b;
            cout<<"Enter a node number: ";
            cin>>a;
            cout<<"Enter another node number: ";
            cin>>b;
            s.swap(a,b);
         cout<<"Successfully swapped the nodes"<<endl;
    }

    if(m<0 || m>7)
        cout<<endl<<"Invalid Option"<<endl;


    cout<<endl;

    cout<<"Current List is: ";
    s.display();


    cout<<endl;
    cout<<endl;
    }
    s.display();



}
