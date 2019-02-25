//
//#include<iostream>
//#include<string>
//#include<stdio.h>
//using namespace std;
///*nhap vao hoc sinh .thong tin bao gom: ngay sinh, ho ten ,ma so,diem toan ,ly. tinh diem trung binh
// va xuat ra sinh vien do!*/
// //Qui tac: tao lop nho trc! moi goi dc lop do!
// //tao class ngay sinh
//  class ngaysinh
//  {
//  private:
//    int ngay,thang,nam;
//  public:
//     void nhapngay()
//    {
//        cout<<"\n nhap vao ngay:\t";
//        cin>>ngay;
//        cout<<"\n nhap vao thang:\t";
//        cin>>thang;
//        cout<<"\n nhap vao nam:\t";
//        cin>>nam;
//    }
//    void xuatngay()
//    {
//        cout<<"\n *******ngay sinh*******\n";
//        cout<<"\n ngay:\t"<<ngay;
//        cout<<"\n thang:\t"<<thang;
//        cout<<"\n nam:\t"<<nam;
//    }
//  };
//
//
//  //tao class sinhvien
//
//  class sinhvien
//  {
//  private:
//    string hote,maso;
//    float toan,ly;
//    //khai bao bien sinh ngay co kieu du lieu ngaysinh
//    ngaysinh sinhngay;
//
//    //nhap cac phuong thuc
//  public:
//
//      void nhap()//khong can truyen tham so vi no da la trong lop  class sinhvien
//      {
//
//          fflush(stdin);
//
//          cout<<"\n nhap vao ho ten:\t";
//          getline(cin,this->hote);//cach1
//          fflush(stdin);
//          cout<<"\n nhap vao ma so:\t";
//          getline(cin,maso);//cach 2
//          cout<<"\n nhap vao diem toan:\t";
//          cin>>toan;
//          cout<<"\n nhap  vao diem ly:\t";
//          cin>>this->ly;
//          //viet phuong thuc nhap ngay o day:
//          sinhngay.nhapngay();
//
//
//
//
//      }
//      float tinhtb()
//      {
//          return (toan+ly)/2;
//      }
//      void xuat()
//      {
//          cout<<"\n ho ten:\t"<<hote;
//          cout<<"\n ma so:\t"<<maso;
//          cout<<"\n diem toan:\t"<<toan;
//          cout<<"\n diem ly:\t"<<ly;
//          cout<<"\n diem trung binh:\t"<<tinhtb();
//          sinhngay.xuatngay();
//      }
//
//  };
//
//int main()
//{
//    sinhvien sv;
//    sv.nhap();
//    sv.xuat();
//    return 0;
//}



/* new----------------new---------------new */
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
//test thu tuc ham
void kiemtraz(int x)
{
    if(x<0||x>12)
    {
        cout<<"\n ban nhap sai roi do!";
    }
}
class date
{
private:
    //thuoc tinh
    int ngay,thang,nam;
public:
    //phuong thuc ham
    void nhapdate();
    void xuatdate();
    void kiemtra();

};
void date::nhapdate()
{
    cout<<"\n ---ngay sinh---";
    //thu tao 1 cai phuong thuc kiem tra ngay trong lop de test thu
   do{
    cout<<"\n nhap vao ngay sinh:\t";
    cin>>ngay;
    kiemtra();
   }while(ngay<0||ngay>31);

   //kiem tra thang bang thu tuc ham  thuong dung ne!
   do
   {


    cout<<"\n nhap vao thang sinh:\t";
    cin>>thang;
    kiemtraz(thang);
   }while(thang<0||thang>12);
    cout<<"\n nhap vao nam :\t";
    cin>>nam;
}

void date::xuatdate()
{
    cout<<"\n ngay "<<ngay <<" thang "<<thang<<" nam "<<nam;
}
//test vi o day la dang trong lop date nen dieu kien ngay thi no se tu hieu
void date::kiemtra()
{
    if(ngay<0||ngay>31)
    {
        cout<<"\n ban nhap sai!vui long kiem tra lai.";
    }

}

//class hoc sinh
class hocsinh
{
 private:
     string maso,hoten;
     float toan,van;
     //truyen vao lop date de co the nhap va xuat ngay ra ok!
     date ngaysinh;
 public:
    void nhaphocsinh();
    void xuathocsinh();
    float tinhdiemtrungbinh();
};
void hocsinh::nhaphocsinh()
{
    //truoc moi chuoi co lenh xoa phim enter
    fflush(stdin);
    cout<<"\n nhap vao ho ten:\t";
    getline(cin,hoten);
    fflush(stdin);
    cout<<"\n nhap vao ma so:\t";
    getline(cin,maso);
    cout<<"\n nhap vao diem toan:\t";
    cin>>toan;
    cout<<"\n nhap vao diem van:\t";
    cin>>van;
    ngaysinh.nhapdate();

}
void hocsinh::xuathocsinh()
{
    cout<<"\n ------Hoc Sinh------";
    cout<<"\n ho ten:\t"<<hoten;
    cout<<"\n ma so:\t"<<maso;
    cout<<"\n diem toan:\t"<<toan;
    cout<<"\n diem van:\t"<<van;
    ngaysinh.xuatdate();
    //cout<<"\n diem trung binh:\t"<<hocsinh::tinhdiemtrungbinh();
    //cach 2: cout<<"\n diem trug binh:\t"<<tinhdiemtrungbinh();
}
float hocsinh::tinhdiemtrungbinh()
{
    return (toan+van)/2;
}



int main()
{
   hocsinh hs;
   hs.nhaphocsinh();
   //xuat cach khac ne!
   float dtb=hs.tinhdiemtrungbinh();

   hs.xuathocsinh();
      cout<<"\n diem trung binh:\t"<<dtb;

    return 0;
}







