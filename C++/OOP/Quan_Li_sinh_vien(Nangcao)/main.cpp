#include <iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<conio.h>
using namespace std;
class Ngay
{
private:
    int ngay,thang,nam;
public:
    void Input_ngay();
    void out_ngay();
};
void Ngay::Input_ngay()
{
    do
    {
        cout<"\n Nhap Ngay:";
        cin>>ngay;
        if(ngay<0||ngay>31)
        {
            cout<<"\n Ngay Khong Hop Le!";
        }
    }
    while(ngay<0||ngay>31);

    do
    {
        cout<<"\n Nhap Thang:";
        cin>>thang;
        if(thang<0||thang>12)
        {
            cout<<"\n Thang Khong Hop LE!";
        }
    }
    while(thang<0||thang>12);

    do
    {
        cout<<"\n Nhap Nam:\t";
        cin>>nam;
        if(nam<0)
        {
            cout<<"\n Nam Khong HOp LE!";
        }
    }
    while(nam<0);
}
void Ngay::out_ngay()
{
    cout<<" Ngay "<<ngay<<" Thang "<<thang<<" Nam "<<nam;
}
class sinhvien
{
 private:
     string Maso,Hoten,Lop;
     Ngay Ngaysinh;
     int SCMND;
     double DiemChuyenNganh;
 public:
    void Input_sv();
    void Out_sv();
    double DiemCN();
    string Ten()
    {
        return Hoten;
    }


};
double sinhvien::DiemCN()
{
    return DiemChuyenNganh;
}
void sinhvien::Input_sv()
{

    fflush(stdin);
    cout<<"\n Nhap vao Ho Ten:";
    getline(cin,Hoten);
    fflush(stdin);
    cout<<"\n Nhap vao Ma so:";
    getline(cin,Maso);
    fflush(stdin);
    cout<<"\n Nhap vao Lop Hoc:";
    getline(cin,Lop);
    cout<<"\n Nhap So CMND:";
    cin>>SCMND;
    cout<<"\n------ Ngay Sinh-----\n";
    Ngaysinh.Input_ngay();
    do
    {
        cout<<"\n Nhap Diem Chuyen Nganh IT:";
        cin>>DiemChuyenNganh;
        if(DiemChuyenNganh<0||DiemChuyenNganh>10)
        {
            cout<<"\n Diem Chuyen Nganh Khong Hop LE!";
        }
    }while(DiemChuyenNganh<0||DiemChuyenNganh>10);

}
void sinhvien::Out_sv()
{
   cout<<"\n Ho Ten:"<<Hoten;
   cout<<"\n Ma so:"<<Maso;
   cout<<"\n LOP :"<<Lop;
   cout<<"\n So CMND:"<<SCMND;
   cout<<"\n Sinh Ngay:";
   Ngaysinh.out_ngay();
  cout<<"\n Diem Chuyen Nganh:\t"<<DiemChuyenNganh;
}

class Lop
{
private:
    vector<sinhvien> arr;
    vector<sinhvien> Mangnew;
public:
  void    Input_Lop();
   void  Out_Lop();
   double Max_Chuyennganh();
   void Sinhvien_Good();
};
void Lop::Input_Lop()
{
    char Kitu;
   do
   {
       cout<<"\n **********Menu***********\n";
       cout<<"\n Keydown ('0') To sTop";
       cout<<"\n------------------------------\n";
       Kitu=getch();
       if(Kitu!='0')
       {
           sinhvien x;
           x.Input_sv();
           arr.push_back(x);
           cout<<"\n OK!";
       }

   }while(Kitu!='0');
}
void Lop::Out_Lop()
{
   int Size=arr.size();
   for(int i=0;i<Size;i++)
   {
       cout<<"\n***Sinh vien "<<i+1<<"*****\n";
     arr[i].Out_sv();
   }
}
double Lop::Max_Chuyennganh()
{
    double Max=arr[0].DiemCN();
    for(int i=1;i<arr.size();i++)
    {
        double Temp=arr[i].DiemCN();
        if(Temp>Max)
        {
          Max=Temp;
        }
    }

    return Max;
}
//Ham Hoan vi O ngoai
 template<class T>
 void Hoanvi(T &a, T &b )
 {
   T Temp=a;
   a=b;
   b=Temp;
 }
void Lop::Sinhvien_Good()
{
    double Max_cn=Max_Chuyennganh();
    int Size=arr.size();
    for(int i=0;i<Size;i++)
    {
        if(Max_cn==arr.at(i).DiemCN())
        {
            Mangnew.push_back(arr[i]);
        }
    }
    //Sap xep
     int Size_Mangnew=Mangnew.size();
     if(Size_Mangnew==1)
     {
         Mangnew[0].Out_sv();
     }
     else
     {
         for(int i=0;i<Size_Mangnew-1;i++)
         {
             for(int j=i+1;j<Size_Mangnew;j++)
             {
                 if(Mangnew[i].Ten()>Mangnew[j].Ten())
                 {
                      Hoanvi<sinhvien>(Mangnew[i],Mangnew[j]);
                 }
             }
         }
         for(int i=0;i<Size_Mangnew;i++)
         {
             Mangnew[i].Out_sv();
         }
     }

}


