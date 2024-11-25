#include <iostream>

using namespace std;

class product
{
private:
    int id;
    string name;
    string brand_name;
    string type;
    int quantity;
    double price;

public:
    product() {}

    product(int id, string name, string bname, string type,int q,double p)
    {
        this->id=id;
        this->name=name;
        this->brand_name=bname;
        this->type=type;
        this->quantity=q;
        this->price=p;
    }
    void setId(int id)
    {
        this->id=id;
    }
    int getId()
    {
        return this->id;
    }
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return this->name;
    }
    void setBrandName(string bname)
    {
        this->brand_name=bname;
    }
    string getBrandName()
    {
        return brand_name;
    }
    void setType(string type)
    {
        this->type=type;
    }
    string getType()
    {
        return type;
    }
    void setQuantity(int q)
    {
        this->quantity=q;
    }
    int getQuantity()
    {
        return quantity;
    }
    void setPrice(double p)
    {
        this->price=p;
    }
    double getPrice()
    {
        return price;
    }

    void display()
    {
        cout<<" ID: "<<id<<" Name: "<<name<< " Brand Name: "<<brand_name<<" Type: "<<type<<" Quantity: "<<quantity<<" Price: "<<price<<endl;
    }

};
int main()
{
    int n;
    product products[10];
    cout<<" Enter the number of product to enter: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<" for product no-"<<i+1<<endl;
        product p1;
        int id,q;
        double p;
        string n,bn,t;

        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter Name: ";
        cin>>n;
        cout<<"Enter Brand Name: ";
        cin>>bn;
        cout<<"Enter Type: ";
        cin>>t;
        cout<<"Enter Qunatity: ";
        cin>>q;
        cout<<"Enter Price: ";
        cin>>p;

        //Answer of question 1(a)

        p1.setId(id);
        p1.setName(n);
        p1.setBrandName(bn);
        p1.setType(t);
        p1.setQuantity(q);
        p1.setPrice(p);
        products[i]=p1;


        // Answer of question 1(b)

            product *p2=new product(id,n,bn,t,q,p);
            products[i]=*p2;


    }

    // Answer of question 1(a)
    cout<<"List of products of price above 40$"<<endl;
     for(int i=0;i<n;i++){
         if(products[i].getPrice()>40){
             cout<<"Name : "<<products[i].getName()<<endl;
             cout<<"Price : "<<products[i].getPrice()<<endl;
             cout<<endl;
         }
     }


     // Answer of question 2(a)


    string a;
    cout<<" enter type to search: ";
    cin>>a;
    for(int i=0; i<n; i++)
    {
        if(products[i].getType()==a)
            products[i].display();
    }

    // Answer of question 2(b)


    string b;
    cout<<" enter type to calculate total asset: ";
    cin>>b;
    double tp=0;
    for(int i=0; i<n; i++)
    {
        if(products[i].getType()==b)
            tp=tp+(products[i].getQuantity() * products[i].getPrice());
    }
    cout<<" Total asset price of type "<<b<<" is :"<<tp<<endl;




    // Answer of question 3

    double total=0;
    for(int i=0; i<n; i++)
    {
            total=total+(products[i].getQuantity() * products[i].getPrice());
    }
    cout<<"Total asset price of the store is :"<<total<<endl;



    return 0;
}
