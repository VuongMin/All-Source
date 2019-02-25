#include <iostream>
#include<vector>
#include<conio.h>
#include<stdio.h>
using namespace std;
//Nhap xuat- vecto
void Nhap(vector<int>&arr)
{
    cout<<"\n ---Menu----";
    cout<<"\n Sau ok \n";
    cout<<"\n An 1 de Dung\n";
    cout<<"\n An  Phim Khac Tiep\n";
    cout<<"\n--------------------\n";
    int i=0;
    while(true)
    {
        char Luachon=getch();//Lay ki tu chu khong lay so nguyen!

        if(Luachon=='1')
        {
            break;
        }
        else
        {
              int x=0;
              cout<<" Nhap vao vi tri a["<<i<<"]:\t";
              cin>>x;
              cout<<" Ok!\n";
            arr.push_back(x);
            i++;
        }
    }
}
void Xuat(vector<int> arr)
{
    int Size=arr.size();
    for(int i=0; i<Size; i++)
    {
        cout<<arr.at(i)<<" ";
    }
}
//Void xuat theo kieu Iterato
void out_Iter(vector<int> arr)
{
    for(vector<int>::iterator it=arr.begin();it!=arr.end();it++)//o nho +1 kieu du lieu 4 byte!
    {
        cout<<*it<<" ";//Xuat ra gia tri trong o nho
    }
}
int main()
{
    vector<int> arr;
    Nhap(arr);
    Xuat(arr);
    cout<<"\n ****Xuat Iterator (Theo tang o Nho)*****\n";
    out_Iter(arr);
    return 0;
}
