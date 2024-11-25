#include <iostream>

using namespace std;


class Rectangle
{
private:
double height;
double width;
public:
Rectangle() {};
Rectangle(double height,double width)
{
this->height=height;
this->width=width;
}
void setheight(double h)
{
height=h;
}
void setwidth(double w)
{
width=w;
}
double getheight()
{
return height;
}
double getwidth()
{
return width;
}
void displayArea()
{
double area=height*width;
cout <<"Area: "<< area;
}
};

int main(){

double h,w;


//Answer of question i

Rectangle r1;
cout<<"enter height & range: ";
cin>>h>>w;
r1.setheight(h);
r1.setwidth(w);
r1.displayArea();
cout<<endl;

// Answer of question  ii

cout<<"enter height & range: ";
cin>>h>>w;
Rectangle *r2=new Rectangle(h,w);
r2->displayArea();


// Answer of question  iii
cout<<endl;
int n;
cout<<"how many rectangle: ";
cin>>n;
Rectangle rects[10];
for(int i=0;i<n;i++){
   cout<<"enter height & range: ";
cin>>h>>w;
Rectangle r3;
r3.setheight(h);
r3.setwidth(w);

rects[i]=r3;
}
for(int i=0;i<n;i++){
    cout<<"for rectangle-"<<i+1<<" ";
    rects[i].displayArea();
    cout<<endl;
}





// Answer of question iv

cout<<endl;
cout<<"how many rectangle: ";
cin>>n;
Rectangle *ptr= new Rectangle[10];
Rectangle *tempPtr=ptr;
for(int i=0;i<n;i++){
    cout<<"enter height & range: ";
cin>>h>>w;
    ptr->setheight(h);
    ptr->setwidth(w);
    ptr++;
}
cout<<endl;
for(int i=0;i<n;i++){
    cout<<"for rectangle-"<<i+1<<" ";
    tempPtr->displayArea();
    tempPtr++;
    cout<<endl;
}


}
