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
    cout << "Enter the Reclangle: ";
    cin >> n;
    reclangle r[n];
    for(i=0;i<n;i++){
       cout << "Enter the width: ";
    cin >> w;

    cout << "Enter the height:";
    cin >> h;
     r[i].set_width(w);
   r[i].set_height(h);
    r[i].get_area();
    }
    r[0].get_area();
    r[i].get_area();
    return 0;
}


