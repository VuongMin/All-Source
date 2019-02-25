#include"../../DO_hoa.h"
using namespace std;
///Trả về số đảo của số đó.
int numberdao(int n)
{
    int temp=n;
    int Soluong=log10((float)n);
    int sum=0;

    while(temp!=0)
    {
        int digit=temp%10;
        temp/=10;
        sum+=float(digit*pow(10.0,Soluong--));//can than kieu de ko sai kq
    }
    return sum;

}
///Có phải là số đối xứng (Trả về True/False)
bool numdoixung(int n)
{
    if(n==numberdao(n))
    {
        return true;
    }
    return false;
}
///Có phải là số chính phương.
int Numberchinhphuong(int n)
{
  float x=sqrt((float)n);
  if(x==(int)x)
  {
      return 1;
  }
  return 0;
}
///Có phải là số nguyên tố.
void songuyento(int n)
{
    if(n<2)
    {
        cout<<"\n Khong nguen to!";
        return;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"\n KHONG so nguyen To...";
                return;
            }
            else
            {
                cout<<"\n La nguyen To..";
                return;
            }
        }
    }
}
///Tổng các chữ số lẻ.
int sumLe(int n)
{
    int sum=0;
    while(n!=0)
    {
     int digit=n%10;
     n/=10;
     if(digit%2!=0)
     {
         sum+=digit;
     }
    }
    return sum;
}
int nguyento(int n)
{
    for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
}
///Tổng các chữ số nguyên tố.
int sumNto(int n)
{
    int sum=0;
    while(n!=0)
    {

        int digit=n%10;
        n/=10;
        if(nguyento(digit)==1)
        {
            sum+=digit;
        }
    }
    return sum;
}
///Tổng các chữ số chính phương.
int sumChinhPhuong(int n)
{
    int sum=0;
    while(n!=0)
    {
        int digit=n%10;
        n/=10;
        if(Numberchinhphuong(digit)==1)
        {
            sum+=digit;
        }
    }
    return sum;
}

int main()
{
    /*
    Bài tập chương câu lệnh lặp.
    Hàm nhận vào một số nguyên dương n và thực hiện:








    */
    vuongmin:
    int n;
    do
    {
        cout<<"\n Nhap 1 so nguyen duong n:\t";
        cin>>n;
        if(n<1)
        {
            cout<<"\n N>0!";
        }

    }while(n<1);
     if(n<10)
     {

          gotoxy(30,4);
         textcolor(2);
          cout<<" So dao cua "<<"0"<<n<<"="<<n<<"0";
          cout<<" va khong co so doi xung->";
     }
     else
     {
         gotoxy(30,4);
         int x=numberdao(n);
         cout<<" So dao Nguoc "<<n<<" = "<<x;
          if(numdoixung(n)==true)
          {
              cout<<"\n CUng la so doi xung.";

          }
          else
          {
              cout<<"\n Khong doi xung!";
          }
     }
     gotoxy(30,7);
     textcolor(3);
     cout<<" -----------------";
     cout<<"\n Loading";
     cout<<".";
     cout<<"\a";
     Sleep(100);
     cout<<"\a.";
     Sleep(200);
     cout<<"\a.";
     Sleep(300);
     int z=Numberchinhphuong(n);
     if(z==1)
     {
         cout<<"\n Day so chinh phuong";
     }
     else
     {
         cout<<"\n Khong chinh phuong";
     }
     cout<<"\n ---NGUYEN TO---";
     songuyento(n);
     cout<<"\n Tong le ="<<sumLe(n);
     cout<<"\n Tong Nguyen To="<<sumNto(n);
     cout<<"\n TONG chinh Phuong ="<<sumChinhPhuong(n);
     cout<<"\n MUON TIEP TUC keydown ='Y'";
     char b=getch();
     if(b=='Y'||b=='y')
     {
          system("cls");
         goto vuongmin;

     }
    return 0;
}
