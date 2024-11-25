#include<bits/stdc++.h>

using namespace std;

class Product{
	public:
int id;
string name;
string bName;
string type;
int quantity;
double price;
};

int main()
{

int n,i,b=0;
string k,a;
struct Product *item;
cout << "Enter how many product information do you want : "<<endl;
cin>>n;

item = new Product[n*sizeof(Product)];

for(i = 0; i<n; i++)
{
cout << "Enter product id for number #"<< i+1 <<" : ";
cin>>item->id;
cout << "Enter Product name : ";
cin>>item->name;
cout<< "Enter brand name : ";
cin>>item->bName;
cout<< "Enter type: ";
cin>>item->type;
cout<< "Enter Quantity: ";
cin>>item->quantity;
cout<< "Enter price : ";
cin>> item->price;
cout<<"-----------------------------------";
cout<<endl;
item++;

}
cout<<endl;

cout << "Enter brand : ";
cin>>k;
cout<< endl;
cout << "Enter type : "<< endl;
cin>>a;

item = item - n;
for(i=0;i<n;i++)
{
if(item->bName==k)
{
cout<<"name of chosen brand : "<<item->name<<endl;
cout<<endl;
cout<<"type : "<<item->type<<endl;
cout<<endl;
cout<<"quantity : "<<item->quantity<<endl;
cout<<endl;
cout<<"price : "<<item->price<<endl;
cout<<endl;
}
if (item -> type==a){
cout<<"asset of type " <<a<<" is "<<(item->quantity) * (item-> price)<<endl;
cout<<endl;}
b=b+item-> price;
item++;
}
cout<<" total asset of that shop is "<< b;
item = item-n;
delete []item;
return 0 ;
}
