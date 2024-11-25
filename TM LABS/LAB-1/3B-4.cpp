#include <iostream>
#include <stdlib.h>
using namespace std;
class Rectangle{
    double height;
    double width;
public:

    void setHeight(double h){
        height=h;
    }
    int getHeight(){
        return height;
    }
    void setWidth(double w){
        width=w;
    }
    int getWidth(){
        return width;
    }
    void display(){
        cout<<height*width;
    }
};

int main() {
    //allocating the memory dynamically
    int n;
    cout<<"Enter how many Rectangle input u wanted to take:"<<endl;
    cin>>n;
    //taking the user input of the rectangle using pointer
    double height;
    double width;
    Rectangle *rectangle=new Rectangle;
    for(int i=0; i<n; i++){
        cout<<"Enter the height of the rectangle:"<<endl;
        cin>>height;
        (rectangle+i)->setHeight(height);
        cout<<"Enter the width of the rectangle:"<<endl;
        cin>>width;
        (rectangle+i)->setWidth(width);
    }
    //printing the area of the rectangle after taking the pointer
    for(int i=0; i<n; i++){
        cout<<endl;
        cout<<"The"<<" "<<i<<" "<<"number area of the rectangle is:"<<endl;
        (rectangle+i)->display();

    }
    //after allocating the memory then making free the memory
    free(rectangle);

}

