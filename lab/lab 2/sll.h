#include <iostream>
#include"node.h"

using namespace std;
class sll
{
    public:
    node *head=NULL,*ptr,*temp;
    int lsize=0;




    void create(int a)
    {
        ptr=new node(a);
        if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
        }
    }




    void addBegin(int a){
         ptr=new node(a);
        if(head==NULL)
    {
        head=ptr;
    }
    else{
        temp=head;
        head=ptr;
        ptr->next=temp;
    }
    }



    void addAnyPos(int a,int b){
    ptr=new node(b);
    node *temp=head;

    if(a==0){
        addBegin(b);
    }
    else{
    for(int i=1;i<a;i++){
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
    }
    }



    bool contains(int a){
        node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data==a){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }


    int size(){
        lsize=0;
     node *temp=head;
        while(temp!=NULL)
        {
           lsize++;
            temp=temp->next;
        }
        return lsize;
    }





    bool isEmpty(){
    if(head==NULL){
        return true;
    }
    else
        return false;
    }




    int get(int a){
        temp=head;
        for(int i=0;i<a;i++){
        temp=temp->next;
    }
    return temp->data;
    }


/*
    int indexof(int a){
        temp=head;
        int t=0;
        for(int i=1;i<size();i++){
                if(a==temp->data){

                    cout<<"The index of data-"<<a<<" is: "<<i<<endl;
                    t++;
                }
        temp=temp->next;
    }
    if(t!=0)
        return 1;
    else
    return 0;
    }
*/

    int indexof(int a){
        temp=head;
        int count=0;
        for(int i=1;i<size();i++){
                if(a==temp->data){
                    return count;
                }
        count++;
        temp=temp->next;
    }

    return -1;
    }


    void removeFirst(){
    node *temp=head;
    head=temp->next;

    }




    void removeLast(){
         node *temp=head;
         node *tempp=NULL;
        for(int i=1;i<size();i++){
        tempp=temp;
        temp=temp->next;
    }
    tempp->next=NULL;
    delete temp;


    }



    void remove(int a){
    node *temp=head;
    node *tempp=NULL;

    if(head==NULL)
    {
        cout<<"Empty";
    }
    else if(a==0){

        removeFirst();
    }
    else{
    for(int i=1;i<a+1;i++){
        tempp=temp;
        temp=temp->next;
    }
    tempp->next=temp->next;
    delete temp;


    }
    }





    void reverse(){
        for(int i=1;i<size();i++)
            {
                int tem;
                temp=head;
                for(int j=i;j<size();j++){

                    {
                    tem=temp->data;
                    temp->data=temp->next->data;
                    temp->next->data=tem;
                }
                temp=temp->next;
                }
            }
    }






    void sort(){

           for(int i=1;i<size();i++)
            {
                int tem;
                temp=head;
                for(int j=i;j<size();j++){

                    if(temp->data > temp->next->data){
                    tem=temp->data;
                    temp->data=temp->next->data;
                    temp->next->data=tem;
                }
                temp=temp->next;
                }
            }


    }






    void swap(int a, int b){
    int x,y;
    if(a<=size() && b<=size()){
        x=get(a);
        y=get(b);

        temp=head;
        for(int i=1;i<=size();i++){
                if(i==a){
                    temp->data=y;
                }
                else if(i==b){
                    temp->data=x;
                }
            temp=temp->next;
        }
    }

}








    void display()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
