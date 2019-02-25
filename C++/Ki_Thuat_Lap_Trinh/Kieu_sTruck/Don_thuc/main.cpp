#include <iostream>
#include<math.h>
using namespace std;
/*
Đơn thức
Khai báo kiểu dữ liệu đơn thức (DONTHUC)
Nhập/Xuất đơn thức
Tính tích, thương hai đơn thức
Tính đạo hàm cấp 1 của đơn thức
Tính đạo hàm cấp k của đơn thức
Tính giá trị đơn thức tại x = x0

*/
struct donthuc
{
    int heso;
    int somu;
};
typedef struct donthuc DonThuc;
void Input(DonThuc &x)//THAY DOI RAC ->so
{
    cout<<"\n Nhap vao He so:\t";
    cin>>x.heso;
    cout<<"\n Nhap vao so Mu:\t";
    cin>>x.somu;
}
void Out(DonThuc x)
{
    cout<<"\t"<<x.heso<<"X^"<<x.somu;
}
//Tich 2 don thuc
DonThuc Tich(DonThuc Fir,DonThuc Sec)
{
    Fir.heso=Fir.heso*Sec.heso;
    Fir.somu=Fir.somu+Sec.somu;
    return Fir;
}
//Tinh dao Ham cap 1
DonThuc Dao_Ham(DonThuc x)
{
    DonThuc New;//Tao moi va gan
    New.heso=x.heso*x.somu;
    New.somu=x.somu-1;
    return New;
}
//Dao hAM CAP n
DonThuc Dao_Ham_n(DonThuc x,int &k)
{
    do
    {

        cout<<"\n Nhap vao dao ham cap :\t";
        cin>>k;
        if(k<=0)
        {
            cout<<"\n Dao Ham Thu "<<k<<" Khong Hop le!";
        }
    }
    while(k<=0);
     //DonThuc New;//Tao moi va gan
    for(int i=1; i<=k; i++)
    {

       // New.heso*=x.heso*x.somu;
        //New.somu-=x.somu-1;
        x.heso*=x.somu;
        x.somu-=1;
    }
 return x;
}
int main()
{
    DonThuc x;
    Input(x);
    Out(x);
    DonThuc Sec;
    Input(Sec);
    Out(Sec);
    cout<<"\n ---------------Tich---------------\n";
    Out(Tich(x,Sec));
    cout<<"\nDao Ham Cap 1 cua ";
    Out(x);
    cout<<" = ";
    Out(Dao_Ham(x));
    cout<<"\nDao Ham Cap 1 cua ";
    Out(Sec);
    cout<<" = ";
    Out(Dao_Ham(Sec));
    int k=0;
    cout<<"\n Dao Ham ";
    Out(x);
    Out(Dao_Ham_n(x,k));
    int x0=0;
    cout<<"\n Nhap vao X0:\t";
    cin>>x0;
    cout<<"\n Gia TRi Bieu THUC ";
    Out(x);
    cout<<" = "<<x.heso*pow(x0,(float)x.somu);



    return 0;
}
