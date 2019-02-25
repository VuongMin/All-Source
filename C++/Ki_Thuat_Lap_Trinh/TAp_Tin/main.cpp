#include <iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
    //Phan doc du lieu File Tu file da cho truoc
    //Khai bao
    FILE *FileIn;
    //Mo file
    FileIn=fopen("INPUT.txt","r");
    //Dong file
    int a;
    int b;
    fscanf(FileIn,"%d",&a);
    fscanf(FileIn,"%d",&b);
    fclose(FileIn);
    //Xuat ra man hinh ne!
    cout<<"\n A = "<<a<<" "<<"B = "<<b;
    //Tao ra file va ghi xuong ne(tong-Hieu-Tich-Thuong)
 FILE *     Filedown=fopen("FILEDOWN.txt","w");//File may tu dong sinh ra khong can tao

       fprintf(Filedown,"%d+%d = %d",a,b,a+b);
       fprintf(Filedown,"\n%d-%d = %d",a,b,a-b);
       fprintf(Filedown,"\n%d*%d = %d",a,b,a*b);
       fprintf(Filedown,"\n%d/%d = %f",a,b,a/(float)b);
     //Dong File
    fclose(Filedown);
    return 0;
}
