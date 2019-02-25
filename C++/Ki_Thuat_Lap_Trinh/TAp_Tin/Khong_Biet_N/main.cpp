#include <iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
    //In ra man hinh  Cac du lieu co trong file Khong Biet N
    FILE *FileIn=fopen("INPUT.txt","r");
    int dem=0;
    while(!feof(FileIn))//Trong Khi khac ket Thuc file
    {
        int x;
        fscanf(FileIn,"%d",&x);
        dem++;
    }
    //cout<<dem;
    rewind(FileIn);//Cho con tro qua lai vi tri dau!
    int *Mang=new int[dem];
    for(int i=0;i<dem;i++)
    {
        int Temp=0;
        fscanf(FileIn,"%d",&Temp);
        Mang[i]=Temp;
        cout<<Mang[i]<<" ";
    }
    fclose(FileIn);

    return 0;
}
