#include <iostream>
#define DONG 50
#define COT 100
using namespace std;
void Input(int a[][COT],int dong,int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            cout<<"\n Nhap vao a["<<i<<"]["<<j<<"]:\t";
            cin>>a[i][j];
        }
    }
}
void Export(int a[][COT],int dong,int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int Timx(int a[][COT],int dong,int cot,int x)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            if(a[i][j]==x)
            {
                cout<<"\n X can tim a["<<i<<"]["<<j<<"]";
                return 1;
            }
        }
    }
    return 0;
}
int nguyenTo(int n)
{

    if(n<2)
    {
        return 0;
    }
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void Mang_Tinh_chat(int a[][COT],int dong,int cot)
{

    int Dem_am=0;
    int Dem_nguyenTo=0;
    int Dem_duong=0;
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            if(nguyenTo(a[i][j])==1)
            {
                Dem_nguyenTo++;
            }
            if(a[i][j]<0)
            {
                Dem_am++;
            }
            else
            {
                Dem_duong++;
            }

        }
    }
    if(Dem_nguyenTo==dong*cot)
    {
        cout<<"\n Mang-Nguyen-To!";

    }
    if(Dem_am==dong*cot)
    {
        cout<<"\n Mang-am!";
    }
    else

    {
        cout<<"\n MANG-DUONG-";
    }



}
//Tinh-Tong-Dong
int Tong_dong(int a[][COT],int dong,int &k,int cot)
{
    do
    {
        cout<<"\n Nhap vao vi tri  dong can tinh:\t";
        cin>>k;
        if(k<=0||k>dong)
        {
            cout<<"\n Khong Ton Tai DOng !";
        }

    }while(k<=0||k>dong);
    int Tong=0;
    for(int j=0;j<cot;j++)
    {
        Tong+=a[k-1][j];//Tai vi De Thuan Tien cho nguoi Dung Nhap Tu Ban phim Cai so dong
        //Vi nguoi Dung dau biet dong Bat dau Tu 0 Dau!
    }
    return Tong;

}
//Tinh -cot
int Tinh_cot(int a[][COT],int dong,int cot,int &C)
{
    //Co Cot De su dung cho dieu Kien Thoi!
    do
    {
        cout<<"\n Nhap vao cot can Tinh:\t";
        cin>>C;
        if(C<=0||C>cot)
        {
            cout<<"\n Cot Khong Ton Tai!";
        }

    }while(C<=0||C>cot);
    int Tong=0;
    for(int i=0;i<dong;i++)
    {
        Tong+=a[i][C-1];
    }
    return Tong;
}
//Tong Duong Cheo Chinh
int Tinh_DuongCheo(int a[][COT],int dong,int cot)
{
    int Tong=0;
    for(int i=0;i<cot;i++)
    {
        Tong+=a[i][i];
    }
    return Tong;
}
//Tong-Nua-tren-duong-Cheo
int TONG_NUA_TREN(int a[][COT],int dong,int cot)
{
    int Tong=0;
    for(int i=0;i<dong;i++)
    {
        for(int j=i;j<cot;j++)
        {
            Tong+=a[i][j];
        }
    }
    return Tong;
}
//Tong -Toan-Ma-tran
int Tong_toan_MT(int a[][COT],int dong,int cot)
{
    int TOng=0;
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            TOng+=a[i][j];
        }
    }
    return TOng;
}
//Tinh-Nua-Duong-Cheo-Chinh
int Nua_duong_cheo_Duoi(int a[][COT],int dong,int cot)
{
    int Tong=0;
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<=i;j++)
        {
            Tong+=a[i][j];

        }
    }
    return Tong;
}
//Max-min
void min_max(int a[][COT],int dong,int cot)
{
    int Min,Max;
    Min=Max=a[0][0];
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            Max=a[i][j]>Max?a[i][j]:Max;
            Min=a[i][j]<Min?a[i][j]:Min;
        }
    }
    cout<<"\n MAX = "<<Max;
    cout<<"\n Min = "<<Min;
}
int main()
{
    int Matran[DONG][COT],dong,cot;
    dong=cot=0;
    do
    {
        cout<<"\n Nhap vao so dong:\t";
        cin>>dong;
        if(dong<=0||dong>DONG)
        {
            cout<<"\n Dong khong hop le!";
        }

    }
    while(dong<1||dong>DONG);
    do
    {
        cout<<"\n Nhap vao so Cot:\t";
        cin>>cot;
        if(cot<=0||cot>COT)
        {
            cout<<"\n Cot khong hop le!";
        }

    }
    while(cot<1||cot>COT);
    Input(Matran,dong,cot);
    Export(Matran,dong,cot);
    cout<<"\n---------------------------------\n";
    min_max(Matran,dong,cot);
    //Tong-duong CHeo-chinh
    cout<<"\n Tong Duong Cheo = "<<Tinh_DuongCheo(Matran,dong,cot);
    cout<<"\n Tong Nua-Tren-Duong -Cheo = "<<TONG_NUA_TREN(Matran,dong,cot);
    cout<<"\n Tong-Toan-Ma-tran = "<<Tong_toan_MT(Matran,dong,cot);
    int Duong_cheo_duoi=(Tong_toan_MT(Matran,dong,cot)-TONG_NUA_TREN(Matran,dong,cot))+Tinh_DuongCheo(Matran,dong,cot);
     cout<<"\n Nua -duong -cheo Duoi(cach khong chinh quy)="<<Duong_cheo_duoi;
     cout<<"\n Tong-Nua-Duong -Cheo-DUOI(chinh quy) = "<<Nua_duong_cheo_Duoi(Matran,dong,cot);
    //Tong-dong
//    int k=0;
//    int sum_dong=Tong_dong(Matran,dong,k,cot);
//    cout<<"\n Tong dong "<<k<<" = "<<sum_dong;
//    int C=0;
//    int Sum_cot=Tinh_cot(Matran,dong,cot,C);
//    cout<<"\n Tong Cot "<<C<<" = "<<Sum_cot;

//    cout<<"\nTim-x\n";
//    int x=0;
//    cout<<"\n Nhap vao x can Tim:\t";
//    cin>>x;
//    if(Timx(Matran,dong,cot,x)!=1)
//    {
//     cout<<"\n X khong Ton Tai!";
//    }
//    cout<<"\n Tinh-Chat-Mang\n";
//    Mang_Tinh_chat(Matran,dong,cot);

    return 0;
}
