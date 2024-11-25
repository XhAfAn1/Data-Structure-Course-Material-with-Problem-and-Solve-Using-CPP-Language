#include<iostream>
using namespace std;
class sNode
{
  public:
   int data;
   sNode *next;
   sNode(int d)
   {
       data=d;
       next= NULL;
   }
};
class dNode
{
   public:
    int d;
    sNode *sll;
    dNode* next;
    dNode(int da)
    {
        d= da;
        sll=NULL;
        next= NULL;
    }
};
class Graph
{
  public:
      int g[5][5]={{0}};
      dNode *head= NULL;
      sNode*  addedge(sNode *shead, int d)
      {
         sNode *temp= new sNode(d);
         if(shead==NULL)
            shead= temp;
         else
         {
           sNode *t= shead;
            while(t->next!= NULL)
            {
                t=t->next;
            }
            t->next= temp;
         }
        return shead;
      }
      void adjlistCreation(int data)
      {
        dNode *temp= new dNode(data);
        sNode *shead= NULL;
        int num,sdata;
        if(head==NULL)
        {
            head=temp;
            cout<<"Enter number of adjacent Node of first node";
            cin>>num;
            for(int i=0;i<num;i++)
            {
               cout<<"Enter adjacent Node";
               cin>>sdata;
               shead= addedge(shead,sdata);
            }
            head->sll=shead;

        }
        else{
            dNode *t= head;
            while(t->next!= NULL)
            {
                t=t->next;
            }
            t->next= temp;
            t=t->next;
            cout<<"Enter number of adjacent Node";
            cin>>num;
            for(int i=0;i<num;i++)
            {
               cout<<"Enter adjacent Node";
               cin>>sdata;
               shead= addedge(shead,sdata);
            }
            t->sll=shead;
        }
      }
      void listdisplay()
      {
         dNode *t= head;
         while(t!= NULL)
            {
                cout<<t->d<<"-->";
                sNode *st= t->sll;
                while(st!= NULL)
                {
                    cout<<st->data<<"->";
                    st=st->next;
                }
                cout<<endl;
                t=t->next;
            }
      }
      void creation()
      {
        int r,c;
        for(int i=0;i<25;i++)
        {
          cout<<"\n Enter row and column number";
          cin>>r>>c;
          g[r][c]=1;
          g[c][r]=1;
          if(r==-1)
            break;
        }
      }
      void display()
      {
          for(int i=0;i<5;i++)
          {
             for(int j=0;j<5;j++)
             {
                 cout<<g[i][j];
             }
             cout<<endl;
          }
      }

};
int main()
{
    Graph g;
   // g.creation();
   // g.display();
   g.adjlistCreation(0);
   g.adjlistCreation(1);
   g.adjlistCreation(2);
   g.adjlistCreation(3);
   g.adjlistCreation(4);
   g.listdisplay();
    return 0;
}
