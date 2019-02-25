#include <iostream>
#include<math.h>
#define luongcb 65000
#define heso1 1.92
#define heso2 2.34
#define heso3 3
#define heso4 4.5

using namespace std;
/*
3. Viết chương trình nhập vào 1 số có 2 chữ số, in ra cách đọc của số
này.
Vd: 12 => Muoi Hai
*/
void read(int x)
{
    int nguyen=x/10;
    int du    =x%10;
    if(nguyen==1)
    {
        cout<<"\n muoi";
    }
    if(nguyen==2)
    {
        cout<<"\n hai muoi";
    }
    if(nguyen ==3)
    {
        cout<<"\n ba muoi";
    }
    if(nguyen==4)
    {
        cout<<"\n bon muoi";
    }
    if(nguyen==5)
    {
        cout<<"\n nam muoi ";
    }
    if(nguyen==6)
    {
        cout<<"\n sau muoi ";
    }
    if(nguyen==7)
    {
        cout<<"\n bay muoi ";
    }
    if(nguyen==8)
    {
        cout<<"\n tam muoi ";
    }
    if(nguyen==9)
    {
        cout<<"\n chin muoi ";
    }

    if(du==1)
    {
        cout<<" mot";
    }
    if(du==2)
    {
        cout<<" hai";
    }
        if(du==3)
    {
        cout<<" ba";
    }
        if(du==4)
    {
        cout<<" bon";
    }
        if(du==5)
    {
        cout<<" nam";
    }
        if(du==6)
    {
        cout<<" sau";
    }
        if(du==7)
    {
        cout<<" bay";
    }
        if(du==8)
    {
        cout<<" tam";
    }
        if(du==9)
    {
        cout<<" chin";
    }
    // vv...
    /* su dung Switch*/
//    switch(nguyen)
//    {
//    case 1:
//        {
//            switch(du)
//            {
//            case 0: cout<<"\n day la so muoi";break;
//            case 1: cout<<"\n day la so muoi mot";break;
//            case 2: cout<<"\n day la so muoi hai";break;
//            }
//        }
//        break;
//    case 2:
//        {
//             switch(du)
//            {
//            case 0: cout<<"\n day la so hai muoi";break;
//            case 1: cout<<"\n day la so hai muoi mot";break;
//            case 2: cout<<"\n day la so hai muoi hai";break;
//            }
//
//        }
//        break;
//
//    case 3:
//        {
//            switch(du)
//            {
//            case 0: cout<<"\n day la so ba muoi";break;
//            case 1: cout<<"\n day la so ba muoi mot";break;
//            case 2: cout<<"\n day la so ba muoi hai";break;
//            }
//        }
//        break;
//    case 4:
//        {
//             switch(du)
//            {
//            case 0: cout<<"\n day la so bon muoi";break;
//            case 1: cout<<"\n day la so bon muoi mot";break;
//            case 2: cout<<"\n day la so bon  muoi hai";break;
//            }
//
//        }
//        break;
//
//
//
//
//    }





}
/*
5. Viết chương trình tính lương của nhân viên dựa theo thâm niên công tác
 (TNCT) như sau:
Lương = hệ số * lương căn bản, trong đó lương căn bản là 650000 đồng.
• Nếu TNCT < 12 tháng: hệ số = 1.92
• Nếu 12 <= TNCT < 36 tháng: hệ số = 2.34
• Nếu 36 <= TNCT < 60 tháng: hệ số = 3
• Nếu TNCT >= 60 tháng: hệ số = 4.5
*/
double  TNCT(int thang)
{
    double luong;
    if(thang <12)
    {
      luong=luongcb*heso1;
    }
    else if(thang==12||thang<36)
    {
        luong=luongcb*heso2;
    }
    else if(thang==36||thang<60)
    {
        luong=luongcb*heso3;
    }
    else
    {
        luong=luongcb*heso4;
    }
    return luong;

}

int main()
{
    int lg,x;
    do
    {



cout<<"\n nhap vao so nguyen co 2 chu so:\t";
cin>>x;
//day la cach lay ra  bao nhieu chu so ->log10(1000)=3 ->phai cong them 1 de dung
 lg=log10(x)+1;
if(lg!=2)
{
    cout<<"\n ban nhap sai so ^^";

}
    }while(lg!=2);
    read(x);
    //Bai 5 ne
    int thang;
 cout<<"\n nhap vao so thang :\t";
 cin>>thang;

    cout<<"\n Luong = "<<TNCT(thang);
    return 0;
}
