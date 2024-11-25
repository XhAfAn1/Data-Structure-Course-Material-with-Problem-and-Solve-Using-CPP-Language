#include <iostream>
using namespace std;
class Rectangle{
    double height;
    double width;
public:
    Rectangle(double height,double width){
        this->height=height;
        this->width=width;
    }
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
        cout<<"The area of the rectangle is:"<<getWidth()*getHeight()<<endl;
    }
};

int main() {
    cout<<"Enter the height of your rectangle:"<<endl;
    double height;
    cin>>height;
    cout<<"Enter the width of your rectangle:"<<endl;
    double width;
    cin>>width;
    Rectangle obj1=Rectangle(height,width);
    obj1.display();
}
