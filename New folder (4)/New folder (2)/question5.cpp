#include<iostream>
#include "sll.h"

using namespace std;



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

int main()
{
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
