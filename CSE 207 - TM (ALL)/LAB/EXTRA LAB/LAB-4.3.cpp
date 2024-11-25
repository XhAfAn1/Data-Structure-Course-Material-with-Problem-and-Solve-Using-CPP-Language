#include <iostream>
using std::cout;
using std::endl;
#include<string>
template <typename T>
class Stack {
private:
 typedef struct node {
 T data;
 node *next;
 } *node_ptr;
 node_ptr head;
 node_ptr curr;
 node_ptr temp;
public:
 Stack();
 void add_node(T add_data);
 void delete_node(T del_data);
 void pop();
 void push();
 void print_stack();
 int size();
 T last();
 T at(int index);
 T get_next(int index);
};
template <typename T>
Stack<T>::Stack() {
 head = NULL;
 curr = NULL;
 temp = NULL;
}
template <typename T>
void Stack<T>::add_node(T add_data) {
 node_ptr n = new node;
 n->next = NULL;
 n->data = add_data;
 if (head != NULL) {
 curr = head;
 while (curr->next != NULL) {
 curr = curr->next;
 }
 curr->next = n;
 }
 else {
 head = n;
 }
}
template <typename T>
void Stack<T>::delete_node(T del_data) {
 node_ptr del_ptr = NULL;
 temp = head;
 curr = head;
 while (curr != NULL && curr->data != del_data) {
 temp = curr;
 curr = curr->next;
 }
 if (curr == NULL) {
 cout << "Error: [" << del_data << "] was not in the stack" << endl;
 delete del_ptr;
 }
 else {
 del_ptr = curr;
 curr = curr->next;
 temp->next = curr;
 if (del_ptr == head) {
 head = head->next;
 temp = NULL;
 }
 delete del_ptr;
 cout << "The value [" << del_data << "] was deleted" << endl;
 }
}
template <typename T>
void Stack<T>::pop() {
 temp = head;
 head = head->next;
 delete temp;
}
template <typename T>
void Stack<T>::push() {
 if (head->next == NULL) {
 delete head;
 head = NULL;
 }
 else {
 node_ptr next_to_end = head;
 node_ptr end = head->next;
 while (end->next != NULL) {
 next_to_end = end;
 end = end->next;
 }
 delete end;
 next_to_end->next = NULL;
 }
}
template <typename T>
void Stack<T>::print_stack() {
 curr = head;
 while (curr != NULL) {
 cout << curr->data << endl;
 curr = curr->next;
 }
}
template <typename T>
int Stack<T>::size() {
 node_ptr p = head;
 int count;
 while (p != NULL) {
 count++;
 p = p->next;
 }
 return count;
}
template <typename T>
T Stack<T>::last() {
 if (head == NULL) {
 return head->data;
 }
 else {
 node_ptr end = head;
 while (end->next != NULL) {
 end = end->next;
 }
 return end->data;
 }
}
template <typename T>
T Stack<T>::at(int index) {
 curr = head;
 int count = 0;
 while (curr != NULL){
 if (count == index){
 return curr->data;
 }
 count++;
 curr = curr->next;
 }
 if (curr == NULL) {
 cout << "Error: [" << index << "] does not exist" << endl;
 }
}
template <typename T>
T Stack<T>::get_next(int index) {
 curr = head;
 int count = 0;
 while (curr != NULL){
 if (count == index){
 return curr->next->data;
 }
 count++;
 curr = curr->next;
 }
 if (curr == NULL) {
 cout << "Error: [" << index << "] does not exist" << endl;
 }
}
