#include<iostream>
using namespace std;
class Heap{
    public:
 int arr[100];
 int count=0;

 void reheapup(int i){
     if(i>0){

 int p= (i-1)/2;
 if(arr[i]>arr[p]){
    swap(i,p);
    }
    reheapup(p);

 }
 else
    return;
 }


 void minreheapup(int i){
     if(i>0){

 int p= (i-1)/2;
 if(arr[i]<arr[p]){
    swap(i,p);
 }
    minreheapup(p);

 }
 else
    return;
 }

 void reheapdown(int i){
 int lc=2*i+1;
 int rc=2*i+2;
 int c;
 if(lc<=count || rc<=count){
    if(arr[rc]<arr[lc]){
       c=lc;
    }
    else
        c=rc;
     if(arr[c]>arr[i]){
            swap(c,i);
            reheapdown(c);
     }

 }
 else
    return;

 }

 void insert(int a){
 arr[count]=a;
 reheapup(count);
 count++;
 }

 void deletem(){
 arr[0]=arr[count-1];
 count--;
 reheapdown(0);
 }

 void maxtomin(){
     int tempCount=0;
 int temp[100];
 for(int i=0;i<count;i++){
    temp[i]=arr[i];
 }
 for(int i=0;i<count;i++){
    arr[tempCount]=temp[tempCount];
 minreheapup(tempCount);
 tempCount++;
 }
 }

 void display(){
 for (int i = 0; i < count;i++)
            cout << arr[i] << " ";
 }


int maxData() {
        int max = arr[0];
        for( int i = 0 ; i < count ; i++ ) {
            if( arr[i] > max ) {
                max = arr[i];
            }
        }
        return max;
    }
    int minData() {
        int min = arr[0];
        for( int i = 0 ; i < count ; i++ ) {
            if( arr[i] < min ) {
                min = arr[i];
            }
        }
        return min;
    }

void swap(int a,int b){
int temp;
temp=arr[a];
arr[a]=arr[b];
arr[b]=temp;
}
};

int main(){
    Heap *h=new Heap();
int m=-1;
    while(m!=0){
            cout<<endl;
        cout<<"MENU"<<endl;
    cout<<"1.insert"<<endl;
    cout<<"2.Delete "<<endl;
    cout<<"3.max"<<endl;
    cout<<"4.min"<<endl;
    cout<<"5.max to min"<<endl;
    cout<<"6.display"<<endl;

    cout<<"press 0 to exit"<<endl<<endl;
    cout<<"Enter :";

    cin>>m;
    if(m==0){
        break;
    }

    if(m==1){ int n;
    cout<<"how many values: ";
    cin>>n;
    int data;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value:";
        cin>>data;
        h->insert(data);
    }
    }


    if(m==2){

    h->deletem();
    }

    if(m==3){
        cout<<"max element is"<<h->maxData()<<endl;
    }
    if(m==4){
        cout<<"min element is"<<h->minData()<<endl;
    }

    if(m==5){
     h->maxtomin();
    }
    if(m==6){
     h->display();
    }

    if(m<0 || m>7)
        cout<<endl<<"Invalid Option"<<endl;

    cout<<endl;
    cout<<"current head ";
    h->display();
    cout<<endl;
    }


}
