
#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
using namespace std;
//tim khiem tuyen tinh -- mang chua duoc sap xep
int timtt(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return 1;
        }
    }
    return 0;
}
//tim va tra ve gia tri thay tai i
int timx(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }



    }
      cout<<"\n khong ton tai!";
}

int main()
{
    int a[100],n;
    int i,x;
    cout<<"\n nhap vao so luong phan tu:\t";
    cin>>n;
    for(i=0;i<n;i++)
    {


    cout<<"a["<<i<<"]:\t";
    cin>>a[i];
    }
    cout<<"\n nhap x:\t";
    cin>>x;

             if(timtt(a,n,x)==0)
             {
                 cout<<"\n khong tim thay x!";
             }
             else
             {
                 cout<<"\n tim thay x!";
             }
cout<<"\n"<< timx(a,n,x);

    return 0;
}
