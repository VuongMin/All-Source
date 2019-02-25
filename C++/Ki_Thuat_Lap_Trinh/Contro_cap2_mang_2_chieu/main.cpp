#include <iostream>

using namespace std;
void capphat(int**& a,int sodong,int socot)//co the sai con tro cap 3
{
    //day la con tro cap 2
    a=new int*[sodong];//con tro cap 2 se quan li con tro cap n-1
    for(int i=0; i<sodong; i++)
    {

        a[i]=new int[socot];//con tro cap 1 quan li con tro cap nho hon!
    }
}
void input(int **a,int sodong,int socot)
{
    for(int i=0; i<sodong*socot; i++)
    {
        cout<<"\n Nhap vao a["<<i/socot<<"]["<<i%socot<<"]:\t";
        cin>>a[i/socot][i%socot];
    }
}
void Export(int **a,int sodong,int socot)
{
    for(int i=0; i<sodong*socot; i++)
    {
        cout<<a[i/socot][i%socot]<<" ";
        if((i+1)%socot==0)
        {
            cout<<"\n";
        }
    }

}
void Thuhoi(int **a,int sodong,int socot)
{
    for(int i=0; i<sodong; i++)
    {
        delete []a[i];//thu hoi cot
    }
    delete []a;//thu hoi dong
}
//Tim-KiEM PHAN TU
int Search_Phantu(int **a,int sodong,int socot,int x)
{
    for(int i=0;i<sodong*socot;i++)
    {
        if(a[i/socot][i%socot]==x)
        {
            return 1;
        }
    }
    return 0;
}
//                         Kiem-Tra -Tinh-Chat -cua -mang
bool NgTo(int x)
{
        if(x<2)
        {
            return false;
        }
        else
        {
          for(int i=2;i<x;i++)
          {
              if(x%i==0)
              {
                  return false;
              }
          }
        }
    return true;
}
int Text_Toan_NgTo(int **a,int sodong,int socot)
{
    for(int i=0;i<sodong*socot;i++)
    {
        if(NgTo(a[i/socot][i%socot])==false)
        {
            return 0;
        }
    }
    return true;
}
int Text_Chan(int **a,int sodong,int socot)
{
    for(int i=0;i<sodong*socot;i++)
    {
        if(a[i/socot][i%socot]%2!=0)
        {
            return 0;
        }
    }
    return 1;
}
//Tong tren dong-tren cot-tren duong cheo chinh-tren nua tren/Nua duoi-Tong Bien
//sum-dong
int Sum_dong(int **a,int sodong,int socot,int Dong)
{
    int Tong=0;
    for(int j=0;j<socot;j++)
    {
        Tong+=a[Dong-1][j];
    }
    return Tong;
}
//sum-cot
int Sum_cot(int **a,int sodong,int socot,int Cot)
{
    int Tong=0;
    for(int i=0;i<sodong;i++)
    {
        Tong+=a[i][Cot-1];
    }
    return Tong;
}
//sum-duong cheo chinh
int  sum_duongcheo(int **a,int sodong,int socot)
{
    int Tong=0;
    for(int i=0;i<sodong;i++)
    {
        Tong+=a[i][i];
    }
    return Tong;
}
//Sum-Nua-treN-DUONG CHEO
    int Nua_Tren(int **a,int sodong,int socot)
    {
        int Tong=0;
        for(int i=0;i<sodong;i++)
        {
            for(int j=i;j<socot;j++)
            {
                Tong+=a[i][j];
            }
        }
        return Tong;
    }
    //sum duong cheo duoi
    int Nua_duoi(int **a,int sodong,int socot)
    {
        int Tong=0;
        for(int i=0;i<sodong;i++)
        {

            for(int j=0;j<=i;j++)
            {
                Tong+=a[i][j];
            }
        }
        return Tong;
    }
void Sort(int **a,int sodong,int socot)
{
    for(int i=0;i<sodong*socot-1;i++)
    {
        for(int j=i+1;j<socot*sodong;j++)
        {
            if(a[i/socot][i%socot]>a[j/socot][j%socot])
            {
                int Temp=a[i/socot][i%socot];
                a[i/socot][i%socot]=a[j/socot][j%socot];
                a[j/socot][j%socot]=Temp;
            }
        }
    }

}
int main()
{
    int **a=NULL;
    int sodong,socot;
    do
    {
        cout<<"\n Nhap vao so dong:\t";
        cin>>sodong;
        if(sodong<=0)
        {
            cout<<"\n So cot Khong Hop LE!";
        }
    }
    while(sodong<=0);
    do
    {
        cout<<"\n Nhap vao so cot:\t";
        cin>>socot;
        if(socot<=0)
        {
            cout<<"\n So cot Khong Hop le!";
        }

    }
    while(socot<=0);
    capphat(a,sodong,socot);
    int Cot,Dong;
    Cot=Dong=0;
    do
    {
        cout<<"\n Nhap vao dong CAn tInh:\t";
        cin>>Dong;
        if(Dong<=0||Dong>sodong)
        {
            cout<<"\n khong Hop Le!";
        }

    }while(Dong<=0||Dong>sodong);
    do
    {
        cout<<"\n Nhao vao cot can Tinh:\t";
        cin>>Cot;
        if(Cot<=0||Cot>socot)
        {
            cout<<"\n Khong Hop Le!";
        }

    }while(Cot<=0||Cot>socot);
    input(a,sodong,socot);
    Export(a,sodong,socot);
    int x=0;
    cout<<"\n Nhap vao phan tu can tim:\t";
    cin>>x;
    if(Search_Phantu(a,sodong,socot,x)==1)
    {
        cout<<"\n so "<<x<<" co trong Mang !";
    }
    else
    {
        cout<<"\n so "<<x<<" Khong co trong Mang!";
    }
    if(Text_Toan_NgTo(a,sodong,socot)==1)
    {
        cout<<"\n Mang Toan Nguyen To!";
    }
    else
    {
        cout<<"\nMang Khong Toan Nguyen To!";
    }
    if(Text_Chan(a,sodong,socot)==1)
    {
        cout<<"\n Mang Toan Chan!";
    }
    else
    {
        cout<<"\n Mang Khong Toan chan!";
    }
    cout<<"\n Tong Dong "<<Dong<<" = "<<Sum_dong(a,sodong,socot,Dong);
    cout<<"\n Tong Cot "<<Cot<<" = "<<Sum_cot(a,sodong,socot,Cot);
    cout<<"\n Tong duong cheo  = "<<sum_duongcheo(a,sodong,socot);
    cout<<"\n Tong nua tren duong cheo = "<<Nua_Tren(a,sodong,socot);
    cout<<"\n Tong nua duoi duong cheo = "<<Nua_duoi(a,sodong,socot);
    Sort(a,sodong,socot);
    cout<<"\n Mang sau khi sap xep Tang dan \n";
    Export(a,sodong,socot);
    Thuhoi(a,sodong,socot);
    //Export(a,sodong,socot);

    return 0;
}
