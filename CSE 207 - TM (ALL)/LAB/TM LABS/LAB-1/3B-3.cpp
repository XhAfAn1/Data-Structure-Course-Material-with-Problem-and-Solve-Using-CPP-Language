#include <iostream>
using namespace std;
class Rectangle{
    double height;
    double width;
public:

    void setHeight(double h){
        height=h;
    }
    void setWidth(double w){
        width=w;
    }
    int getHeight(){
        return height;
    }
    int getWidth(){
        return width;
    }
    void display(){
        cout<<getHeight()*getWidth()<<endl;
    }
};

int main() {

    cout<<"Enter how many circle you wanted to take:"<<endl;
    int n;
    cin>>n;
    Rectangle rec[n];
    double height;
    double width;
    for(int i=0; i<n; i++){
        cout<<"Enter the height of your rectangle:"<<endl;
        cin>>height;
        rec[i].setHeight(height);
        cout<<"Enter the width of your rectangle:"<<endl;
        cin>>width;
        rec[i].setWidth(width);
    }
    for(int i=0; i<n; i++){
        cout<<endl;
        cout<<"The"<<i<<" Number rectangle area is:"<<endl;
        rec[i].display();
    }

}

