#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
using namespace std;
//Viết hàm đổi một ký tự hoa sang ký tự thường.

void characterchange(char x)
{
    if(x>='a'&&x<='z')
    {    //KIEU CHAR gan cho char
        char biendoi=x-32;
        cout<<biendoi;
    }
    else if(x>='A'&&x<='Z')
    {
        char biendoi=x+32;
        cout<<biendoi;
    }

}
//Viết thủ tục giải phương trình bậc nhất.
// ax+b=0;
 float Equation1(int &a,int &b)// 2 bien thay doi nen tham chieu
 {

     do
     {

       cout<<"\n nhap a:\t";
       cin>>a;
       if(a==0)
       {
           cout<<"\n a!=0";
       }
     }while(a==0);
     do
     {

       cout<<"\n nhap b:\t";
       cin>>b;
       if(b==0)
       {
           cout<<"\n b!=0";
       }
     }while(b==0);

     return (float)(-b)/a;//so nguyen chia so so se = so nguyen=>fhai ep kieu hoc (a or b) .0 moi duoc!


 }
 //Viết thủ tục giải phương trình bậc hai.
// ax^2+bx+c=0
 void Equation2(int a,int b,int c)
 {
     if(a==0)
     {
        if(b!=0)
            cout<<"\n Phuong Trinh co nghiem ="<<Equation1(b,c);
         else
            cout<<"\n phuong tring vo nghiem";
     }
     else
     {
         int deta=b*b-4*a*c;
         if(deta<0)
         {
             cout<<"\n phuong trinh vo nghiem";
         }
         else if(deta==0)

         {
             double k=(float)-b/2*a;
             cout<<"\n phuong Trinh co nghiem Kep ="<<k;
         }
         else
         {
             double x1=(float)(-b-sqrt((float)deta))/2.0*a;
             double x2=(float)(-b+sqrt((float)deta))/2.0*a;
             cout<<"\n Phuong Trinh Co 2 Nghiem X1="<<x1<<"& x2 ="<<x2;
         }
     }



 }
 //Viết hàm trả về giá trị nhỏ nhất của 4 số nguyên.
 int maxximun(int &a,int &b,int &c,int &d)
 {
     cout<<"\n Nhap a:\t";
     cin>>a;
     cout<<"\n Nhap b:\t";
     cin>>b;
     cout<<"\n Nhap vao c:\t";
     cin>>c;
     cout<<"\n nhap vao d:\t";
     cin>>d;
     int min=a;
     if(a>b)
     {
         min=b;
     }
      if(a>c)

     {
         min=c;
     }
      if(a>d)
     {
         min=d;
     }

     return min;
 }
 //Viết thủ tục hoán vị hai số nguyên.
 void permutation(int &a,int &b)
 {
     system("color 2");
     cout<<"\n Hoan Vi ne";
     cout<<"\n Nhap a:\t";
     cin>>a;
     cout<<"\n nhap b:\t";
     cin>>b;
     int temp=a;
         a=b;
         b=temp;
  cout<<"\n Sau Khi Hoan vi = "<<a<<"<->"<<b;

 }
 //so SANH

 void hoanvi(int &a,int &b)//tham chieu de thay doi gia tri
 {
      if(b<a)
      {
          int tem=a;
          a=b;
          b=tem;
      }
 }

int main()
{
    vuongmin:
   char kitu;

       int a,b;
    cout<<"\n Nhap ki tu(a-z):\t";
    cin>>kitu;
    characterchange(kitu);
    //ham equation 1
     float x=Equation1(a,b);
     cout<<"\n Phuong Trinh Bac Nhat ="<<x;
      //phuong trinh bac 2
      int q,w,e;
      cout<<"\n nhap a:\t";
      cin>>q;
      cout<<"\n nhap b:\t";
      cin>>w;
      cout<<"\n nhap c:\t";
      cin>>e;
      Equation2(q,w,e);
///      tim min
      int k=maxximun(a,q,b,e);
      cout<<"\n Min ="<<k;
///      Hoan vi
       permutation(a,b);
       //tim so lon nho
       int h=5,j=-2,l=6,m=-10;
       hoanvi(h,j);
       hoanvi(h,l);
       hoanvi(h,m);
       hoanvi(j,l);
       hoanvi(j,m);
       hoanvi(l,m);
       cout<<"\n Tang dan="<<h <<" "<<j<<" "<<l<<" "<<m;


    cout<<"\n muon tiep tuc 1\n";
      int p=getch();
     cin>>p;
     if(p==1)
     {
         system("cls");
         goto vuongmin;
     }





    return 0;
}
