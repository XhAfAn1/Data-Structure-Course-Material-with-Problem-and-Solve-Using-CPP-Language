#include <bits/stdc++.h>
using namespace std;
class Node
{
 public:
int val;
Node *next;
Node (int data)
{
 val = data;
 next = NULL;
};
static Node insertAtPos(Node head, int data,int pos)
{
        Node temp = new Node(data); 
        if(pos == 1)
        { 
            temp.next = head;
            return temp;
        }
        Node current = head;
        for(int i =1;i<=pos-2 && current!=null; i++ )
        { 
            current = current.next;
        }
        temp.next = current.next;
        current.next = temp;
        return head;
}
