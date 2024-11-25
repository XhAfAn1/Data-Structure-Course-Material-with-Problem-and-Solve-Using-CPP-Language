#include <iostream>
#include <stdlib.h>

using namespace std;
struct product{
    int id;
    string name;
    string brandName;
    string type;
    double quantity;
    double PriceOfEachUnit;
} ;
void Printing(int n,product *ptr){
    //now search the products by their names
    ineligible:
    cout<<"The products name that you are able to search are:"<<endl;
    cout<<"1.Dove"<<endl<<"2.Savlon"<<endl<<"3.Potato Crackers"<<endl<<"4.Oil"<<endl<<"5.Shampoo"<<endl;
    cout<<"Enter the name of the product that you wanted to search:";
    string Name;
    cin>>Name;
    for(int i=0; i<5; i++){
        if(Name==(ptr+i)->name){
            cout<<"The id of the product is:"<<endl;
            cout<<(ptr+i)->id<<" "<<endl;
            cout<<"The name of the product is:"<<endl;
            cout<<(ptr+i)->name<<" "<<endl;
            cout<<"The Price of each unit of the product is:"<<endl;
            cout<<(ptr+i)->PriceOfEachUnit<<" "<<endl;
            cout<<"The quantity of the product is:"<<endl;
            cout<<(ptr+i)->quantity<<" "<<endl;
            cout<<"The type of the product is:"<<endl;
            cout<<(ptr+i)->type<<" "<<endl;
            cout<<"The Brand Name of the product is:"<<endl;
            cout<<(ptr+i)->brandName<<" "<<endl;
            free(ptr);
            return;
        }
    }
    cout<<"Sorry you have given wrong product name please try again."<<endl;
    goto ineligible;

}
int main() {
    int n;
    product *ptr;
    ptr=new product[5*sizeof (product)];

    //storing the value of (ptr+0)

    (ptr+0)->id=2020;
    (ptr+0)->name="Dove";
    (ptr+0)->brandName="Uniliver";
    (ptr+0)->type="Cosmetics";
    (ptr+0)->quantity=2;
    (ptr+0)->PriceOfEachUnit=50;
    //storing the value of (ptr+1)
    (ptr+1)->id=2021;
    (ptr+1)->name="Savlon";
    (ptr+1)->brandName="Uniliver";
    (ptr+1)->type="Hand Sanitizer";
    (ptr+1)->quantity=2;
    (ptr+1)->PriceOfEachUnit=100;
    //storing the value of (ptr+2)
    (ptr+2)->id=2022;
    (ptr+2)->name="Potato Crackers";
    (ptr+2)->brandName="Pran";
    (ptr+2)->type="Food";
    (ptr+2)->quantity=3;
    (ptr+2)->PriceOfEachUnit=60;
    //storing the value of (ptr+3)
    (ptr+3)->id=2023;
    (ptr+3)->name="Oil";
    (ptr+3)->brandName="Pran";
    (ptr+3)->type="Cosmetics";
    (ptr+3)->quantity=3;
    (ptr+3)->PriceOfEachUnit=100;
    //storing the value of (ptr+4)
    (ptr+4)->id=2024;
    (ptr+4)->name="Shampoo";
    (ptr+4)->brandName="Clear";
    (ptr+4)->type="Cosmetics";
    (ptr+4)->quantity=3;
    (ptr+4)->PriceOfEachUnit=500;
    Printing(n,ptr);

}

