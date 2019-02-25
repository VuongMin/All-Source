#include <iostream>
#define max 100
#include<conio.h>
#include<stdlib.h>
using namespace std;
void Inport(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        cout<<"\n \aNhap phan Tu ["<<i<<"]:\t";
        cin>>a[i];
    }
}
//xuat mang
void Export(int a[],int n)
{
    cout<<"\n ****Mang-sau - khi - nhap****\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
}
///Mảng có phải là mảng toàn chẵn
bool check(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            return false;
        }
    }
    return true;
}
///Mảng có phải là mảng toàn số nguyên tố
 int Ngto(int x)
 {
     if(x<2)
     {
         return 0;//tra ve so 0
     }
     else
     {
         for(int i=2;i<x;i++)
         {
             if(x%i==0)
             {
                 return 0;
             }
         }
     }
     return 1;
 }
 bool Nto(int a[],int n)
 {
     for(int i=0;i<n;i++)
     {
         if(Ngto(a[i])==0)
         {
             return false;
         }
     }
     return true;
 }
 /// vi tri nguyen to dau tien
 int ngtofirst(int a[],int n)
 {
     for(int i=0;i<n;i++)
     {
         int dautien=Ngto(a[i]);
         if(dautien==1)
            {
                return a[i];
            }
     }
  return 0;

 }
 ///tong cac so nguyen to

int SuMngto(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int tra= Ngto(a[i]);
        if(tra==1)
        {
            sum+=a[i];
        }
    }
    return sum;

}



 ///Mảng có phải là mảng tăng dần
 void asc(int a[],int n)
 {
     int min=a[0];
     for(int i=0;i<n;i++)
     {
         if(a[i]<min)
         {
             cout<<"\n Mang Khong Tang Dan.";
             return ;
         }

     }
     cout<<"\n Mang Tang Dan!";
 }

/// Có bao nhiêu số chia hết cho 4 nhưng không chia hết cho 5
int Demso(int a[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%4==0&&a[i]%5!=0)
        {
            dem++;
        }
    }
    return dem;
}
/// Vị trí cuối cùng của phần tử x trong mảng
int vitricuoi(int a[],int n)
{
    return a[n-1];
}
///Tìm số nhỏ nhất trong mảng
void nhonhat(int a[],int n)
{

    int min= a[0];

    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }

    }
    cout<<"\n Nho Nhat ="<<min;
}
///Tìm số dương nhỏ nhất trong mảng
int soduongnn(int a[],int n)
{
    int min;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)//so 0 cung la so duong nhe
        {
            min=a[i];
            break;
        }
    }
    //Tim so  duong nho nhat ne
    for(int i=0;i<n;i++)
    {
        if(a[i]<min&&a[i]>=0)
        {
            min=a[i];
        }
    }
    return min;

}

int main()
{

    vuongmin:
    int a[max];
    int n;
    do
    {
        cout<<"\n NHap vao so luong phan tu:\t";
        cin>>n;
        if(n<1)
        {
            cout<<"\n Xin KiEM TRA lai!";
        }

    }while(n<1);

    Inport(a,n);
    Export(a,n);
    cout<<"\n SO duong Nho nHAT TRONG MANG ="<<soduongnn(a,n);
    nhonhat(a,n);
    cout<<"\n Nguyen to dau tien ="<<ngtofirst(a,n);

    cout<<"\n Vi tri Cuoi ="<<vitricuoi(a,n);
//    kiem tra chan
    int x=check(a,n);
    if(x==false)
    {
        cout<<"\n Mang Khong chan!";
    }
    else
    {
        cout<<"\n Mang chan!";
    }
    //kiem tra nguyen to
    int Ngtoz=Nto(a,n);
    if(Ngtoz==false)
    {
        cout<<"\n Mang Khog Nguyen To!";
    }
    else
        cout<<"\n Mang Nguyen To!";
        ///mang tang dan
        asc(a,n);
        //dem so chia het cho 4 khong chia het cho 5

        cout<<"\n CHIA Het cho 4 - Khong chia het 5 ="<<Demso(a,n);
        int tongngtoz=SuMngto(a,n);
        cout<<"\n Tong nguyen To="<<tongngtoz;
    cout<<"\n Tiep tuc 'y'";
    char t=getch();
    if(t=='Y'||t=='y')
    {
        system("cls");
        system("color 2");
        goto vuongmin;

    }

    return 0;
}
