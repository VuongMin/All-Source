
#include "ngay.h"
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

