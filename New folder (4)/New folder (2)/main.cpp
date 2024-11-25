#include<iostream>
#include "sll.h"

using namespace std;


int gcdCal(int n1, int n2)
{
    if (n2 != 0)
       return gcdCal(n2, n1 % n2);
    else
       return n1;
}

void decrement(int n)
{
if (n == 0) return;

  cout << n << " ";
  decrement(n - 1);


}

void printNumber(int n){

  if (n == 0) return;


  printNumber(n - 1);
  cout << n << " ";
 }


 int fib(int x) {
if((x==1)||(x==0)) {
 return(x);
}else {
 return(fib(x-1)+fib(x-2));
}
}



node* deleteNode(node* head, int k)
{

    if (k < 1)
       return head;


    if (head == NULL)
       return NULL;

    if (k == 1)
    {
        node *res = head->next;
        delete(head);
        return res;
    }

    head->next = deleteNode(head->next, k-1);
    return head;
}


void mysort(node *&head,node *p1,node *p2)
{
    if(p2==NULL)
    {
        return;
    }
   node *p3=p1->next;
   while(p3!=NULL)
    {
        if(p1->data>p3->data)
        {
            swap(p1->data,p3->data);
        }
        p3=p3->next;
    }
    mysort(head,p2,p2->next);
}

int main()
{



    int m=-1;
    while(m!=0){
            cout<<endl;
        cout<<"MENU"<<endl;
    cout<<"1.find GCD of two numbers."<<endl;
    cout<<"2.print to the number of N "<<endl;
    cout<<"3.print reverse from number of N"<<endl;
    cout<<"4.Sum of N element in Fibonacci series"<<endl;
    cout<<"5.Delete N th node from SLL"<<endl;
    cout<<"6.Sort SLL"<<endl;

    cout<<"press 0 to exit"<<endl<<endl;
    cout<<"Enter :";

    cin>>m;
    if(m==0){
        break;
    }

    if(m==1){
           int n1, n2;

   cout << "Enter two number: ";
   cin >> n1 >> n2;

   cout << "GCD of " << n1 << " & " <<  n2 << " is: " << gcdCal(n1, n2);
   cout<<endl;
    }


    if(m==2){
    int n;
    cout<<"Enter the number to print :";
    cin>>n;
    printNumber(n);
    }

    if(m==3){
    int n;
    cout<<"Enter the number to print :";
    cin>>n;
    decrement(n);

    }
    if(m==4){

int x , i=1, sum=0;
cout << "Enter the number of terms : ";
cin >> x;
cout << "\nFibonnaci Series : ";
while(i < x) {
 cout << " " << fib(i);
 i++;
}
sum = sum+fib(i);
cout<<endl;
 cout << "SUM= " << sum-1;
    }

    if(m==5){
     sll *s=new sll();




     int n;
    cout<<"how many values: ";
    cin>>n;
    int data;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value:";
        cin>>data;
        s->create(data);
    }

     s->display();
     cout<<endl;
     cout<<"position of the node to delete:";
     int k;
    cin>>k;
    s->head=deleteNode(s->head,k);

    s->display();
    }
    if(m==6){


    sll *s=new sll();




     int n;
    cout<<"how many values: ";
    cin>>n;
    int data;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value:";
        cin>>data;
        s->create(data);
    }
    cout<<"before sorting:"<<endl;

     s->display();
    mysort(s->head,s->head,s->head->next);
    cout<<endl;
    cout<<"after sorting:"<<endl;
    s->display();
    }

    if(m<0 || m>13)
        cout<<endl<<"Invalid Option"<<endl;



    cout<<endl;
    }


}
