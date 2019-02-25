#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int a[100],n;
    cout<<"nhap vao so luong phan tu:\t"
;
cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"\n nhap vao phan tu thu"<<i+1<<":";
    cin>>a[i];
}
int pos,i;
int x;//luu gia tri a[i] tranh bi ghi de khi doi cho cac phan tu;
for(i=1;i<n;i++)
{//1 3 7 6 4 2 5
    x=a[i];//x=3
    pos=i-1;//pos=0;
    //tim vi tri chen cho x
    while((pos>=0)&&(a[pos]>x))
    {
        a[pos+1]=a[pos];
        pos--;
    }
    a[pos+1]=x;//chen x vao day
}
for(i=0;i<n;i++)
{
    cout<<a[i]<<"\t";
}
    return 0;
}
