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
    cout << "Enter the width: ";
    cin >> w;
    cout << "Enter the height:";
    cin >> h;
    reclangle *x_member_oparation,*x_dot_oparation;
    x_member_oparation = new reclangle();
    x_dot_oparation = new reclangle();
    x_member_oparation ->set_width(w);
    x_member_oparation ->set_height(h);
    x_member_oparation ->get_area();
    (*x_dot_oparation).set_width(w);
    (*x_dot_oparation).set_height(h);
    (*x_dot_oparation).get_area();

    delete x_member_oparation;
    delete x_dot_oparation;
    (*x_dot_oparation).get_area();
    x_member_oparation ->get_area();



    return 0;
}

