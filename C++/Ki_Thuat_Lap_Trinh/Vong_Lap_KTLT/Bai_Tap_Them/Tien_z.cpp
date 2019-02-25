#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    vuongmin:
    char mang[100];
    int phantu=0;
    int demsophay=0;
    int demsokitu=0;
    int money;
    cout<<"\n Nhap Tien:\t";
    cin>>money;
    while(money!=0)
    {
        int digit=money%10;
        money/=10;
        if(demsokitu%3==0&&demsokitu!=0)
        {
            //ki tu phay
            mang[phantu++]=44;
            demsophay++;
        }
        //lay code cong 48 de ra so do
        mang[phantu++]=digit+48;
        demsokitu++;
    }
    for(int i=demsokitu+demsophay-1;i>=0;i--)
    {
        cout<<mang[i];
    }


    return 0;
}
