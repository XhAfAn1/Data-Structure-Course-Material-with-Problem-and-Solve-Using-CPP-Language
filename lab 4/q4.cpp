#include<iostream>
#include "stack.h"
using namespace std;

void reverseStack(stack *s1){
 stack *temp1=new stack();
  stack *temp2=new stack();
  int s=s1->size();
    for(int i=0;i<s;i++){
            temp1->push(s1->topd());
    s1->pop();
    }
    for(int i=0;i<s;i++){
            temp2->push(temp1->topd());
    temp1->pop();
    }
    for(int i=0;i<s;i++){
            s1->push(temp2->topd());
    temp2->pop();
    }


}

int main(){
stack *s1=new stack();
int n;
cout<<"How many data you want to push in stack : ";
cin>>n;
for(int i=0;i<n;i++){
    int d;
    cout<<"Enter value to push: ";
    cin>>d;
    s1->push(d);
}

cout<<"before reverse "<<endl;
cout<<"stack : "<<endl;
s1->display();
cout<<endl;
reverseStack(s1);
cout<<endl;
cout<<"After reverse "<<endl;
cout<<"stack : "<<endl;
s1->display();

}
