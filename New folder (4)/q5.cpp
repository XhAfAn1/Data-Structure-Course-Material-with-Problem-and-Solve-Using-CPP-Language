#include <iostream>
using namespace std;

class Node {
    public:
    int data;
Node* next;
Node(){}
Node(int a){
 data=a;}
};


Node* deleteNode(Node* start, int k)
{

    if (k < 1)
       return start;


    if (start == NULL)
       return NULL;

    if (k == 1)
    {
        Node *res = start->next;
        delete(start);
        return res;
    }

    start->next = deleteNode(start->next, k-1);
    return start;
}

void create(Node *&head,int a)
    {
        Node *ptr,*temp;
        ptr=new Node(a);
        //ptr->data=a;
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

void printList( Node *head)
{
    while (head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}


int main()
{
     Node *head = NULL;
    int n;
    cout<<"no of value: ";
    cin>>n;
    int data;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter :";
        cin>>data;
        create(head,data);
    }
    printList(head);
    int k ;
    cout<<"no node to delete:";
    cin>>k;

    head = deleteNode(head, k);

    printf("after delete the Linked List: ");
    printList(head);

    return 0;
}
