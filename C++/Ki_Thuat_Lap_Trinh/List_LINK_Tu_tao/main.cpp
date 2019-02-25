#include <iostream>

using namespace std;
struct phanso
{
    int Tuso;
    int Mauso;
};
typedef struct phanso PhanSo;
//Khai bao Node-List
struct node
{
    PhanSo data;
    struct node *pnext;
};
typedef struct node NODE;
struct List
{
    NODE *pHead;
    NODE *pTail;
};
typedef struct List LIST;
//Khoi tao
void Init(LIST &l)
{
    l.pHead=l.pTail=NULL;
}
//Tao Node
NODE* getnode(PhanSo x)//Nhan vao phan so
{
    NODE *p=new NODE;
    if(p==NULL)
    {
        return NULL;
    }
    p->data=x;
    p->pnext=NULL;
    return p;
}
//Nhap-xuat  Phan So
void Iput_PhanSo(PhanSo &x)//Tham CHIEU rErenfer ne!
{
    cout<<"\n Nhap vao Tu so:\t";
    cin>>x.Tuso;
    cout<<"\n Nhap vao Mau so:\t";
    cin>>x.Mauso;
}
void outPut(PhanSo x)
{
    cout<<x.Tuso<<"/"<<x.Mauso<<" ";
}
//Them - sau
void Add_Tail(LIST &l,NODE *p)
{
    if(l.pHead==NULL)
    {
        l.pHead=l.pTail=p;
    }
    else
    {
        l.pTail->pnext=p;
        l.pTail=p;
    }
}
//Nhap du lieu
void Iput(LIST &l)
{
    int n;
    do
    {
        cout<<"\n Nhap vao so Luong Node:\t";
        cin>>n;
    }while(n<=0);
    Init(l);//kHOI TAO node =null
    for(int i=1;i<=n;i++)
    {
        PhanSo x;
      Iput_PhanSo(x);
      NODE *p=getnode(x);
      Add_Tail(l,p);
    }
}//xuat
void exportz(LIST l)
{
    for(NODE *p=l.pHead;p!=NULL;p=p->pnext)
    {
        outPut(p->data);
    }
}
int main()
{
  LIST l;
  Iput(l);
  exportz(l);
    return 0;
}
