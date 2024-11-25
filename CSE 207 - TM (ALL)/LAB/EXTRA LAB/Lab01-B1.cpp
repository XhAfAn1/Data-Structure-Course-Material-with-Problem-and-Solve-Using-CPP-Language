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
        } void set_area()
        {
            double area = width * height;
            cout << "Area: " << area << endl;
        }
    };

int main(){
    reclangle r1;
    double w,h;
    cout << "Enter the width: ";
    cin >> w;
    cout << "Enter the height:";
    cin >> h;
    r1.set_width(w);
    r1.set_height(h);
    r1.set_area();
    return 0;
}
