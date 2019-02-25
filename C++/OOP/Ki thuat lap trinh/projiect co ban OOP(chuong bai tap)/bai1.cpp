#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
void kihieu()
{
    cout<<"      \t\t************************\n";
    cout<<"      *\t\t    VUONGMIN NORMAL  \t\t*\n";
    cout<<"      \t\t***********************";
}
void year()
{
    int y;
    cout<<"\n nhap nam sinh:\t";
    cin>>y;
    cout<<"\n ban sinh nam:\t"<<y;
    cout<<"\n tuoi cua ban:\t"<<2018-y;
    cout<<"\n------------------------------------------------------\n";

}
void binhphuongab(int a,int b)
{
    cout<<"\(A^2 +B^2):\t"<<pow(a,2)+pow(b,2);

}
void hieupow(int a,int b)
{
    cout<<"\n hieu(a-b)^2:\t "<<pow(a,2)-2*a*b+pow(b,2);
}
int tongpow(int a,int b)
{
    return pow(a,2)+2*a*b+pow(b,2);
}
void dangthuc()
{
    int a,b;

    cout<<"\n nhap  a:\t";
    cin>>a;
    cout<<"\n nhap b:\t";
    cin>>b;
    binhphuongab(a,b);
    hieupow(a,b);
    cout<<"\n (A+B)^2:\t"<<tongpow(a,b);

}
/* viet chuong trinh  nhap vao ban kinh r cua hinh tron;
cong thuc:
chuvi:cv=2*pi*r;
dien tich:dt=pi*r^2;
*/
int chuvi(int  r)
{
    double pi=3.14;
    double cv=(double)2*pi*r;
    return cv;
}
int dientich(int  r)
{
    float pi=3.14;
    return pi*pow(r,2);
}
void duongtron()
{
    int  r;
    cout<<"\n ****** nhap R:\t";
    cin>>r;
    cout<<"chu vi hinh tron:\t"<<chuvi(r);
  cout<<"\n dien tich hinh tron:\t" << dientich(r);
}
/*viet chuong trinh nhap vao do dai 3 canh a,b,c tam giac .tinh:
chuvi:cv=a+b+c;
dientich:dt=s=sqrt(p*(p-a)*(p-b)*(p-b)*(p-c))
voi p=cv/2;
*/
void tamgiac()
{
    double q,w,e,p;
    cout<<"\n*******************************************************************************\n";
    cout<<"\n nhap canh  a:\t";
    cin>>q;
    cout<<"\n nhap canh  b:\t";
    cin>>w;
    cout<<"\n nhap canh c:\t";
    cin>>e;
    cout<<"\n chu vi :\t"<<q+w+e;
    p=(q+w+e)/2;
    cout<<"\n dien tich :\t"<<sqrt(p*(p-q)*(p-w)*(p-e));
}
/* BAI 6:viet chuong trinh tinh tong  Sn=1+2+3...+n=(n+1)*n/2.voi so nguyen nhap tu ban phim!
*/
void tinhtong()
{
    int n;
    cout<<"\n ********nhao vao so nguyen:\t";
    cin>>n;
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    cout<<"\n tong la:\t "<<s;
}
/*BAI 7:nhap vao so nguyen  co 3 chu so tinh tong 3 chu so do.vd:nhap 2,3,4 ->tong :9*/
void inportsn()
{
    int x;
    do
    {

        cout<<"\n **********nhap vao so nguyen co 3 chu so :\t";
        cin>>x;
        if(x>999||x<100)
        {
            cout<<"\n ban khong hieu ha!! ";
        }

    }
    while(x>999||x<100);
    int x1,x2,x3,m,n,v;
    x1=x/100;//lay dc2
    m=x%100;// du 34
    x2=m/10;//lay dc 3
    n=m%10;//du 4


  cout<<"\n tong la:\t"<<x1+x2+n;
  cout<<"\n so dao nguoc la:\t"<<n*100+x2*10+x1;




}
void xe()
{
    int xe;
    do
    {
        cout<<"\n ************nhap so xe 4 so:\t";
        cin>>xe;
        if(xe<1000||xe>9999)
        {
            cout<<"\n vui long nhap lai nhe!";

        }

    }while(xe<1000||xe>9999);
    int x1,x2,x3,m,n,v;
    x1=xe/1000;//lay duoc 2
    m=xe%1000;//du 376
    x2=m/100;//lay duoc 3
    n=m%100;//du 76
    x3=n/10;//lay duoc 7
    v=n%10;//du 6
    cout<<"\n*****"<<(v+x3+x2+x1)%10<<"\tnut";


}
/*nhap vao 2 so x,y in ra gia tri bieu thuc sau:
*****2x^4+3x^3+4x^2-5x+6
*****6x^2+5y^3-4x^3-3y^2+2x^4+y

*/
 void inputxy()
 {
     float x,y;
     cout<<"\n nhap vao x,y:\t";
     cin>>x>>y;

    cout<<"2X^4 +3X^3+4X^2-5X+6\t=>\t"<<"2 *"<<x<<"^4"<<"+3"<<x<<"^3+4"<<x<<"^2-5"<<x<<"+6 =\t"<<(2*pow(x,4))+(3*pow(x,3)+(4*pow(x,2)-(5*x)+6));
     cout<<"\n 6X^2+5Y^3-4X^3-3Y^2+2X^4+Y =\t"<<6*pow(x,2)+5*pow(y,3)-4*pow(x,3)-3*pow(y,2)+2*pow(x,4)+y;
 }
 /*tinh vhu vi va dein tich tan giac neu do la tam giac.nhap vao 3 canh*/
 void testtamgiac()
 {
     int a,b,c;
     cout<<"\n**** nhap vao do dai 3 canh a,b,c:\t ";
     cin>>a>>b>>c;
     if(a+b>c&&a+c>b&&b+c>a)
     {
         cout<<"\n chu vi tam giac :\t"<<a+b+c;
         int h=(a+b+c)/2;
         cout<<"\n dien tich tam giac:\t"<<sqrt(h*(h-a)*(h-b)*(h-c));
         return;
     }
     cout<<"\n day khong la tam giac!!!!";

 }
 /*viet chuong trinh nhap vao 3 so nguyen.hay thay the so am bang gia tri tuyen doi cua no*/
 void daodau()
 {
     int a,b,c;
     cout<<"\n nhap vao a,b,c:\t";
     cin>>a>>b>>c;
     cout<<"\n dao dau la:\t"<<sqrt(pow(a,2))<<"\t"<<sqrt(pow(b,2))<<"\t"<<sqrt(pow(c,2));
 }
  void all()
  {
      /*int x,sn;
      //bai 4 lap trinh huong doi tuong
      cout<<"\n nhap vao x:\t";
      cin>>x;
      if(x<5)
      {
          cout<<"\n ket qua khi x < :\t"<<x<<"\t"<<-2*pow(x,2)+4*x-9;

      }
      else
      {
          cout<<"\n ket qua khi x >="<<x<<"\t"<<2*pow(x,2)+5*x+9;
      }
      do
      {
          cout<<"\n nhap vao 2 chu so:\t";
          cin>>sn;
          if(sn<10||sn>99)
          {
              cout<<"\n vui long nhap lai!";
          }

      } while(sn<10||sn>99);
      int x1,m;
      x1=sn/10;
      m=sn%10;
      cout<<"\n "<<x1<<"\t muoi"<<m;
      cout<<"\n--------------------------------------------------------------------------------------";
      int ngay,thang,nam;
      cout<<"\n nhap vao ngay :\t";
      cin>>ngay;
      cout<<"\n nhap vao thang:\t";
      cin>>thang;
      cout<<"\n nhap vao nam:\t";
      cin>>nam;
      if(ngay<0||ngay >30 )

      {
          cout<<"ngay sai cu phap";

      }
      else
      {
          cout<<"\n ngay hop le!";
      }
      if(thang<0||thang>12)
      {
          cout<<"\n thang khong hop le!";

      }
      else
      {
          cout<<"\n thang hop le";
      }
      if(nam<0)
      {
          cout<<"nam khong hop le!";


      }
      cout<<"\n nam hop le";*/
      int diem;
      do
        {
      cout<<"\n nhap vao diem so:\t";
      cin>>diem;
        }while(diem<0||diem>10);
      if(diem<=4) cout<<"\n kem!";
      if(diem==5)cout<<"\n trung binh!" ;
      if(diem>=6&&diem<=7)cout<<"\n kha!";
      if(diem>=8)cout<<"\n gioi!";



  }
  /*tro choi quan tu xi co 2 nguoi choi dung tay de bieu thi 3 cong cu :keo ,bua ,bao
  1.keo thang bao
  2.bao thang bua
  3.bua thang keo
  */
  void qco()
  {
      int x;
      do
      {
          cout<<"\n nhap vao gia tri quan co:\t";
          cin>>x;

      }while(x<1||x>10);
      for(int i=1;i<=x;i++)
      {
          if(i==x)
          {
              if(i==1) cout<<"\tuong den";
              if(i==2)cout<<"\n si den";
              if(i==3)cout<<"\n tuong den";
              if(i==4)cout<<"\n xe den";
              if(i==5)cout<<"\n phao den";
              if(i==6)cout<<"\ntuong trang";
              if(i==7)cout<<"\n si trang";
              if(i==8)cout<<"\n tuong trang";
              if(i==9)cout<<"\n xe trang";
              if(i==10)cout<<"\n phao trang";

          }
      }
      int year;
     cout<<"\n nhap vao so nam:\t";
     cin>>year;
     if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      cout<<"\n day la nam nhuan!";
   else
    cout<<"\n khong phai nam nhuan!";
    int tb,tc;
    cout<<"\n nhap vao tuoi cha:\t";
    cin>>tb;
    cout<<"\n nhap vao tuoi con:\t";
    cin>>tc;
    int dem=0;
    for(int i=tc;i<=tb;i++)
    {
        if(tb-tc!=tc)
        {
            dem ++;
            tb++;
        }
    }
    cout<<"\n "<<dem;


  }



int main()
{
   /* kihieu();
    year();
    dangthuc();
    duongtron();
    tamgiac();
    tinhtong();
    inportsn();
    xe();
    inputxy();
      testtamgiac();
      daodau();*/
      all();
      qco();
    return 0;
}

