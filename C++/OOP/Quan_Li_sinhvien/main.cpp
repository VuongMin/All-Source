#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
class  hocsinh
{
 private:
     string Hoten;
     float Van,Toan;
 public:
    void Input_sv();
    void Out_sv();
    double TinhDtb();
    string XepLoai();



};
void hocsinh::Input_sv()
{
    fflush(stdin);
  cout<<"\n Nhap Ten:";
  getline(cin,Hoten);
  do
  {
      cout<<"\n Nhap Toan:";
      cin>>Toan;
      if(Toan<0||Toan>10)
      {
          cout<<"\n Toan Khong Hop Le!";
      }
  }while(Toan<0||Toan>10);

  do
  {
      cout<<"\n Nhap van:";
      cin>>Van;
      if(Van<0||Van>10)
      {

          cout<<"\n Van kHONG HOP Le!";
      }
  }while(Van<0||Van>10);
}
void hocsinh::Out_sv()
{
    cout<<"\n Ten:"<<Hoten;
    cout<<"\n Toan:"<<Toan;
    cout<<"\n Van:"<<Van;
    cout<<"\nDiem Trung Binh:"<<TinhDtb();
}double hocsinh::TinhDtb()
{
    return (Toan+Van)/2.0;
}
string hocsinh::XepLoai()
{
   double DTB=this->TinhDtb();
   if(DTB>=8.0)
   {
       return "Gioi";
   }
   else if(DTB>=7.0)
   {
       return "Kha";
   }
   else if(DTB>=5.0)
   {
       return "Trung Binh";
   }
   else{
    return "Yeu";
   }
}
int main()
{
 hocsinh x;
 x.Input_sv();
 x.Out_sv();
 cout<<"\n"<<x.XepLoai();
 hocsinh hs2;
 hs2.Input_sv();
 hs2.Out_sv();
 cout<<"\n"<<hs2.XepLoai();
    return 0;
}