int main()
{

Lop lp;
lp.Input_Lop();
lp.Out_Lop();
cout<<"\n***Sinh vien Uu Tu****\n";
lp.Sinhvien_Good();
    return 0;
}
#include <iostream>
#include<string>
#include<stdio.h>
#include<vector>
#include<conio.h>
using namespace std;
class Ngay
{
private:
    int ngay,thang,nam;
public:
    void Input_ngay();
    void out_ngay();
};
void Ngay::Input_ngay()
{
    do
    {
        cout<"\n Nhap Ngay:";
        cin>>ngay;
        if(ngay<0||ngay>31)
        {
            cout<<"\n Ngay Khong Hop Le!";
        }
    }
    while(ngay<0||ngay>31);

    do
    {
        cout<<"\n Nhap Thang:";
        cin>>thang;
        if(thang<0||thang>12)
        {
            cout<<"\n Thang Khong Hop LE!";
        }
    }
    while(thang<0||thang>12);

    do
    {
        cout<<"\n Nhap Nam:\t";
        cin>>nam;
        if(nam<0)
        {
            cout<<"\n Nam Khong HOp LE!";
        }
    }
    while(nam<0);
}
void Ngay::out_ngay()
{
    cout<<" Ngay "<<ngay<<" Thang "<<thang<<" Nam "<<nam;
}
class sinhvien
{
 private:
     string Maso,Hoten,Lop;
     Ngay Ngaysinh;
     int SCMND;
     double DiemChuyenNganh;
 public:
    void Input_sv();
    void Out_sv();
    double DiemCN();
    string Ten()
    {
        return Hoten;
    }


};
double sinhvien::DiemCN()
{
    return DiemChuyenNganh;
}
void sinhvien::Input_sv()
{

    fflush(stdin);
    cout<<"\n Nhap vao Ho Ten:";
    getline(cin,Hoten);
    fflush(stdin);
    cout<<"\n Nhap vao Ma so:";
    getline(cin,Maso);
    fflush(stdin);
    cout<<"\n Nhap vao Lop Hoc:";
    getline(cin,Lop);
    cout<<"\n Nhap So CMND:";
    cin>>SCMND;
    cout<<"\n------ Ngay Sinh-----\n";
    Ngaysinh.Input_ngay();
    do
    {
        cout<<"\n Nhap Diem Chuyen Nganh IT:";
        cin>>DiemChuyenNganh;
        if(DiemChuyenNganh<0||DiemChuyenNganh>10)
        {
            cout<<"\n Diem Chuyen Nganh Khong Hop LE!";
        }
    }while(DiemChuyenNganh<0||DiemChuyenNganh>10);

}
void sinhvien::Out_sv()
{
   cout<<"\n Ho Ten:"<<Hoten;
   cout<<"\n Ma so:"<<Maso;
   cout<<"\n LOP :"<<Lop;
   cout<<"\n So CMND:"<<SCMND;
   cout<<"\n Sinh Ngay:";
   Ngaysinh.out_ngay();
  cout<<"\n Diem Chuyen Nganh:\t"<<DiemChuyenNganh;
}

class Lop
{
private:
    vector<sinhvien> arr;
    vector<sinhvien> Mangnew;
public:
  void    Input_Lop();
   void  Out_Lop();
   double Max_Chuyennganh();
   void Sinhvien_Good();
};
void Lop::Input_Lop()
{
    char Kitu;
   do
   {
       cout<<"\n **********Menu***********\n";
       cout<<"\n Keydown ('0') To sTop";
       cout<<"\n------------------------------\n";
       Kitu=getch();
       if(Kitu!='0')
       {
           sinhvien x;
           x.Input_sv();
           arr.push_back(x);
           cout<<"\n OK!";
       }

   }while(Kitu!='0');
}
void Lop::Out_Lop()
{
   int Size=arr.size();
   for(int i=0;i<Size;i++)
   {
       cout<<"\n***Sinh vien "<<i+1<<"*****\n";
     arr[i].Out_sv();
   }
}
double Lop::Max_Chuyennganh()
{
    double Max=arr[0].DiemCN();
    for(int i=1;i<arr.size();i++)
    {
        double Temp=arr[i].DiemCN();
        if(Temp>Max)
        {
          Max=Temp;
        }
    }

    return Max;
}
//Ham Hoan vi O ngoai
 template<class T>
 void Hoanvi(T &a, T &b )
 {
   T Temp=a;
   a=b;
   b=Temp;
 }
void Lop::Sinhvien_Good()
{
    double Max_cn=Max_Chuyennganh();
    int Size=arr.size();
    for(int i=0;i<Size;i++)
    {
        if(Max_cn==arr.at(i).DiemCN())
        {
            Mangnew.push_back(arr[i]);
        }
    }
    //Sap xep
     int Size_Mangnew=Mangnew.size();
     if(Size_Mangnew==1)
     {
         Mangnew[0].Out_sv();
     }
     else
     {
         for(int i=0;i<Size_Mangnew-1;i++)
         {
             for(int j=i+1;j<Size_Mangnew;j++)
             {
                 if(Mangnew[i].Ten()>Mangnew[j].Ten())
                 {
                      Hoanvi<sinhvien>(Mangnew[i],Mangnew[j]);
                 }
             }
         }
         for(int i=0;i<Size_Mangnew;i++)
         {
             Mangnew[i].Out_sv();
         }
     }

}


int main()
{

Lop lp;
lp.Input_Lop();
lp.Out_Lop();
cout<<"\n***Sinh vien Uu Tu****\n";
lp.Sinhvien_Good();
    return 0;
}
