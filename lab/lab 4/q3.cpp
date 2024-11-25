#include<iostream>
#include "stack.h"
using namespace std;

void BinaryConverter(int a,stack *b){
while(a!=0){
    b->push(a%2);
    a=a/2;
}
}

int main(){
stack *s1=new stack();
int a;
cout<<"Enter the Number to convert to binary: ";
cin>>a;
BinaryConverter(a,s1);
cout<<"the Binary value of "<<a<<" is: ";
s1->displaybinary();


}
