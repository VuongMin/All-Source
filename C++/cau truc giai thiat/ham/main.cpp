#include <iostream>

using namespace std;
int gtln(int a,int b,int c)
{
    int max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    return max;
}
//uoc chung lon nhat
int ucln(int a,int b)
{
    int uc;
    if(a>b)
       {

         uc=b;
       }
        else
        {
            uc=a;

        while(a%uc!=0||b%uc!=0)
        {
            uc--;
        }

}
return uc;
}
//tim so nguyen to
void sont(int a)
{
    int dem=0;
    if(a>1)
    {
        for(int i=1;i<a;i++)
        {
            if(a%i==0)
            {
              dem++;
            }

        }

       cout<<"day la so nguyen to!" ;
    }
    else
        {
            cout<<"day khong phai la so nguyen to";
        }
}
//nhap va xuat con tro
void inport(int* ds,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\n nhap vao con tro thu "<<i+1<<":";
        cin>>ds[i];
    }

}
void exportz(int *ds,int n)
{


    for(int i=0;i<n;i++)
    {



    cout<<ds[i]<<"\t";
    }
}



int main()
{
    int a,b,c;
cout<<"\n nhap vao a,b,c:\t";
cin>>a>>b>>c;

cout<<"gia tri lon nhat:\t"<<gtln(a,b,c);
cout<<"\n ucln:\t"<<ucln(a,b);
cout<<"\n";

sont(a);
int n;
cout<<"\n nhap vao so luong phan tu con tro:\t";
cin>>n;
int *ds;
ds=new int[n];
inport(ds,n);
exportz(ds,n);




    return 0;
}
