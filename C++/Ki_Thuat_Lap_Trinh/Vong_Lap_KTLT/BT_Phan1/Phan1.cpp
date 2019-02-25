#include <iostream>
#include<math.h>
#include<windows.h>
#include<stdlib.h>

#include<conio.h>

/*
1. Nhập một số nguyên dương n. Tính:
a.S = 1 + 2 + … + n
b.S = 1^2 + 2^2 + … + n^2
c.S = 1 + 1/2 + … + 1/n
d.S = 1*2*…*n = n!
e.S = 1! + 2! + … + n!
*/

using namespace std;
//a.S = 1 + 2 + … + n

int sum(int x)
{
    int s=0;
    for(int i=1;i<=x;++i)
    {
        s+=i;
    }
    return s;

}
//  B.S = 1^2 + 2^2 + … + n^2
int exponential(int x)
{
     int s=0,i=1;

     for(;i<=x;++i)//mat khoi tao
     {
         s+=pow(i,2);

     }
  return s;
}
// C.S = 1 + 1/2 + … + 1/n
  float sumps(int x)
  {
      float s=0;
      for(int i=1;i<=(float)x;i++)
      {
          //so nguyen chia so nguyen no se ra so nguen nen phai ep kieu cho no

          s+=(float)1/i;//<=>s+=(1.0/i)->vi phai la kieu so thuc moi chia ra dc so thuc

      }
      return s;
  }
  //d.S = 1*2*…*n = n!
  int Giaithua(int x)
  {
      // s phai bang 1 nen moi nhan duoc .neu la o thi kq=0
      int s=1;
      //khoi tao ne!
      int i=1;


      for(;;)
      {
          //dieu kien dung ne
          if(i>x)
          {
              break;
          }
          s*=i;
         //buoc lap ne
          i++;
      }
      return s;
  }
  //e.S = 1! + 2! + … + n!
  int Sumgiaithua(int x)
  {
      int temp=1;
      int s=0;
      for(int i=1;i<=x;i++)
      {
          for(int j=1;j<=i;j++)
          {

             temp=temp*j;

          }

         s+=temp;
         //reset temp de no den giai thua thu 2 ne

         temp=1;
      }
      return s;
        }
int main()
{
    vuongmin:
    int x;
 cout<<"\n nhap x :\t";
 cin>>x;
 cout<<"\n  Tong = "<<sum(x);
 cout<<"\n Luy Thua ="<<exponential(x);
 cout<<"\n Tong Cua hIEU pS= "<<sumps(x);
 cout<<"\n  Giai Thua ="<<Giaithua(x);
 cout<<"\n Tong  cac Giai Thua ="<<Sumgiaithua(x);
 cout<<"\n ban co muon tiep tuc  an yes hoac no!";
    char luachon= getch();
    if(luachon=='y'||luachon=='Y')
    {
        cout<<"\n lua chon cua ban  la tiep tuc!";
        cout<<"\n Loading";
        for(int i=0;i<3;i++)
        {
            cout<<".";
            Sleep(500);
        }
            system("cls");
        goto vuongmin;
    }
    return 0;
}
