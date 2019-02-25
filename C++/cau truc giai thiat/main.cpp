#include <iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
void ptb2(int a,int b,int c)
{
    double x1,x2,x;
    int deta;
    if(a>0)
    {
        deta=b*b-4*a*c;
        if(deta==0)
        {
            x=-b/2*a;
            cout<<"\n phuong trinh  nghiem kep :\t"<<x;
        }
        else
        {
            if(deta>0)
            {
                x1=(-b+sqrt(deta))/2*a;
                x2=(b+sqrt(deta))/2*a;
                cout<<"\n co 2 nghiem phan biet:"<<x1<<"\t"<<x2;
            }
            else
                {
                    cout<<"\n phuong trinh vo nghiem!";
                }
        }

    }
}
// in ra 50kitu
void inkt(char kt)
{

    {


    for(int i=0;i<50;i++)
    {
        cout<<kt<<"\t";
    }
    }

}
//tim so lon nhat
int maxz(int a,int b,int c)
{
    int max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    return max;
}
int main()
{
int a,b,c;
cout<<"\n nhap vao so a,b,c \t";
cin>>a>>b>>c;
cout<<"\n ket qua sau khi duoc giai :\t";
ptb2(a,b,c);
//nhap va xuat con tro;
float *p;
int n;
cout<<"\n nhap vao so luong con tro:\t";
cin>>n;
p=new float[n];
for(int i=0;i<n;i++)
{
    cout<<"\n nhap vao con tro "<<i+1<<":";
    cin>>p[i];
}
for(int  i=0;i<n;i++)
{
    cout<<p[i]<<"\t";
}
delete[] p;
double x,y;
char ch;

cout<<"\n nhap vao 2 so nguyen x,y:\t";
cin>>x>>y;
double  *px;
double *py;
px=&x;
py=&y;

cout<<"\n nhap vao ki tu +,-,*,/:\t";
cin>>ch;
if(ch=='+')
{
    cout<<"\n tong 2 so a ,b :\t"<<*px+*py;
    cout<<"\n dia chi cua tung o la:"<<px<<"\t"<<py;
}
if(ch=='-'){
    cout<<"\n hieu cua 2 so :"<<*px-*py;
cout<<"\n dia chi cua tung o:\t"<<px<<"--"<<py;
}
if(ch=='*')
{
    cout<<"\n tich 2 so a va b:\t"<<(*px)*(*py);
    cout<<"\n"<<px<<"---"<<py;

}
if(ch=='/')
{
    cout<<"\n  thuong cua a va b:\t"<<*px/(*py);
    cout<<"\n "<<px<<"--"<<py;
}
inkt('*');
cout<<"\n";
inkt('z');

    return 0;
}
