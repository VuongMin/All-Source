#include <iostream>
#include<limits>
using namespace std;
/*
Mảng phân số
Nhập/Xuất n phân số
Rút gọn mọi phân số
Đếm số lượng phân số âm/dương trong mảng
Tìm phân số dương đầu tiên trong mảng
Tìm phân số nhỏ nhất/lớn nhất trong mảng
Sắp xếp mảng tăng dần/giảm dần
*/
struct phanso
{
    int Tu;
    int Mau;
};
typedef struct phanso PhanSo;
void Input(PhanSo &x)
{
   cout<<"\n Nhap vao Tu so:\t";
   cin>>x.Tu;
   cout<<"\n Nhap vao Mau so :\t";
   cin>>x.Mau;
}
void Out(PhanSo x)
{
    if(x.Mau<0)
    {
        cout<<"\t"<<x.Tu*-1<<"/"<<x.Mau*-1;
    }
    else
    {
        cout<<"\t"<<x.Tu<<"/"<<x.Mau;
    }
}
//Tim Uoc Chung Lon Nhat
int UCLN(PhanSo x)
{
    if(x.Tu<0)
    {
        x.Tu*=-1;//bien ve duong
    }
    if(x.Mau<0)
    {
        x.Mau*=-1;
    }
    int Min=x.Tu<x.Mau?x.Tu:x.Mau;
    int Max=x.Tu>x.Mau?x.Tu:x.Mau;
    if(Max%Min==0)
    {
        return Min;//Dung Han
    }
    for(int i=Min; i>=1; i--)
    {
        if(Min%i==0&&Max%i==0)
        {
            return i;
        }
    }
    return 0;

}
//RutGon Phan So
PhanSo RutGon_ps(PhanSo x)
{
    int Uoc=UCLN(x);
    PhanSo New;//Tao ra 1 Kieu Phan so de co the Tra ve 1 phan so
    New.Tu=x.Tu/Uoc;
    New.Mau=x.Mau/Uoc;
    return New;
}
bool Kiem_ps(PhanSo x)
{
    if(x.Tu<0&&x.Mau<0)
    {
        return true;
    }
    if(x.Tu<0||x.Mau<0)
    {
        return false;

    }
    return true;

}
void Count_ps(PhanSo x[],int n)
{
    int count_duong=0;
    int count_am=0;
    for(int i=0;i<n;i++)
    {
        if(Kiem_ps(x[i]))
        {
            count_duong++;
        }
        else
        {
            count_am++;
        }
    }
    cout<<"\n so Luong Am = "<<count_am;
    cout<<"\n So Luong Duong = "<<count_duong;

}
//Tim Phan so duong dau tien
int Tim_duong_ps(PhanSo x[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(Kiem_ps(x[i])==true)
        {
          return i;// TRA VE VI TRI DE XUAT TAI CAI I DO LA OK
        }
    }
    return -1;

}
//Tim Phan so Nho Nhat Lon NhAT tRONG mANG
double Tinh_ps(PhanSo x)
{
    return x.Tu/(float)x.Mau;
}
int Tim_Ps_nho(PhanSo x[],int n)
{
    double Min=INT_MAX;//
    int Vitri=0;
    for(int i=0;i<n;i++)
    {
        double Tinh=Tinh_ps(x[i]);
        if(Tinh<Min)
        {
            Min=Tinh;
            Vitri=i;
        }
    }
    return Vitri;

}
int Tim_Ps_Lon(PhanSo x[],int n)
{
    double Maxz=INT_MIN;//
    int Vitri=0;
    for(int i=0;i<n;i++)
    {
        double Tinh=Tinh_ps(x[i]);
        if(Tinh<Maxz)
        {
            Maxz=Tinh;
            Vitri=i;
        }
    }
    return Vitri;

}
//Sap xep
void Sort_ps(PhanSo x[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            double Truoc=Tinh_ps(x[i]);
            double Sau=Tinh_ps(x[j]);
            if(Truoc>Sau)
            {
                PhanSo Temp=x[i];
                x[i]=x[j];
                x[j]=Temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        Out(x[i]);
    }
}

int main()
{
    PhanSo x[100]={};
    int n=0;
    do
    {
        cout<<"\n Nhap vao so Luong PhAN so:\t";
        cin>>n;
        if(n<=0)
        {
            cout<<"\n KhoNg Hop Le!";
        }

    }while(n<=0);
    for(int i=0;i<n;i++)
    {
        Input(x[i]);
        Out(x[i]);
        cout<<"\nRut Gon:";
        Out(RutGon_ps(x[i]));
    }
     Count_ps(x,n);

     int vitridatim=Tim_duong_ps(x,n);
     if(vitridatim!=-1)
     {
           cout<<"\n Phan so duong Dau tien :";
           Out(x[vitridatim]);
     }
     else
     {
         cout<<"\n Khong PhAn so Duong!";
     }
     int Nho_ps=Tim_Ps_nho(x,n);
         cout<<"\n Phan so Nho Nhat:";
         Out(x[Nho_ps]);
          cout<<"\n Phan so Lon Nhat:";
          Out(x[Tim_Ps_Lon(x,n)]);
          cout<<"\n ------------------Sap Xep Tang--------------\n";
          Sort_ps(x,n);

    return 0;
}
