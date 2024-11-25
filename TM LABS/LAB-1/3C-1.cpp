#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main() {
   Node s1,s2,s3;
   s1.data=10;
   s1.next=&s2;

   s2.data=20;
   s2.next=&s3;

   s3.data=30;
   s3.next=NULL;

 //  cout<<(*s1.next).data;
 cout<<s1.next<<endl;
 cout<<s2.next<<endl;
 cout<<s3.next<<endl;
 cout<<"**********"<<endl;
 cout<<s1.data<<endl;
 cout<<s1.next->data<<endl;
 cout<<s2.next->data<<endl;
 cout<<s3.next->data<<endl;


}

