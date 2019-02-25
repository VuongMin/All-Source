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
typedef struct LIST;
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
        p->data=p;
        p->pnext=NULL;
    }
    return p;
}
int main()
{

    return 0;
}
