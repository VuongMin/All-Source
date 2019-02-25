#include <iostream>

using namespace std;
void inport(int a[],int n)
{
    for(int i=0;i<n;i++)
    {


    cout<<"nhap vao phan tu thu "<<i+1<<":";
    cin>>a[i];
    }
}
void exportz(int a[],int n)
{

    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<"\t";
    }
}
//sap xep lua chon
void selectionsort(int a[],int n)
{ int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[min])
            min=j;
        int t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
}
//sapxep noi bot
void bublesort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for( int j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                int t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;

            }
        }
    }

}
int main()
{
    int a[100],n;
    cout<<"\n nhap vao so luong phan tu:\t";
    cin>>n;
    inport(a,n);
    cout<<"\n mang select sort:";
    selectionsort(a,n);
    exportz(a,n);

    cout<<"\n mang buble sort:";
    bublesort(a,n);
    exportz(a,n);

    return 0;
}
