#include <iostream>

using namespace std;
/*
Phân số
Khai báo kiểu dữ liệu phân số (PHANSO)
Nhập/Xuất phân số
Rút gọn phân số
Tính tổng, hiệu, tích, thương hai phân số
Kiểm tra phân số tối giản
Quy đồng hai phân số
Kiểm tra phân số âm hay dương
So sánh hai phân số

*/
struct PhanSo
{
    int Tu;
    int Mau;
};
typedef struct PhanSo PHANSO;
void Input_ps(PHANSO &x)
{
    cout<<"\n Nhap vao Tu so:\t";
    cin>>x.Tu;
    cout<<"\n Nhap vao Mau so:\t";
    cin>>x.Mau;
}
void Out_ps(PHANSO x)
{
    if(x.Mau<0)
    {
        cout<<"\t"<<x.Tu*-1<<"/"<<x.Mau*-1;
    }
    else
    {
        cout<<"\t"<<x.Tu<<"/"<<x.Mau;
    }

}
//Tim Uoc Chung Lon Nhat
int UCLN(PHANSO x)
{
    if(x.Tu<0)
    {
        x.Tu*=-1;//bien ve duong
    }
    if(x.Mau<0)
    {
        x.Mau*=-1;
    }
    int Min=x.Tu<x.Mau?x.Tu:x.Mau;
    int Max=x.Tu>x.Mau?x.Tu:x.Mau;
    if(Max%Min==0)
    {
        return Min;//Dung Han
    }
    for(int i=Min; i>=1; i--)
    {
        if(Min%i==0&&Max%i==0)
        {
            return i;
        }
    }
    return 0;

}
//RutGon Phan So
PHANSO RutGon_ps(PHANSO x)
{
    int Uoc=UCLN(x);
    PHANSO New;//Tao ra 1 Kieu Phan so de co the Tra ve 1 phan so
    New.Tu=x.Tu/Uoc;
    New.Mau=x.Mau/Uoc;
    return New;
}
//Tong-Hieu-Tich-Thuong
PHANSO Tong_ps(PHANSO Fir,PHANSO Sec)
{
    if(Fir.Mau==Sec.Mau)
    {
        Fir.Tu=Fir.Tu+Sec.Tu;
        Fir.Mau=Fir.Mau;
    }
    else
    {
        Fir.Tu=Fir.Tu*Sec.Mau+Sec.Tu*Fir.Mau;
        Fir.Mau=Fir.Mau*Sec.Mau;
    }

    return Fir;

}
PHANSO Hieu_ps(PHANSO Fir,PHANSO Sec)
{
    if(Fir.Mau==Sec.Mau)
    {
        Fir.Tu=Fir.Tu-Sec.Tu;
        Fir.Mau=Fir.Mau;
    }
    else
    {
        Fir.Tu=Fir.Tu*Sec.Mau-Sec.Tu*Fir.Mau;
        Fir.Mau=Fir.Mau*Sec.Mau;
    }

    return Fir;
}
PHANSO Tich_ps(PHANSO Fir,PHANSO Sec)
{
    Fir.Tu=Fir.Tu*Sec.Tu;
    Fir.Mau=Fir.Mau*Sec.Mau;
    return Fir;
}
PHANSO Thuong_ps(PHANSO Fir,PHANSO Sec)
{
    PHANSO Nghich;
    Nghich.Tu=Sec.Mau;
    Nghich.Mau=Sec.Tu;
    return Tich_ps(Fir,Nghich);
}
//Kiem Tra so am hay duong
bool Kiem_ps(PHANSO x)
{
    if(x.Tu<0||x.Mau<0)
    {
        return false;

    }
    return true;

}
int main()
{
    PHANSO x;
    Input_ps(x);
    Out_ps(x);
    //cout<<"\n Uoc :"<<UCLN(x);
    cout<<"\n Phan so sau Toi Gian:";
    Out_ps(RutGon_ps(x));//xuat phan so ne!
    PHANSO Sec;
    Input_ps(Sec);
    Out_ps(RutGon_ps(Sec));
    cout<<"\n------------ Tong----------- ";
    Out_ps(Tong_ps(x,Sec));
    cout<<"\n ------------Hieu-------------";
    Out_ps(Hieu_ps(x,Sec));
    cout<<"\n ------------Tich--------------";
    Out_ps(Tich_ps(x,Sec));
    cout<<"\n -------------Thuong----------- ";
    Out_ps(Thuong_ps(x,Sec));
    cout<<"\n ---------Text-Phan so---------" ;
    if(Kiem_ps(x))
    {
        cout<<"\n phan so ";
        Out_ps(x);
        cout<<" Duong";
    }
    else
    {
        cout<<"\n Phan so ";
        Out_ps(x);
        cout<<" am";
    }
    if(Kiem_ps(Sec))
    {
        cout<<"\n Phan so ";
        Out_ps(Sec);
        cout<<" duong";
    }
    else
    {
        cout<<"\n Phan so ";
        Out_ps(Sec);
        cout<<" am!";
    }
    if(x.Mau==Sec.Mau)
    {
        cout<<"\n pHan so Lon Nhat ";
        int Max_tu=x.Tu>Sec.Tu?x.Tu:Sec.Tu;
        cout<<Max_tu<<"/"<<x.Mau;
    }
    else
    {
        bool check;
        double Fir=x.Tu/(float)x.Mau;
        double Sec_=Sec.Tu/(float)Sec.Mau;
        if(Fir>Sec_-2
          )
        {
            check=true;
        }
        else
        {
            check=false;
        }
        if(check==true)
        {
            cout<<"\n Phan so lON nhat:";
            Out_ps(x);
        }
        else
        {
            cout<<"\n Phan so Lon NhAT:";
            Out_ps(Sec);
        }

    }
    return 0;
}
