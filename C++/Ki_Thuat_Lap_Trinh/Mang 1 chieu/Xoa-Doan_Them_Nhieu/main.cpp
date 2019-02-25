#include <iostream>
#define MAX 100
#include<stdlib.h>
#include<conio.h>
using namespace std;
void add(int a[],int &n,int vitri,int sothem)
{
    for(int i=n; i>=vitri+1; i--)
    {
        a[i]=a[i-1];

    }
    a[vitri]=sothem;
    n++;
}
void ADD_(int a[],int &n,int soLan,int sothem,int vitri)
{
    for(int i=0; i<=soLan; i++)
    {
        add(a,n,i+vitri,sothem);
    }
}
void nhap(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"\n a["<<i<<"]:\t";
        cin>>a[i];
    }

}
void xuat(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
void xoa(int a[],int &n,int vitrixoa)
{
    for(int i=vitrixoa; i<n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
void Xoadoan(int a[],int &n,int Truoc,int sau)
{
    for(int i=Truoc; i<=sau; i++)
    {
        xoa(a,n,i);
        i--;
        sau--;


    }
}
int main()
{
    min:
    system("color 3");
    int a[MAX],n;
    do
    {
        cout<<"\n Nhap vao so phan tu:\t";
        cin>>n;
        if(n<=0)
        {
            cout<<"\n Kiem tra lai!";
        }

    }
    while(n<=0);

    nhap(a,n);
    xuat(a,n);
    cout<<"\n*******************\n";
    int vitri;
    do
    {
        cout<<"\n Nhap vao vi tri can Them:\t";
        cin>>vitri;
        if(vitri<0||vitri>=n)
            cout<<"\n Kiem tra!";

    }
    while(vitri<0||vitri>=n);

    int sothem;
    cout<<"\n nhap vao so Them:\t";
    cin>>sothem;

    int solan;
    do
    {
        cout<<"\n Nhap vao so lan :\t";
        cin>>solan;
        if(solan<0)
        {
            cout<<"\n Khong Hop le!";
        }
    }
    while(solan<0);

     ADD_(a,n,solan,sothem,vitri);
    cout<<"\n mang sau khi them vi tri a["<<vitri<<"] ";
    cout<<"\t<-> voi "<<solan<<" lan \n";
    xuat(a,n);
    int vitrixoa;
    cout<<"\n Nhap vao vi tri xoa:\t";
    cin>>vitrixoa;
    xoa(a,n,vitrixoa);
    xuat(a,n);

    int truoc,sau;
    do
    {
        cout<<"\n Nhap vi tri truoc :\t";
        cin>>truoc;
        if(truoc<0||truoc>=n)
        {
            cout<<"\n Khong hop le!";

        }

    }
    while(truoc<0||truoc>=n);
    do
    {

        cout<<"\n Nhap vi tri sau:\t";
        cin>>sau;
        if(sau<truoc||sau>=n)
        {
            cout<<"\n sau lon hon truoc!";
        }


    }
    while(sau<truoc||sau>=n);

    cout<<"\n*********************\n";
    Xoadoan(a,n,truoc,sau);
    cout<<"\n Mang sau khi xoa tu doan(a["<<truoc<<"]-a["<<sau <<"])\n";
    xuat(a,n);
    cout<<"\n Keydown 1 Tiep tuc\n";
    char x=getch();
    if(x=='1')
    {
        system("cls");
        goto min;
    }
    return 0;
}
