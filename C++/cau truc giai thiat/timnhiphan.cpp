#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;
int timnp(int a[],int n,int x)
{
    int left=0,right=n-1,mid;
    do
    {


    mid=a[(right+left)/2];
    if(a[mid]==x) return 1;
    else
    {
        if(a[mid]>x) left=mid+1;
        else right=mid-1;
    }

    }while(left<=right);
    return 0;
}
int main()
{
    int i,a[100],x,n;
    cout<<"\nso luong phan tu:\t ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]:\t";
        cin>>a[i];
    }
    cout<<"\n nhap x:\t";
    cin>>x;
  cout<<  timnp(a,n,x);

    return 0;
}
