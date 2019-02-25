#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
//ham kiem tra string
bool kiemtra(string chuoi)
{
    int length=chuoi.length();
    for(int i=0;i<length;i++)
    {
        if(chuoi[i]>'9'||chuoi[i]=='.')
        {
            return false;
            break;
        }
    }
    return true;

}

//ham age
int  age(int tuoi)
{

    return 2018-tuoi;
}
// ham tinh Tong-Hieu-Tich Thuong
int sum(int a,int b)
{
    return a+b;
}
int branf(int a,int b)
{
    return a-b;
}
int Accomplishments(int a,int b)
{
    return a*b;
}
float division(int a,int b)
{
    return (float)a/b;
}

// ham san pham ,so luong -don gia
 string ten(string t)
 {
     return t;
 }
 int soluong(int a,int b)
 {
     return Accomplishments(a,b);
 }


 int main()
{
    int Tuoi;
   vuongmin:
     do
{
     string tuoi;
    cout<<"\n nhap Nam Sinh :\t";
    getline(cin,tuoi);
    int check=kiemtra(tuoi);
    if(check==false)
    {
        cout<<"\n ban nhap sai kieu du lieu! vui long kiem tra lai.";
          goto vuongmin;
    }
    else
    {
          Tuoi=atof((char *)tuoi.c_str());

         if(Tuoi<0)

         {
             cout<<"\n ban nhap sai tuoi!";

         }

    }
}while(Tuoi<0);



    cout<<"\n Tuoi ="<<age(Tuoi);

    int a,b;
    cout<<"\n nhap a:\t";
    cin>>a;
    cout<<"\n nhap b:\t";
    cin>>b;
    int tong=sum(a,b);
    int hieu=branf(a,b);
    int tich=Accomplishments(a,b);
    float thuong=division(a,b);
    cout<<"\n Tong ="<<tong;
    cout<<"\n Hieu ="<<hieu;
    cout<<"\n Tich ="<<tich;
    cout<<"\nThuong ="<<thuong;
    //san pham
    string Ten;
    fflush(stdin);
    cout<<"\n nhap Ten:\t";
    getline(cin,Ten);
     cout<<"\n Ten = "<<ten(Ten);
     int sl,dg;
     cout<<"\n nhap vao so luong:\t";
     cin>>sl;
     cout<<"\n nhap DON Gia:\t";
     cin>>dg;
     int so=soluong(sl,dg);
     cout<<"\n Tien ="<<so;
      float Thue=(float)so*0.1;
      cout<<"\n Thue ="<<Thue;



    return 0;
}






//#include<iostream>
//#include<string>
//#include<stdio.h>
//#include<stdlib.h>
//using namespace std;
///*NHậP NăM SINH CủA MộT NGườI.
//TíNH TUổI NGườI đó.*/
//int age(int &tuoi)
//{
//    cout<<"\n nhap vao nam sinh:\t";
//    cin>>tuoi;
//
//
//
//
//   return 2018-tuoi;
//}
///*Nhập 2 số a và b.
//Tính tổng, hiệu, tính và thương của hai số đó.*/
//void calculate(int &a,int &b)
//{
//    cout<<"\n nhap a:\t";
//    cin>>a;
//    cout<<"\n nhap b:\t";
//    cin>>b;
//    cout<<"\n Tong =\t"<<a+b;
//    cout<<"\n Hieu =\t"<<a-b;
//    cout<<"\n Tich =\t"<<a*b;
//    cout<<"\n Thuong =\t"<<(float)a/b;
//
//}
///*Nhập tên sản phẩm, số lượng và đơn giá.
//Tính tiền và thuế giá trị gia tăng phải trả, biết:
//a. tiền = số lượng * đơn giá
//b. thuế giá trị gia tăng = 10% tiền*/
//
//void product(string &sp,int &sl,int &dg)
//{
//    fflush(stdin);
//    cout<<"\n nhap  ten san pham:\t";
//    getline(cin,sp);
//
//    cout<<"\n nhap vao so luong:\t";
//    cin>>sl;
//    cout<<"\n nhap vao don gia:\t";
//    cin>>dg;
//    int tien=sl*dg;
//    double thue=(double)tien*0.1;
//    cout<<"\n Ten San Pham :\t"<<sp;
//    cout<<"\n Tien ="<<tien<<"\t Thue Gia Tang = "<< thue;
//}
///*Nhập điểm thi và hệ số 3 môn Toán, Lý, Hóa
//của một học sinh. Tính điểm trung bình của
//học sinh đó*/
// float dtb(float toan,float ly,float hoa)
// {
//     return (toan+ly+hoa)/3;
// }
// /*Nhập vào số xe của bạn (gồm tối đa 5 chữ số).
//Cho biết số xe của bạn được mấy nút?*/
//int soxe(int &so)
//{
//    cout<<"\n nhap so xe:\t";
//    cin>>so;
//    //4520
//    int a=so/1000;//4
//    int a1=so%1000;//520
//    int b=a1/100;//5
//    int b1=a1%100;//20
//    int c=b1/10;//2
//    int c1=b1%10;
//    return (a+b+c+c1)%10;
//
//
//}
////tim min max bang thuat toan ngoi 3
////vi cai ham int main ko co cin a,b nen moi co the lam duoc nhu vay
////vi cac ham tren deu nhay tham chieu trong ham het roi do!
//int max(int a,int b)
//{
//     return a>b?a:b;
//
//}
//int min(int a,int b)
//{
//     return a<b?a:b;
//}
//
//int main()
//{    string c;
//    int t=age(t),a,b;
//    float toan,ly,hoa;
//    cout<<"\n tuoi :\t"<<t;
//    cout<<"\n ------Tong -Hieu-Tich -THuong------ ";
//    calculate(a,b);
//    product(c,b,t);
//    cout<<"\n nhap  Toan:\t";
//    cin>>toan;
//    cout<<"\n nhap Ly:\t";
//    cin>>ly;
//    cout<<"\n nhap Hoa:\t";
//    cin>>hoa;
//    cout<<"\n Diem Tb =\t"<<dtb(toan,ly,hoa);
//    cout<<"\n so xe ="<<soxe(a);
//    cout<<"\n max ---- min\n";
//    cout<<" \n max ="<<max(6,9);
//    cout<<"\n min =\t"<<min(6,9);
//
//    return 0;
//}
