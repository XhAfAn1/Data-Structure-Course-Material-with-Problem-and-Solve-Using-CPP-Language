#include<iostream>
#include "sll.h"

using namespace std;

int main()
{
    sll s;



    int m=-1;
    while(m!=0){
            cout<<endl;
        cout<<"MENU"<<endl;
    cout<<"1.Add data"<<endl;
    cout<<"2.Add in the beginning "<<endl;
    cout<<"3.Add in any position"<<endl;
    cout<<"4.Check if data exists"<<endl;
    cout<<"5.Check size of the list"<<endl;
    cout<<"6.Check if list is empty"<<endl;
    cout<<"7.Get data of specific position"<<endl;
    cout<<"8.Get position of the data"<<endl;
    cout<<"9.Remove the first data"<<endl;
    cout<<"10.Remove the last data"<<endl;
    cout<<"11.Remove and the return data of specific position"<<endl;
    cout<<"12.Reverse the list"<<endl;
    cout<<"13.Sort the list"<<endl;
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
            int d;
         cout<<"Enter the value to add in the beginnig: ";
    cin>>d;
        s.addBegin(d);
    }

    if(m==3){
        int item,pos;
        cout<<"Enter the position: ";
        cin>>pos;
        if(pos<0 || pos>s.size())
            cout<<"Invalid position";
        else{
        cout<<"Enter the value: ";
        cin>>item;
        s.addAnyPos(pos,item);
        }

    }
    if(m==4){
    int d;
    cout<<"Enter the item to search: ";
    cin>>d;
    if(s.contains(d)){
            cout<<endl;
        cout<<endl<<"The List contains the item"<<endl<<endl;
       }
       else
        cout<<endl<<"The List does not contain the item"<<endl<<endl;
    }

    if(m==5){
            cout<<endl<<"Size of the List is= "<<s.size()<<endl<<endl;

    }
    if(m==6){
       if(s.isEmpty()){
        cout<<endl<<"The List is Empty"<<endl<<endl;
       }
       else
        cout<<endl<<"The List is not Empty"<<endl<<endl;
    }
    if(m==7){
          cout<<"Enter the position to get the data: ";
        int d;
        cin>>d;
        cout<<"The data in pos-"<<d<<" is: "<<s.get(d);
    }
    if(m==8){
          cout<<"Enter the data to get the index: ";
        int d;
        cin>>d;

        if(s.indexof(d)==-1)
        {
             cout<<endl<<"data not found"<<endl;
        }
        else
            cout<<"The index of data-"<<d<<" is: "<<s.indexof(d)<<endl;
    }

    if(m==9){
        s.removeFirst();
         cout<<endl<<"Successfully removed the First data"<<endl<<endl;
    }
    if(m==10){
        s.removeLast();

         cout<<endl<<"Successfully removed the Last data"<<endl<<endl;
    }
    if(m==11){
        cout<<"Enter the position to remove: ";
        int d;
        cin>>d;
        s.remove(d);


         cout<<endl<<"Successfully removed "<<endl<<endl;
    }
    if(m==12){

        s.reverse();
         cout<<endl<<"Successfully reversed "<<endl<<endl;
    }
    if(m==13){

        s.sort();
         cout<<endl<<"Successfully sorted "<<endl<<endl;
    }
    if(m<0 || m>13)
        cout<<endl<<"Invalid Option"<<endl;


    cout<<endl;

    cout<<"Current List is: ";
    s.display();


    cout<<endl;
    cout<<endl;
    }
    s.display();

}
