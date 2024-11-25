#include <iostream>
#include <iostream>
using namespace std;
struct Node
{
 int value;
 Node * next;
};
//Declare List as a global variable
Node *List = NULL;
//add item to the end of the List
void add(int item)
{
 Node *temp = new Node;
 temp->value = item;
 temp->next = NULL;
 if (List == NULL)
 {
 List = temp;
 }
 else
 {
 Node *p = List;
 while (p->next != NULL)
 {
 p = p->next;
 }
 p->next = temp;
 }
}
//Add item at beginning of list
void addbegin(int item)
{
 Node *temp = new Node;
 temp->value = item;
 temp->next = List;
 List = temp;
}
//add at any position
void addanypos(int pos, int item)
{
 //if pos 0 then add at beginning of list
 if (pos == 0)
 {
 addbegin(item);
 }
 else
 {
 Node *temp = new Node;
 temp->value = item;
 Node *p = List;
 for (int i = 0; i < pos - 1; i++)
 {
 p = p->next;
 }
 temp->next = p->next;
 p->next = temp;
 }
}
//contains
bool contains(int item)
{
 Node *p = List;
 while (p != NULL)
 {
 if (p->value == item)
 {
 return true;
 }
 p = p->next;
 }
 return false;
}
//size
int size()
{
 Node *p = List;
 int count = 0;
 while (p != NULL)
 {
 count++;
 p = p->next;
 }
 return count;
}
//get
int get(int pos)
{
 if (pos < 0 || pos >= size())
 {
 //error
 return -1;
 }
 Node *p = List;
 for (int i = 0; i < pos; i++)
 {
 p = p->next;
 }
 return p->value;
}
//indexOf
int indexOf(int item)
{
 Node *p = List;
 int index = 0;
 while (p != NULL)
 {
 if (p->value == item)
 {
 return index;
 }
 index++;
 p = p->next;
 }
 return -1;
}
//removeFirst
void removefirst()
{
 if (List == NULL)
 {
 //error
 return;
 }
 Node *p = List;
 List = List->next;
 delete p;
}
//removelast
void removelast()
{
 if (List == NULL)
 {
 //error
 return;
 }
 Node *p = List;
 Node *q = List;
 while (p->next != NULL)
 {
 p = p->next;
 }
 while (q->next != p)
 {
 q = q->next;
 }
 q->next = NULL;
 delete p;
}
//remove
void remove(int pos)
{
 if (pos < 0 || pos >= size())
 {
 //error
 return;
 }
 if (pos == 0)
 {
 removefirst();
 }
 else
 {
 Node *p = List;
 for (int i = 0; i < pos - 1; i++)
 {
 p = p->next;
 }
 Node *q = p->next;
 p->next = q->next;
 delete q;
 }
}
void reverse()
{
 Node *current = List;
 Node *previous = NULL;
 Node *next = NULL;
 while (current != NULL)
 {
 next = current->next;
 current->next = previous;
 previous = current;
 current = next;
 }
 List = previous;
}
void sort()
{
 Node *p = List;
 Node *q = List->next;
 while (q != NULL)
 {
 if (p->value > q->value)
 {
 int temp = p->value;
 p->value = q->value;
 q->value = temp;
 }
 p = p->next;
 q = q->next;
 }
}
int main()
{
 //switch case for user's choice
 int choice;
 //infinite loop
 while (1)
 {
 //display menu based on created methods
 cout << "1. Add item at the end of the list" << endl;
 cout << "2. Add item at the beginning of the list" << endl;
 cout << "3. Add item at any position" << endl;
 cout << "4. Contains" << endl;
 cout << "5. Size" << endl;
 cout << "6. Get" << endl;
 cout << "7. IndexOf" << endl;
 cout << "8. Remove first item" << endl;
 cout << "9. Remove last item" << endl;
 cout << "10. Remove item at any position" << endl;
 cout << "11. Reverse" << endl;
 cout << "12. Sort" << endl;
 cout << "13. Exit" << endl;
 cout << "Enter your choice: ";
 cin >> choice;
 //switch case for user's choice
 switch (choice)
 {
 case 1:
 {
 cout << "You choosed add item to the end of the list" << endl;
 int item;
 cout << "Enter item: ";
 cin >> item;
 add(item);
 break;
 }
 case 2:
 {
 cout << "You choosed add item to the beginning of the list" << endl;
 int item;
 cout << "Enter item: ";
 cin >> item;
 addbegin(item);
 break;
 }
 case 3:
 {
 cout << "You choosed add item at any position" << endl;
 int pos, item;
 cout << "Enter position: ";
 cin >> pos;
 cout << "Enter item: ";
 cin >> item;
 addanypos(pos, item);
 break;
 }
 case 4:
 {
 cout << "You choosed contains" << endl;
 int item;
 cout << "Enter item: ";
 cin >> item;
 if (contains(item))
 {
 cout << "Item is in the list" << endl;
 }
 else
 {
 cout << "Item is not in the list" << endl;
 }
 break;
 }
 case 5:
 {
 cout << "You choosed size" << endl;
 cout << "Size of the list is: " << size() << endl;
 break;
 }
 case 6:
 {
 cout << "You choosed get" << endl;
 int pos;
 cout << "Enter position: ";
 cin >> pos;
 cout << "Item at position " << pos << " is: " << get(pos) << endl;
 break;
 }
 case 7:
 {
 cout << "You choosed indexOf" << endl;
 int item;
 cout << "Enter item: ";
 cin >> item;
 cout << "Index of item is: " << indexOf(item) << endl;
 break;
 }
 case 8:
 {
 cout << "You choosed remove first item" << endl;
 removefirst();
 break;
 }
 case 9:
 {
 cout << "You choosed remove last item" << endl;
 removelast();
 break;
 }
 case 10:
 {
 cout << "You choosed remove item at any position" << endl;
 int pos;
 cout << "Enter position: ";
 cin >> pos;
 remove(pos);
 break;
 }
 case 11:
 {
 cout << "You choosed reverse" << endl;
 reverse();
 break;
 }
 case 12:
 {
 cout << "You choosed sort" << endl;
 sort();
 break;
 }
 case 13:
 {
 cout << "You choosed exit" << endl;
 exit(0);
 }
 default:
 {
 cout << "Invalid choice" << endl;
 }
 }
 }
}
