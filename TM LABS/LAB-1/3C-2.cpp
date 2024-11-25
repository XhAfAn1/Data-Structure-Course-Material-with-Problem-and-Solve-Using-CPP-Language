#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};


int main() {

    Node *node1=new Node(10);
    Node *node2=new Node(20);

    node1->next=node2;
    node2->next=NULL;

//value of the data
  cout<<"The value of the data:"<<endl;
    cout<<node1->data<<endl;
    cout<<node2->data<<endl;
    cout<<"The address of the data:"<<endl;
    cout<<node1->next<<endl;
    cout<<node2->next<<endl;

}

