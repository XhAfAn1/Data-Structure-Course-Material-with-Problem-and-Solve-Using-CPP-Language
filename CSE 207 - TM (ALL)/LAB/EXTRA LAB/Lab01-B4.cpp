#include<iostream>
using namespace std;
class reclangle{
private:
    double width;
    double height;
public:
    reclangle(){}
        reclangle(double w,double h)
        {
            height = h;
            width = w;
        }
        void set_width(double w)
        {
            width = w;
        } void set_height(double h)
        {
            height = h;
        } void get_area()
        {
            double area = width * height;
            cout << "Area: " << area << endl;
        }
    };

int main(){
    double w,h;
    int n,i;
    cout << "Enter the Rectangle: ";
    cin >> n;
    reclangle r[n];
    for(i=0;i<n;i++){
       cout << "Enter the width: ";
    cin >> w;

    cout << "Enter the height:";
    cin >> h;
     r->set_width(w);
     r->set_height(h);
     r->get_area();
    }
    r->get_area();


    return 0;
}



