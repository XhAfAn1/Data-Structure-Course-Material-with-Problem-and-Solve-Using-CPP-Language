#include<iostream>
using namespace std;
class Heap
{
public:
    int data[100];
    int count=0;

    void reheapup(int i)
    {
        if(i>0)
        {

            int p= (i-1)/2;
            if(data[i]>data[p])
            {
                swap(i,p);
            }
            reheapup(p);

        }
        else
            return;
    }


    void min_reheapup(int i)
    {
        if(i>0)
        {

            int p= (i-1)/2;
            if(data[i]<data[p])
            {
                swap(i,p);
            }
            min_reheapup(p);

        }
        else
            return;
    }

    void reheapdown(int i)
    {
        int lc=2*i+1;
        int rc=2*i+2;
        int c;
        if(lc<=count || rc<=count)
        {
            if(data[rc]<data[lc])
            {
                c=lc;
            }
            else
                c=rc;
            if(data[c]>data[i])
            {
                swap(c,i);
                reheapdown(c);
            }

        }
        else
            return;

    }

    void insert(int a)
    {
        data[count]=a;
        reheapup(count);
        count++;
    }

    void deletem()
    {
        data[0]=data[count-1];
        count--;
        reheapdown(0);
    }

    void maxtomin()
    {
        int tempCount=0;
        int temp[100];
        for(int i=0; i<count; i++)
        {
            temp[i]=data[i];
        }
        for(int i=0; i<count; i++)
        {
            data[tempCount]=temp[tempCount];
            min_reheapup(tempCount);
            tempCount++;
        }
    }

    void display()
    {
        for (int i = 0; i < count; i++)
            cout << data[i] << " ";
    }


    int maxData()
    {
        int max = data[0];
        for( int i = 0 ; i < count ; i++ )
        {
            if( data[i] > max )
            {
                max = data[i];
            }
        }
        return max;
    }
    int minData()
    {
        int min = data[0];
        for( int i = 0 ; i < count ; i++ )
        {
            if( data[i] < min )
            {
                min = data[i];
            }
        }
        return min;
    }

    void swap(int a,int b)
    {
        int temp;
        temp=data[a];
        data[a]=data[b];
        data[b]=temp;
    }
};

int main()
{
    Heap *h=new Heap();
    int m=-1;
    while(m!=0)
    {
        cout<<"MENU"<<endl;
        cout<<"1.Insert value"<<endl;
        cout<<"2.Delete root"<<endl;
        cout<<"3.Max value"<<endl;
        cout<<"4.Min value"<<endl;
        cout<<"5.Max to min"<<endl;
        cout<<"6.Display"<<endl;

        cout<<"press 0 to exit"<<endl<<endl;
        cout<<"Enter :";

        cin>>m;
        if(m==0)
        {
            break;
        }

        if(m==1)
        {
            int n;
            cout<<"how many values: ";
            cin>>n;
            int data;
            for(int i=0; i<n; i++)
            {
                cout<<"Enter value:";
                cin>>data;
                h->insert(data);
            }
        }


        if(m==2)
        {

            h->deletem();
        }

        if(m==3)
        {
            cout<<"max element is"<<h->maxData()<<endl;
        }
        if(m==4)
        {
            cout<<"min element is"<<h->minData()<<endl;
        }

        if(m==5)
        {
            h->maxtomin();
        }
        if(m==6)
        {
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

