#include "lop.h"

//Dinh nghia
void Input_Ngay(NGAY& x)
{
    do
    {
        cout<<"\n Nhap vao ngay :\t";
        cin>>x.Ngay;
        if(x.Ngay<=0||x.Ngay>31)
        {
            cout<<"\n Ngay Khong Hop Le!";
        }

    }while(x.Ngay<=0||x.Ngay>31);
     do
    {
        cout<<"\n Nhap vao Thang :\t";
        cin>>x.Thang;
        if(x.Thang<=0||x.Thang>12)
        {
            cout<<"\n Thang Khong Hop Le!";
        }

    }while(x.Thang<=0||x.Thang>12);
     do
    {
        cout<<"\n Nhap vao Nam:\t";
        cin>>x.Nam;
        if(x.Nam<=0)
        {
            cout<<"\n Nam Khong Hop Le!";
        }

    }while(x.Nam<=0);

}
void Out_Ngay(NGAY x)
{
   cout<<"\n Ngay "<<x.Ngay<<" Thang "<<x.Thang<<" Nam "<<x.Nam;
}
//Sinh vien
void Input_SV(SINHVIEN &sv)
{
    cout<<"\n *****INPUT SINH VIEN*******\n";
    fflush(stdin);
    cout<<"\n Nhap vao Ho ten:\t";
    getline(cin,sv.Hoten);
    fflush(stdin);
    cout<<"\n Nhap vao Ma so:\t";
    getline(cin,sv.Maso);
    cout<<"\n ***Ngay sinh***\n";
     Input_Ngay(sv.ngaysinh);
     do
     {

         cout<<"\n Nhap diem Toan:\t";
         cin>>sv.Toan;
         if(sv.Toan<0||sv.Toan>10)
         {
             cout<<"\n Toan Khong Hop le!";
         }

     }while(sv.Toan<0||sv.Toan>10);
     do
     {

         cout<<"\n Nhap diem Ly:\t";
         cin>>sv.Ly;
         if(sv.Ly<0||sv.Ly>10)
         {
             cout<<"\n Ly Khong Hop le!";
         }

     }while(sv.Ly<0||sv.Ly>10);
     do
     {

         cout<<"\n Nhap diem Hoa:\t";
         cin>>sv.Hoa;
         if(sv.Hoa<0||sv.Hoa>10)
         {
             cout<<"\n HOA Khong Hop le!";
         }

     }while(sv.Hoa<0||sv.Hoa>10);
}
double DiemTrungBinhSv(SINHVIEN sv)
{
    return (sv.Toan+sv.Ly+sv.Hoa)/3.0;
}
void Out_SV(SINHVIEN sv)
{
   cout<<"\n *********SINH VIEN****************\n";
    cout<<"\n Ho Ten:\t"<<sv.Hoten;
    cout<<"\n Ma so:\t"<<sv.Maso;
    Out_Ngay(sv.ngaysinh);
    double Dtb=DiemTrungBinhSv(sv);
    cout<<"\n Diem Trung Binh :\t"<<Dtb;
}
//LOP
void Input_Lop(LOP &lp)
{
    cout<<"\n -------------MeNu------------\n";
    cout<<"\n Keydown 1  to Stop!\n";
    cout<<"\n---------------------------------------\n";

    while(true)
    {
       char kitu=getch();
       if(kitu!='1')
       {
           SINHVIEN sv;
           Input_SV(sv);
           cout<<"Ok!";
           lp.arr.push_back(sv);//Ghi sv vao o dau!
       }
       else
       {
           break;
       }
    }
}
void Out_Lop(LOP lp)
{
    int Size=lp.arr.size();
    for(int i=0;i<Size;i++)
    {
        Out_SV(lp.arr[i]);
    }
}
//Tim diem Tb sv cao nhat
double TimDTBMac(LOP lp)
{
  double Max=DiemTrungBinhSv(lp.arr[0]);
   int Size=lp.arr.size();
   for(int i=0;i<Size;i++)
   {
       int Dtb=DiemTrungBinhSv(lp.arr[i]);
       if(Max<Dtb)
       {
           Max=Dtb;
       }
   }
   return Max;

}
void SinhVienGood(LOP lp)
{
    int Size=lp.arr.size();
    int DtbM=TimDTBMac(lp);
    for(int i=0;i<Size;i++)
    {
       int Max_tb=DiemTrungBinhSv(lp.arr[i]);
       if(Max_tb==DtbM)
       {
           Out_SV(lp.arr[i]);
       }
    }
}
int main()
{
  LOP lp;
   Input_Lop(lp);
   Out_Lop(lp);
   cout<<"\n Diem Tb Mac = "<<TimDTBMac(lp);
   cout<<"\n ****SINH VIEN XUAT SAC******\n";
   SinhVienGood(lp);
    return 0;
}
