#include<iostream>
#include<vector>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
/*Bài tập: Viết chương trình quản lý danh sách các sinh viên có trong lớp học biết
thông tin mỗi sinh viên gồm có: Mã số, họ tên, ngày sinh, điểm toán, lý, hóa.
 Tính điểm trung bình và xuất thông tin sinh viên có điểm trung bình cao nhất lớp.
*/
struct ngay
{
    int ngay,thang,nam;
};
typedef struct ngay NGAY;


void nhapngaysinh(NGAY &ng)
{
     do
        {
         cout<<"\n nhap vao ngay:\t";
         cin>>ng.ngay;
        }while(ng.ngay<=0||ng.ngay>31);
        do
            {
         cout<<"\n nhap vao thang:\t";
         cin>>ng.thang;
            }while(ng.thang<=0||ng.thang>12);
            do
                {
         cout<<"\n nhap nam:\t";
         cin>>ng.nam;
                }while(ng.nam<=0);


}
//xuat ngay sinh
void xuatngaysinh(NGAY ng)
{
    cout<<"\n ******sinh ngay******\n";
    cout<<"\n ngay:\t"<<ng.ngay;
    cout<<"\n thang:\t"<<ng.thang;
    cout<<"\n nam:\t"<<ng.nam;

}


struct sinhvien
{
    string maso,hoten;
    NGAY ngaysinh;
    float toan,ly,hoa;
};
typedef struct sinhvien SINHVIEN;


void nhapsinhvien(SINHVIEN &sv)
{
    fflush(stdin);
    cout<<"\n nhap vao  ho ten:\t";
    getline(cin,sv.hoten);
    fflush(stdin);
    cout<<"\n nhap vao ma so:\t";
    getline(cin,sv.maso);
    do
        {

    cout<<"\n nhap vao diem toan:\t";
    cin>>sv.toan;
    cout<<"\n nhap vao diem hoa:\t";
    cin>>sv.hoa;
    cout<<"\n nhap vao diem ly:\t";
    cin>>sv.ly;
    if((sv.toan||sv.ly||sv.hoa)<0||(sv.hoa||sv.ly||sv.toan)>10)
    {
        cout<<"\n *diem 3 mon phai >0&&<=10*.xin kiem tra lai!";
    }
        }while((sv.toan||sv.ly||sv.hoa)<0||(sv.hoa||sv.ly||sv.toan)>10);

    nhapngaysinh(sv.ngaysinh);

}
float tinhdiemtb(SINHVIEN sv)
{
    return (sv.ly+sv.hoa+sv.toan)/3;
}


//xuat 1 sinh vien
void xuatsinhvien(SINHVIEN sv)
{
    cout<<"\n ho ten:\t"<<sv.hoten;
    cout<<"\n ma so:\t"<<sv.maso;
    cout<<"\n diem toan:\t"<<sv.toan;
    cout<<"\n diem hoa:\t"<<sv.hoa;
    cout<<"\n diem ly:\t"<<sv.ly;
    xuatngaysinh(sv.ngaysinh);
    cout<<"\n diem trung binh:\t"<<tinhdiemtb(sv);
}
//LOP HOC
struct lophoc
{
    vector<SINHVIEN> arr;
};
typedef struct lophoc LOPHOC;



void nhaplophoc(LOPHOC &lh)
{
    vuongmin:
    int luachon;
    cout<<"\n-----------menu----------\n";
    cout<<" \n chon 1 ->continue!";
    cout<<"\n chon phim bat ki de break";
    cout<<"\n nhap vao lua chon:\t";
    cin>>luachon;
     while(luachon==1)
     {
         SINHVIEN sv;
         // phai cho no nhap 1 sinh vien truoc
         nhapsinhvien(sv);
         //roi moi them sau no
         lh.arr.push_back(sv);
         goto vuongmin;
     }
}
//tim diem trung binh lon nhat
float tbmax(LOPHOC lh)
{
    float max=tinhdiemtb(lh.arr.at(0));
    for(int i=1;i<lh.arr.size();i++)
    {

        if(max<tinhdiemtb(lh.arr[i]))
        {
            max=tinhdiemtb(lh.arr[i]);
        }

    }
    return max;
}
// tim cach diem trung binh lon nhat  bang nhau
void timmaxtb(LOPHOC lh)
{
   float dtbmax=tbmax(lh);
   int size=lh.arr.size();
   for(int i=0;i<size;i++)
   {
        float dtb=tinhdiemtb(lh.arr[i]);
       if(dtbmax==dtb)

       {
        xuatsinhvien(lh.arr[i]);
       }

   }


}
//xuat lop hoc
void xuatlophoc(LOPHOC lh)
{
    for(int i=0;i<lh.arr.size();i++)
    {
        xuatsinhvien(lh.arr[i]);
        cout<<"\n---------------------------------------------\n";
    }
}

int main()
{
LOPHOC lh;
nhaplophoc(lh);
xuatlophoc(lh);
cout<<"\n cac sinh vien co diem trung binh lon nhat!****\n";
timmaxtb(lh);

    system("pause");
    return 0;
}
