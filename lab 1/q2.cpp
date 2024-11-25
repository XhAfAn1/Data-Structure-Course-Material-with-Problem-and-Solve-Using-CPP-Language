#include <iostream>

using namespace std;

class primes{
    public:
    int range1;
    int range2;
    int count=0;
    int num[100];

    primes(){
    }
    primes(int n1, int n2){
    range1=n1;
    range2=n2;


    primeGenarator();

    }

    void primeGenarator(){
    int i, j,k=0;int isPrime;
    for(i=range1; i<=range2; i++)
    {
        isPrime = 1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
        {
            num[k]=i;
            k++;
            count++;

        }
    }

    }


    void display(){
    cout<<"All the prime numbers are: ";
    for(int i=0;i<count;i++){
        cout<<num[i]<<" ";
    }
    }

};

int main(){

    int r1,r2;
    cout<<"enter start number: ";
    cin>>r1;
    cout<<"enter end number: ";
    cin>>r2;
    if(r1<r2){
        primes *ptr=new primes(r1,r2);
    cout<<"All the prime numbers are: ";
    for(int i=0;i<ptr->count;i++){
        cout<<ptr->num[i]<<" ";
    }
    }
    else
        cout<<"range 2 must be greater than range 1"<<endl;
    //ptr->display();
    }


