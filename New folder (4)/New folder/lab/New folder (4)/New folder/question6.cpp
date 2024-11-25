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
    mysort(s->head,s->head,s->head->next);
    cout<<endl;
    s->display();

}

