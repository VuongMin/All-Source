#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
 /*
 3. Tìm và in lên màn hình tất cả các số nguyên trong phạm vi từ 10
  đến 99 sao cho tích của 2 chữ số
bằng 2 lần tổng của 2 chữ số đó. Ví dụ: Số 44
 */
 vuongmin:
 for(int i=10;i<100;++i)
 {
     int a=i%10;
     int b=i/10;

     if((a*b)==((a+b)*2))
     {
         cout<<"\t"<<i;
     }
 }
 /*
 4. Tìm ước số chung lớn nhất của 2
  số nguyên dương a và b nhập từ bàn phím.
 */
 int a,b;
 cout<<"\n nhap a:\t";
 cin>>a;

 cout<<"\n nhap b:\t";
 cin>>b;

  int max=a>b?a:b;
  int min=a<b?a:b;
  if(max%min==0)
  {
      cout<<"\n Ucln ="<<min;
  }
  else
  {
      for(int i=min/2;i>=1;i--)
      {
          if(max%i==0&&min%i==0)
          {
              cout<<"\n Ucln ="<<i;
          }
      }
  }

/*
5. Nhập n (n >= 1). In n số đầu tiên trong dãy Fibonacy.
 Biết nguyên tắc của dãy Fibonacy như sau:
a[0] = a[1] = 1
a[n] = a[n – 1] + a[n – 2]
Vd: Dãy Fibonacy bình thường là: 1 1 2 3 5 8 13 21 34 55 89 144 233
Test 1: Nhập n = 3 => in ra là: 1 1 2
Test 2: Nhập n = 7 => in ra là: 1 1 2 3 5 8 13
Test 3: Nhập n = 1 => in ra là 1
*/
int fonaci;

cout<<"\n nhap vao so fonaci:\t";
cin>>fonaci;
int a1=1,a2=1;
if(fonaci==1)
{
    cout<< a1 ;
}
if(fonaci==2)
{
    cout<< a1 << a2 ;
}
else
{
    //neu n=3 thi lap 1 lan
    //neu n=4 thi lap 2 lan
    //neu n=5 thi lap 3 lan
    cout<< a1 << a2 ;
    for(int i=1;i<=fonaci-2;i++)
    {
        int an=a1+a2;
        //cap nhat lai de day so sau len 1 nut

         a1=a2;
         a2=an;
         cout<< an ;
    }

}
  cout<<"\n ban co muon tiep tuc bam y!";
 char x=getch();
 if(x=='Y'||x=='y')
 {
     system("cls");
     system("color 2");

     cout<<" Loangding";
     for(int i=0;i<=2;i++)
     {
         cout<<" . ";
         Sleep(500);
     }
     system("cls");
      goto vuongmin;
 }


    return 0;
}
