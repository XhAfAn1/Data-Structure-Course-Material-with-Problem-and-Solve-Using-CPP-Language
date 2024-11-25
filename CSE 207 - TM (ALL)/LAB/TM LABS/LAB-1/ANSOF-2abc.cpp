#include <iostream>

using namespace std;

int main(){

#include <iostream>
using namespace std;

class product{

public:
int id;
string name;
string brandName;
string type;
int qty;
float price;
public:

void getInfo(){
cout<<"Enter id, product name, brand name, type, quantity and price :";
cin>>id>>name>>brandName>>type>>qty>>price;
}

void displayInfo(){
cout<<"Product name = "<<name<<endl;

cout<<"Brand name = "<<brandName<<endl;
cout<<"Product type = "<<type<<endl;
cout<<"Product quantity = "<<qty<<endl;
cout<<"Product price = "<<price<<endl;
}
};

int main();{

int num, i;

cout<<"How many product info you want to store ? : ";
cin>>num;

product* p = new product[num];
product* p1 = p;

for(i=0;i<num;i++){
p1->getInfo();
p1++;
}

string bName;
cout<<"\nEnter brand name : ";
cin>>bName;
cout<<"\nDetails of "<<bName<<" is :\n";
p1=p;

for(i=0;i<num;i++){
if(p1->brandName==bName){
p1->displayInfo();
}
p1++;
}

string ptype;
cout<<"\nEnter the product type : ";
cin>>ptype;
float total;
p1=p;

for(i=0;i<num;i++){
if(p1->type==ptype)
{
total=(p1->qty)*(p1->price);
}
p1++;
}

cout<<"Total asset of "<<ptype<<" is "<<total;

return 0;

}

}
