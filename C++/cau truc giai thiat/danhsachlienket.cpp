#include<iostream>
using namespace std;
struct node
{
    int data;
    node *pnext;
};
typedef struct node NODE;
struct List
{
    NODE *phead;
    NODE *ptail;
};
typedef struct List LIST;
int khoitao(List &l)
{
    l.phead=l.ptail=NULL;
}
NODE*  getnode(int x,NODE *p)
{
    p=new NODE;
    if(p==NULL)
    {
        return NULL;
    }
    else
    {
        p->data=x;
        p->pnext=NULL;
    }
    return p;
}
void addtail(LIST &l,NODE *p)
{
    khoitao(l);


    if(l.phead==NULL)
    {
            l.phead=l.ptail=p;
    }
    else
        {


            l.ptail->pnext=p;
            l.ptail=p;

        }
}
void exportz(LIST l,NODE *p)
{

    for(p=l.phead;p!=NULL;p=p->pnext)
    {
        cout<<"\t"<<p->data;
    }

}

int main()
{
    LIST l;
    NODE *p;
    int n,dt;
  cout<<"\n nhap vao so luong node:\t";
  cin>>n;
  for( int i=1;i<=n;i++)
  {
      cout<<"\n nhap vao data:\t";
      cin>>dt;
      getnode(dt,p);
      addtail(l,p);
  }
  exportz(l,p);

    return 0;
}
