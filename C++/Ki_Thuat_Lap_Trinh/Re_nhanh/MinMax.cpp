#include<iostream>
#include<conio.h>
#include<string>
/*
 Nhập vào 4 số nguyên a, b, c, d. In ra màn hình kết quả số lớn nhất
 , nhỏ nhất.
*/
using namespace std;
int main()
{
    vuongmin:
//    int a,b,c,d;
//    cout<<"\n nhap a:\t";
//    cin>>a;
//    cout<<"\n nhap b:\t";
//    cin>>b;
//    cout<<"\n nhap c:\t";
//    cin>>c;
//    cout<<"\n nhap d:\t";
//    cin>>d;
//    int max=a;
//    if(b>a&&b>c&&b>d)
//    {
//        max=b;
//    }
//    if(c>a&&c>>d&&c>b)
//    {
//        max=c;
//    }
//    if(d>a&&d>b&&d>c)
//    {
//        max=d;
//    }
//    cout<<"max ="<<max;
//    int min =a;
//    if(b<a&&b<c&&b<d)
//    {
//        min=b;
//    }
//    else if(c<b&&c<a&&c<d)
//    {
//        min=c;
//    }
//    else
//    {
//        min=d;
//    }
//    cout<<"\n min ="<<min;
 /*
 Nhập vào tháng & năm. Hãy cho biết tháng đó trong năm đó có bao
 nhiêu ngày.
 */
// int thang,nam;
// cout<<"\n nhap thang:\t";
// cin>>thang;
// do
// {
//
//
// if(thang<0||thang>12)
// {
//     cout<<"\n ban nhap sai so thang!";
// }
// }while(thang<0||thang>12);
// do
// {
//
//
// cout<<"\n nhap nam:\t";
// cin>>nam;
// }while(nam<0);
//    if(thang==1||thang==3||thang==5||thang==7||thang==10||thang==12)
//     {
//         cout<<"\n thang "<<thang<<"co 31 ngay";
//     }
//     else if(thang==4||thang==6||thang==8||thang==11||thang==9)
//     {
//         cout<<"\n thang "<<thang<<" co 30 ngay";
//     }
//     else
//     {
//         if((nam%4==0&&nam%100!=0)||nam%400==0)
//         {
//             cout<<"\n thang "<<thang<<"co 29 ngay";
//         }
//         else
//         {
//             cout<<"\n thang "<<thang<<"co 28 ngay";
//         }
//
//
//     }
/*
 6. Nhập vào 1 ký tự là chữ cái. Nếu nhập sai thì báo thông báo đã
  nhập sai. Nếu đúng thì đi kiểm tra nếu đó
đang là chữ cái thường thì biến nó thành chữ cái hoa, nếu nó là chữ cái
 hoa thì biến nó thành chữ cái thường.
Gợi ý: Ký tự chữ cái thường và hoa có mã ASCII cách nhau 32 đơn vị.
 Vd: ‘a’ là 97, ‘A’ là 65
*/
  char kytu;



  cout<<"\n nhap ki tu:\t";
  cin>>kytu;
  if(kytu>='a'&&kytu<='z')
  {
      char k=(char)kytu-32;
      cout<<"\n ky tu ="<<k;

  }
  if(kytu>='A'&&kytu<='Z')
  {
      char k=(char)kytu+32;
      cout<<"\n ky tu ="<<k;

  }



    char x=getch();
    cout<<"\n your have continue. if want keydown 'y'";
    cin>>x;

    if(x=='y'||x=='Y')
    {
        goto vuongmin;
    }
    return 0;
}
