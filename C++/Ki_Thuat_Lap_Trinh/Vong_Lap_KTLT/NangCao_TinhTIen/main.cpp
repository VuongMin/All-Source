#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <math.h>
#include<iostream>
using namespace std;
/*
inline bool IsPressed(int presskey)
{
    return GetAsyncKeyState(presskey);
}
int main()
{
	system("color C");
    int bienphu = 0;
    char n;
    printf("\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n");
    printf("\n00:00:00");
    scanf("%c",&n);
    if (n == '\n')
    {
        system("cls");
        printf("\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n");
        for (int gio = 0; gio <= 24; gio++)
        {
            for (int phut = 0; phut <= 59; phut++)
            {
                if (phut >= 1)
                    printf("\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n");
                for (int giay = 0; giay <= 59; giay++)
                {
                    if (IsPressed(VK_SPACE))
                        bienphu++;
                    if (bienphu%2==1)
                        system("pause");
                    if (giay == 0)
                    {
                        printf("\n");
                    }
                    printf("%02d:%02d:%02d",gio,phut,giay);
                    Sleep(1000);
                    system("cls");
                    printf("\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n");
                    printf("\n");
                }
                system("cls");
            }
        }
    }
    getch();
    return 0;
}
    */
    /// Bai Tinh Tien
    /*
      . Hệ thống tiền Việt Nam có các mệnh giá sau:
500đ
1000đ
2000đ
5000đ
10000đ
20000đ
50000đ
100000đ
200000đ
500000đ
Người mua hàng phải trả tiền cho sản phẩm mà họ đã mua.
 Hãy nhập vào giá tiền của món đồ và tiền khách
hàng trả, viết chương trình hỗ trợ nhân viên cửa hàng thối tiền lại cho khách hàng sao cho số tờ tiền phải
thối lại là ít nhất.
    */
 /*
 Bang  CUu chuong
 */
//int main()
//{
//
//
////for(int i=0;i<=9;i++)
////{
////
////    for(int j=1;j<=10;j++)
////    {
////        int x=i*j;
////        cout<<i<<"*"<<j<<" = "<<x<<endl;
////    }
////    cout<<"\n";
////}
//return 0;
//}
 /// Bai Tinh Tien
    /*
      . Hệ thống tiền Việt Nam có các mệnh giá sau:
500đ
1000đ
2000đ
5000đ
10000đ
20000đ
50000đ
100000đ
200000đ
500000đ
Người mua hàng phải trả tiền cho sản phẩm mà họ đã mua.
 Hãy nhập vào giá tiền của món đồ và tiền khách
hàng trả, viết chương trình hỗ trợ nhân viên cửa hàng thối tiền lại cho khách hàng sao cho số tờ tiền phải
thối lại là ít nhất.
    */
    void dem(int x)

    int main()
    {
        int tien,tientra,tienconlai;
        int dem1=0,dem2=0,dem3=0,dem4=0,dem5=0,dem6=0,dem7=0,dem8=0,dem9=0;
        cout<<"\n nhap tien :\t";
        cin>>tien;
        cout<<"\n nhap tien tra:\t";
        cin>>tientra;
        tienconlai=tien-tientra;
        // 600k -25k=575k



                 while(tienconlai>=500000)
                 {
                    tienconlai-=500000;

                    dem1++;
                 }
                 cout<<"\n "<<dem1<<"To 500k";

                 while(tienconlai>=200000)
                 {
                    tienconlai-=200000;

                    dem2++;
                 }
                 cout<<"\n "<<dem2<<"To 200k";
                 while(tienconlai>=100000)
                 {
                    tienconlai-=100000;

                    dem3++;
                 }
                 cout<<"\n "<<dem3<<"To 100k";
                 while(tienconlai>=50000)
                 {
                    tienconlai-=50000;

                    dem4++;
                 }
                 cout<<"\n "<<dem4<<"To 50k";
                 while(tienconlai>=20000)
                 {
                    tienconlai-=20000;

                    dem5++;
                 }
                 cout<<"\n "<<dem5<<"To 20k";
                 while(tienconlai>=10000)
                 {
                    tienconlai-=10000;

                    dem6++;
                 }
                 cout<<"\n "<<dem6<<"To 10k";
                 while(tienconlai>=5000)
                 {
                    tienconlai-=5000;

                    dem7++;
                 }
                 cout<<"\n "<<dem7<<"To 50k";
                 while(tienconlai>=20000)
                 {
                    tienconlai-=20000;

                    dem8++;
                 }
                 cout<<"\n "<<dem8<<"To 2k";
                 while(tienconlai>=1000)
                 {
                    tienconlai-=1000;

                    dem9++;
                 }
                 cout<<"\n "<<dem9<<"To 1k";










        return 0;
    }
