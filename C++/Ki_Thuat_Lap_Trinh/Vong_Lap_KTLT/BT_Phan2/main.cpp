/*
1. Nhập vào 1 số nguyên dương n, đếm xem n có
bao nhiêu chữ số, tìm ra chữ số lớn nhất, chữ
số nhỏ nhất.
Vd: n = 216935
Có 6 chữ số
Chữ số Min = 1, Chữ số Max = 9
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n;

    cout<<"\n nhap vao mot so nguyen duong n:\t";
    cin>>n;
//    int soluong=log10((float)n)+1;
//    cout<<"\n so vua nhap co  so luong so ="<<soluong;
//    //25648
//        int temp=n;
//        int dem=0;
//
//        while(temp!=0)
//        {
//            temp/=10;//<=>temp=temp/10
//            dem++;
//        }
//        cout<<"\n so "<< n <<"vua nhap co so luong ="<<dem;

     //tim min max
    int max,min;
    //cho max min bang 1 so cuoi
    max=min=n%10;


      while(n!=0)
      {
          //bo so cuoi
          n=n/10;
          //lay tung so ra va so sanh
          int k=n%10;
          //gan k cho max hoac k cho min neu k lon hoac nho hon min
          if(k>max)
          {
              max=k;
          }
          //phai co n!=0 debug se thay!
          if(k<min&&n!=0)


               min=k;
          }

      }
       cout<<"\n max ="<<max;
       cout<<"\n min = " <<min;

    return 0;

}
