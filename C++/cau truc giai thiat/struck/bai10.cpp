#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
using namespace std;
void selectsort(int a[])
{
    for(int i=0;i<9;i++)
    {
        int min=i;//0
        for(int j=i+1;j<10;j++)//1//2

            if(a[min]<a[j])

                min=j;//min=1//12//a[2]=-11
                int t=a[i];//t=12
                a[i]=a[min];//a[0]=13
                a[min]=t;//a[1]=12


    }
}
//tim cac so nguyen to
int sont(int a[])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<=1)
        {
            return 0;
        }
        else
        {

        }
    }

}




int main()
{
    int a[]={12,13,-11,10,10,-9,8,7,6,-5};
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n mang sau khi selection sort:\t";
  selectsort(a);
  for(int i=0;i<10;i++)
  {
      cout<<a[i]<<"\t";
  }
  int mind;
  for(int i=0;i<10;i++)
  {

      if(a[i]>0)
      {
          mind=a[i];


          break;
      }
  }


  for(int k=1;k<10;k++)
  {
      if(a[k]>0&&a[k]<mind)
      {
          mind=a[k];

      }
  }
  cout<<"\n so duong nho nhat:\t"<<mind;







    return 0;
}
