#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;
typedef struct
{
    int ngay;
    int thang;
    int nam;
}ngaythang;
typedef struct
{
    char mssv[30];
    char hoten[20];
    ngaythang ngaysinh;
    int phai;
    char diachi[20];
}sinhvien;
typedef struct
{
    int tuso;
    int mauso;
}phanso;
//ham nhap sinh vien
void inportsv(sinhvien sv[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\n nhap vao mssv:\t";
    fflush(stdin);
        gets(sv[i].mssv);

        cout<<"\n nhap vao ho ten:\t";
        gets(sv[i].hoten);

        cout<<"\n nhap vao ngay sinh:\t";
        cin>>sv[i].ngaysinh.ngay;
        fflush(stdin);

        cout<<"\n nhap vao thang sinh:\t";
        cin>>sv[i].ngaysinh.thang;
        fflush(stdin);

        cout<<"\n nhap vao nam sinh:\t";
        cin>>sv[i].ngaysinh.nam;
        fflush(stdin);

        cout<<"\n gioi tinh (0:nu),(1:nam)";
        cin>>sv[i].phai;
        fflush(stdin);

        cout<<"\n nhap vao dia chi:\t";
        gets(sv[i].diachi);
    }
}
//ham xuat sv
void exportsv (sinhvien sv[],int n)
{
    for(int i=0;i<n;i++)
    {

        cout<<"\n ma so sinh vien:\t"<<sv[i].mssv;
        cout<<"\n ho ten:\t"<<sv[i].hoten;
        cout<<"\n ngay sinh:\t"<<sv[i].ngaysinh.ngay<<"-"<<sv[i].ngaysinh.thang<<"-"<<sv[i].ngaysinh.nam;
        cout<<"\n gioitinh:\t"<<sv[i].phai;
        cout<<"\n dia chi:\t"<<sv[i].diachi;
        cout<<"\n----------------------------------------\n";

    }

}
//cong 2 phan so
void sumps(phanso a,phanso b)
{


    if(a.mauso==b.mauso)
    {
        cout<<"\n tong 2 phan so cung mau :\t"<<a.tuso+b.tuso<<"/"<<a.mauso;

    }
    else
        {
            cout<<"\n tong 2 phan so khac mau:\t"<<(a.tuso*b.mauso)+(b.tuso*a.mauso)<<"/"<<a.mauso*b.mauso;
        }


}
//phep tinh 2 phan so

void tinhps(phanso a,phanso b)
{
    cout<<"\n phep nhan2 phan so:\t"<<a.tuso*b.tuso<<"/"<<a.mauso*b.mauso;
    cout<<"\n chia 2 phan sp:\t"<<a.tuso*b.mauso<<"/"<<a.mauso*b.tuso;



}
int main()

{

   sinhvien sv[10];
    int n;
    cout<<"\n nhap vao so luong sv:\t";
    cin>>n;
    inportsv(sv,n);
    cout<<"\n cac sinh vien vua nhap:\n";
    exportsv(sv,n);
    cout<<"\n----------------------------------------\n";

phanso a,b;
cout<<"\n nhap vao 2 phan so!\n";
cout<<"\n nhap vao tu so:";cin>>a.tuso;
cout<<"\n nhap vao mau so:\t";cin>>a.mauso;
cout<<"\n nhap vao tu so:\t";cin>>b.tuso;
cout<<"\n nhap vao mau so:\t";cin>>b.mauso;
cout<<"\n xuat ra phan so 1 :"<<a.tuso<<"/"<<a.mauso;
cout<<"\n xuat ra phan so 2:\t"<<b.tuso<<"/"<<b.mauso;
sumps(a,b);

tinhps(a,b);




    return 0;
}
