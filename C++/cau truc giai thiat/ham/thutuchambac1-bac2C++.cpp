#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;
//giai bac 1 bac 2 bang thu tuc ham!
//bac 1 ax+b=0; trong c#tham tri va con tro!trong c++ tham tri -con tro -thamchieu
//ham nhap
void inport(float &n)//gia tri n truoc la gia tri rac de thay doi nen dung tham chieu
{
    cout<<"\n nhap vao gia tri :\t";
    cin>>n;
}
//ham tinh ax+b=0
void bacnhat(float a,float b)
{
    if(a==0)
    {
        if(b!=0)
        {
            cout<<"\n phuong trinh vo nghiem!";
            return;//ketthuc ko cho chay xuong nua
        }
        else
            {
                cout<<"\n phuong trinh vo so nghiem!";
                return;
            }
            return;
    }
    else
        {
            float x=-b/a;
             cout<<"\n phuong trinh co nghiem la :\t"<<x;
        }

}
//ham tinh bac ax^2+bx+c=0
void bachai(float a,float b,float c)
{
    if(a==0)
    {
        bacnhat(b,c);
        return;
    }
    else
    {
        float deta=b*b-4*a*c;
        if(deta==0)
        {
            float x=-b/(2*a);
            cout<<"\n phuong trinh co nghiem kep =:\t"<<x;
            return;
        }
        else if(deta>0)
        {
            float x1=(-b+sqrt(deta)/(2*a));
            float x2=(-b-sqrt(deta)/(2*a));
            cout<<"\n co 2 nghiem kep la:\t"<<x1<<"--\t"<<x2;
            return;
        }
        cout<<"\n phuong trinh vo nghiem#!";

    }

}
int main()
{
    float a,b,c;
    cout<<"\t* nhap a*\t\n";
    inport(a);
    cout<<"\t*nhap b*\t\n";
    inport(b);
    cout<<"\n\t*nhap vao c*\t\n";
    inport(c);



    bachai(a,b,c);//cho nay chi can goi ham bachai boi vi!! bac nhat duoc bao boi bac 2!/

    return 0;
}
