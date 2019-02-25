
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
int main()

{

    //tong:for

//    int tong=0;
//    vuongmin:
//    for(int i=1;i<=10;i++)
//    {
//        system("cls");
//        tong+=i;
//
//    }
//    cout<<"\n tong vong lap for((n*n+1)/2) = "<<tong;
//su dung voi while;
//int i=1;
//int tong=0;
//vuongmin:
//while(i<=10)
//{
//     tong+=i;
//    i++;
//}
//cout<<"\n tong while:\t"<<tong;
/* do-while */
float diem;
vuongmin:
do
{
    cout<<"\n nhap vao diem so:\t";
    cin>>diem;
    if(diem<0||diem>10)
    {
        cout<<"\n xin nhap lai!...";
        system("cls");

    }


}while(diem<0||diem>10);
cout<<"\n diem ban vua nhap:\t**"<<diem<<"**";
     cout<<"\n *********ban co muon tiep tuc ?**********:\t  \nkeydown->c de tiep tuc.nhan phim bat ki de thoat chuong trinh!";
     char x=getch();
  if(x=='c'||x=='C')
  {
      system("cls");
      goto vuongmin;
  }


    return 0;
}
