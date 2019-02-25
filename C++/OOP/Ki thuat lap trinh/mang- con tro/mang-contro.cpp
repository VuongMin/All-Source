#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<string>

using  namespace std;
/* mang 1 chieu*/
//
// void nhap(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<"\n nhap vao a["<<i<<"]";
//         cin>>a[i];
//     }
// }
// void xuat(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<"   ";
//     }
// }
/*con tro-> mang dong*/
void nhap(int *a,int n)
 {
     for(int i=0;i<n;i++)
     {
         cout<<"\n nhap vao a["<<i<<"]\t:";
         cin>>a[i];
     }
 }
 void xuat(int *a,int n)
 {
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<"   ";
     }
 }
 /*ham tinh tong*/
 float sum(float &toan,float &ly,float &hoa)
 {
     cout<<"\n nhap vao diem toan:\t";
     cin>>toan;
     cout<<"\n nhap vao diem ly:\t";
     cin>>ly;
     cout<<"\n nhap vao diem hoa:\t";
     cin>>hoa;

     return toan+ly+hoa;
 }
 /*tim diem trung binh cong*/
 float average(float toan,float ly,float hoa)
 {
     return (toan+ly+hoa)/3;
 }
 /*xep loai */
 //note:tra ve la dau ".....",con so sanh chuoi ''
 string xeploai(float dtb)
 {
     if(dtb <2)
     {
         return "kem";
     }
     else if(dtb>=2&&dtb<=5)
     {
         return "yeu";
     }
     else if(dtb>5&&dtb<=8)
     {
         return "kha";
     }
     return "gioi";

 }
int main()
{
    //int a[100],n;
    int n;
    float toan,ly,hoa;
    vuongmin:
    cout<<"\n nhap vao so luong phan tu:\t";
    cin>>n;
    int *a=new int[n];
    nhap(a,n);
    xuat(a,n);
    cout<<"\n tong diem(toan-ly-hoa):\t"<<sum(toan,ly,hoa);
    float dtb=average(toan,ly,hoa);


    cout<<"\n diem trung binh:\t"<<dtb;
    cout<<"\n"<<xeploai(dtb);

//ham lay phim tu ban phim

     char x=getch();
       normal:
         cout<<"\n ban co muon tiep tuc ?\nneu co keydown=>yes.neu khong keydown=>no!";
        cin>>x;
         if(x=='y')
         {

             system("cls");
          goto vuongmin;
         }
         else if(x=='n')
         {
             //thoat ra chuong trinh
             return 0;

         }
         else
         {



         goto normal;

         }





    system("pause");


    return 0;

}
