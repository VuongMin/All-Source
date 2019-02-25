#include <iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{

    //doc va ghi ra file moi tat ca so sau so luong dau tien
    FILE *FileIn=fopen("INPUT.txt","r");
    int x=0;
    //Lay du lieu tu file cho truoc dua vao Chuong Trinh
    fscanf(FileIn,"%d",&x);

    //Cap phat
    int *Mang =new int[x];
    //Con tro dinh vi chi hieu va tang den vi tri thu 2 khi duoc viet truoc fclose();

     for(int i=0;i<x;i++)
     {
         int Temp=0;
             fscanf(FileIn,"%d",&Temp);
                 Mang[i]=Temp;
                 cout<<Mang[i]<<"\t";
     }



    //Dong file
    fclose(FileIn);


     delete[]Mang;

    return 0;
}

