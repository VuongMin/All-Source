
#include"../../DO_hoa.h"
#include<stdio.h>
using namespace std;
int main()
{
    //nhap vao ki tu va bien no thanh *
    char mang[50];
    int phantu=0;
    int sokitu=0;
    int x;
    //dau ngoac lam nen tat ca EOf
    while( (x=getch())!=EOF)//KHAC nut KET THUC fiel
    {
        if(IsPressed(VK_RETURN))
        {
            cout<<"\n Ban vua Nhan EnTer";
            break;
        }
        if(x>=0&&x<=9)
            // lay code +48 de ra ki tu so
            mang[phantu++]=x+48;
        else
            //luu thang vao
            mang[phantu++]=x;


        Sleep(100);
        cout<<"*";
        sokitu++;


    }
    cout<<"\n";
    for(int i=0;i<sokitu;i++)
    {
        cout<<mang[i];
    }

     getch();
    return 0;
}
