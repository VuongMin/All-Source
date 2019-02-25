#include <iostream>
#include <iomanip>///Ham lam tron so thuc
#define MAX 100
#include<stdlib.h>
#include<conio.h>
using namespace std;

/*
Bài 333/90/SBT Thầy NTTMK:Tính tổng các số hoàn thiện
trong ma trận các số nguyên.
->so hoan thien la so tong cac uoc cua no cong lai ==no!
*/
void Input(int a[][MAX],int dong,int cot)
{
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            cout<<"\n Nhap a["<<i<<"]["<<j<<"]:\t";
            cin>>a[i][j];
        }
    }
}
void Export(int a[][MAX],int dong,int cot)
{
    for(int i=0;i<dong;i++)
    {
        for(int j =0 ;j<cot;j++)
        {

            cout<<setprecision(3)<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int Text_Hoan_thien(int x)
{
    int Tong=0;
    if(x<2)
    {
        return 0;
    }
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            Tong+=i;
        }
    }
     if(Tong+1!=x)
     {
         return 0;
     }
     return 1;
}
int Tong_so_hoanthien(int a[][MAX],int dong,int cot)
{
    int Tong=0;
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            if(Text_Hoan_thien(a[i][j])==1)
            {
              Tong+=a[i][j];
            }
        }
    }
    return Tong;
}
/*
Bài 325/89/SBT Thầy NTTMK:Tính tích các số chẵn trên một cột
trong ma trận các số nguyên .
*/
long Tich_chan(int a[][MAX],int dong,int cot,int &C)
{
    do
    {
        cout<<"\n Nhap vao cot can tinh:\t";
        cin>>C;
        if(C<=0||C>cot)
        {
            cout<<"\n Cot khong Ton tai!";
        }

    }while(C<=0||C>cot);
    long Tich=1;
    for(int i=0;i<dong;i++)
    {
        if(a[i][C-1]%2==0)
        {
            Tich*=a[i][C-1];
        }

    }
    return Tich;
}
int main()
{
    min:
    int a[MAX][MAX],dong,cot;
    do
    {
        cout<<"\n Nhap vao so dong:\t";
        cin>>dong;
        if(dong<=0||dong>MAX)
        {
            cout<<"\n Dong Khong Hop Le!";
        }

    }while(dong<=0||dong>MAX);
     do
    {
        cout<<"\n Nhap vao so Cot:\t";
        cin>>cot;
        if(cot<=0||cot>MAX)
        {
            cout<<"\n Cot Khong Hop Le!";
        }

    }while(cot<=0||cot>MAX);
    Input(a,dong,cot);
    Export(a,dong,cot);
     cout<<"\n Tong so hoan thien = "<<Tong_so_hoanthien(a,dong,cot);
     int C=0;
     cout<<"\n Tich- cac so chan = "<<Tich_chan(a,dong,cot,C);
     cout<<"\n Muon tiep tuc keydown 1";
     char x=getch();
     if(x=='1')
     {
         system("cls");
         goto min;
     }
    return 0;
}
