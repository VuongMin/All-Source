#include <iostream>
using namespace std;
void Input(double *&a,int &n)//Doi voi cap phat Ngoai Ham MAIN();
{
       do
    {
        cout<<"\n Nhap vao n:\t";
        cin>>n;
        if(n<=0)
        {
            cout<<"\n N khong hop le!";
        }

    }while(n<=0);
    //Cap phat
      a=new double[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\n Nhap vao a["<<i<<"]:\t";
        cin>>a[i];//THeo c++ thi No se nhan vao gia tri!! con C thi nhan dia chi
    }
}
void Export(double *a,int n)
{

    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }
}
//Tim x
int Tim_x(double *a,int n,double &x)
{
    cout<<"\n Nhap vao x can Tim:\t";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(x==*(a+i))//Gia tri = gia tri
        {
            return 1;
        }
    }
    return 0;
}
//Dem va tinh tong cac phan tu thoa man yeu cau
int Count(double *a,int n,double x)
{
    int dem=0;
    for(int  i=0;i<n;i++)
    {
        if(*(a+i)==x)
        {
            dem++;
        }
    }
    return dem;
}
//Sap xep tang
void Sort_Tang(double *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+i)>*(a+j))
            {
                float Temp=a[i];
                a[i]=a[j];
                a[j]=Temp;

            }
        }
    }
    Export(a,n);
}
int main()
{
    double *a=NULL;//Khai bao con tro kieu double
    int n=0;
//    do
//    {
//        cout<<"\n Nhap vao n:\t";
//        cin>>n;
//        if(n<=0)
//        {
//            cout<<"\n N khong hop le!";
//        }
//
//    }while(n<=0);
 ///Doi voi cap phat O trong Ham Main()!
//    //Cap phat
//    a=new double[n];
   // cout<<"\n size of 1 (double):\t"<<sizeof(a)<<endl;
   //cout<<"\n Size of N (double):\t "<<sizeof(a)*n<<endl;
    Input(a,n);
    Export(a,n);
    double x=0;

    if(Tim_x(a,n,x)==1)
    {
         int xuathien=Count(a,n,x);
         cout<<"\n x co ton Tai Trong Mang!";
        cout<<"\n So lan xuat hien = "<<xuathien;
        cout<<"\n TONG cua so "<<x<<" = "<<x*xuathien;
    }
    else
    {
     cout<<"\n X khong Ton Tai Trong Mang!";
    }
    cout<<"\n Sap xep tang dan\n";
    Sort_Tang(a,n);
    return 0;
}
