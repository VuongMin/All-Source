#include <iostream>
using namespace std;
struct node
{
    int data;
    node *pnext;
};
typedef struct node NODE;
struct List
{
    NODE *pHead;
    NODE *pTail;
};
typedef struct List LIST;
void innit(LIST &l)
{
    l.pHead=l.pTail=NULL;//Khoi tao cho no la null ne
}
NODE* getnode(int x)//nhan vao gia tri
{
    NODE *p=new NODE;//cap phat
    if(p==NULL)
    {
        return NULL;
    }
    p->data=x;//gan x cho data node dau tien
    p->pnext=NULL;
    return p;
}
void AddTail(LIST &l,NODE * p)
{
    if(l.pHead==NULL)
    {
        l.pHead=l.pTail=p;
    }
    else
        {
            l.pTail->pnext=p;//l.ptail quang day den pnext tro den p
            l.pTail=p;//chinh thuc cap nhat
        }
}
void AddHead(LIST &l,NODE *p)
{
    if(l.pHead==NULL)
    {
        l.pHead=l.pTail=p;
    }
    else
    {
        p->pnext=l.pHead;
        l.pHead=p;
    }
}
void input(LIST &l)
{
    int n;
    do
    {
        cout<<"\n Nhap vao so luog Node:\t";
        cin>>n;
    }while(n<=0);
    innit(l);
    for(int i=1;i<=n;i++)
    {
        int data;
        cout<<"\n Nhap vao data:\t";
        cin>>data;
        NODE* p=getnode(data);
        AddTail(l,p);
     //   AddHead(l,p);
    }

}
void Export(LIST l)
{
    for(NODE *p=l.pHead;p!=NULL;p=p->pnext)
    {
        cout<<p->data<<" ";
    }
}
void Giaiphong(LIST &l)
{
    NODE *p;// chi la khai bao bien binh thuong THoi kieu NODE
    while(l.pHead!=NULL)
    {
        p=l.pHead;
        l.pHead=l.pHead->pnext; //cap nhat l.phead la o ben canh
        delete p;
    }
}
void Add_saunode(LIST &l,NODE *cantim,NODE* Them)
{
    bool check=false;
    for(NODE *k=l.pHead;k!=NULL;k=k->pnext)
    {
        if(k->data==cantim->data)
        {
            check=true;//de xiu kiem tra neu ko co truong hop
            NODE *Itemp=k->pnext;//tao bien phu va luu o ke tiep
            k->pnext=Them;
            Them->pnext=Itemp;
        }

    }
    if(check==false)
    {
        cout<<"\n data Khong Ton tai trong Mang!";
    }
    else
    {
        cout<<"\n Node sau khi them tai node "<<cantim->data<<"\n";
          Export(l);
    }
}
void Dele_Head(LIST &l)
{
    NODE *p=l.pHead;
    l.pHead=l.pHead->pnext;
    delete p;
}
void Dele_Tail(LIST &l)
{
    NODE *Truoc_do;
    for(NODE* k=l.pHead;k!=NULL;k=k->pnext)
    {
        if(k==l.pTail)
        {
            l.pTail=Truoc_do;//l.ptail se duoc gan
            Truoc_do->pnext=NULL;
            delete k;
        }
        Truoc_do=k;
    }
}

int main()
{
    LIST l;
    input(l);
    Export(l);
    int cantim,Them;
    cout<<"\n Nhap vao Node can Tim:\t";
    cin>>cantim;
    NODE *CANTIM=getnode(cantim);
    cout<<"\n Nhap vao Node Them :\t";
    cin>>Them;
    NODE *THEM=getnode(Them);
    Add_saunode(l,CANTIM,THEM);
    cout<<"\n Xoa -dau \n";
    Dele_Head(l);
    Export(l);
    cout<<"\n Xoa cuoi\n";
    Dele_Tail(l);
    Export(l);
    Giaiphong(l);
    //Export(l);
        return 0;
}
