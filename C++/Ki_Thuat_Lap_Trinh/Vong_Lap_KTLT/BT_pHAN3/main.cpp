#include <iostream>
#include<math.h>
#include<limits.h>
using namespace std;
int doixung(int n)
{
     int soluong=log10((float)n);//khong can cong 1 vi lap so mu
       cout<<" \n so luong ="<<soluong;
       int dem = soluong;
        int temp=n,layso;

        //vi pow(float,float) nen tot nhat khai bao kieu float
        //float sodaonguoc=0;//neu khong thi kieu in nhung phai kep kieu kq
        int sodaonguoc=0;
        while(temp!=0)
        {
              layso=temp%10;

             temp/=10;
             sodaonguoc+= float(layso*pow(10.0,dem));
             dem--;



        }



       if(sodaonguoc==n)
       {
           return n;
       }
       return 0;

}

/*
1. Nhập một số nguyên dương n (n > 0). Hãy cho biết:
a. Có phải là số đối xứng? Ví dụ: 121, 12021, …
b. Có phải là số chính phương? Ví dụ: 0, 1, 4, 9, 16, 25 …
c. Có phải là số nguyên tố? Ví dụ: 2, 3, 5, 7, 11, 13 …
d. Các chữ số có tăng dần hay giảm dần không ?
Lưu ý ở chỗ này cần phải phân biệt rõ ràng giữa tăng dần “nghiêm ngặt”
 và “không nghiêm ngặt”
Tăng dần nghiêm ngặt: Chữ số đằng sau bắt buộc phải lớn hơn đằng trước.
 Vd: 123456
Tăng dần không nghiêm ngặt: Chữ số đằng sau có thể >= chữ số đằng trước
. Vd: 1122334566
*/

int main()
{
    int n;
    do
    {
        cout<<"\n nhap n:\t";
    cin>>n;
    if(n<=0)
    {
      cout<<"\n n>0!";
    }

    }while(n<=0);
    // A.so doi xung
    // 1 2 0 2 1
    // phai dem xem co bao nhieu so
//      int soluong=log10((float)n);//khong can cong 1 vi lap so mu
//       cout<<" \n so luong ="<<soluong;
//       int dem = soluong;
//        int temp=n,layso;
//
//        //vi pow(float,float) nen tot nhat khai bao kieu float
//        //float sodaonguoc=0;//neu khong thi kieu in nhung phai kep kieu kq
//        int sodaonguoc=0;
//        while(temp!=0)
//        {
//              layso=temp%10;
//
//             temp/=10;
//             sodaonguoc+= float(layso*pow(10.0,dem));
//             dem--;
//
//
//
//        }
//
//      cout<<" \n so dao nguoc cua  "<<n<<" = "<<sodaonguoc;
//
//       if(sodaonguoc==n)
//       {
//           cout<<"\n  so dao nguoc .";
//       }
//       else
//       {
//           cout<<"\n khong phai so dao nguoc .";
//       }
//       //so chinh phuong
//
//        float sochinhphuong;
//        sochinhphuong=sqrt((float)n);
//        if(sochinhphuong=(int)sochinhphuong)
//        {
//            cout<<"\n "<<n<<" La so chinh phuong!";
//        }
//        else
//        {
//            cout<<" \n "<<n<<"khong la chinh phuong.";
//        }
//        //so nguyen to
//        int demnt=0;
//        if(n<2)
//        {
//            cout<<"\n "<<n<<" KHONG la so Nguyen To";
//        }
//        else
//        {
//            for(int i=2;i<=n-1;i++)
//            {
//                if(n%i==0)
//                {
//                    demnt++;
//                }
//
//            }
//            if(demnt!=0)
//            {
//                cout<<"\n day khong phai so nguyen to";
//            }
//            else
//            {
//                cout<<"\n Day la so NGuyen TO!";
//            }
//
//        }
/*
d. Các chữ số có tăng dần hay giảm dần không ?
Lưu ý ở chỗ này cần phải phân biệt rõ ràng giữa tăng dần “nghiêm ngặt”
 và “không nghiêm ngặt”
Tăng dần nghiêm ngặt: Chữ số đằng sau bắt buộc phải lớn hơn đằng trước.
 Vd: 123456
Tăng dần không nghiem ngac
1122334455678
*/

// a b c d e

// 1 2 3 4 5
/*
//n%10;-> 5- e
//n/10;->1234
//n%10;-> 4- d
//vong 2
//n%10;-> 4 -d
//n/10;->123
//n%10-> 3-c
* vong 3*
 n%10;-> 3->c
 n/10;->12
//n%10->2->b
* vong 4*
n%10;-> 2
//n/10;->1 ->chi den day la dung duoc roi nhung n no con lon hon 1 nen vong lap se chay 1 lan nua
//n%10->0
...
*/
/*
2. Nhập vào 2 số nguyên dương a & b với điều kiện là b > a. Hãy thực
 hiện các yêu cầu sau:
a. Đếm xem trong đoạn [a, b] có bao nhiêu số đối xứng, chính phương,
nguyên tố
b. Tính tổng các số đối xứng, chính phương, nguyên tố trong đoạn [a, b]

*/
int a,b;
do

{
    cout<<"\n nhap a:\t";
cin>>a;
if(a<0)
{
    cout<<"\n a>0.";
}

}while(a<0);
 do
 {
     cout<<"\n nhap b:\t";
     cin>>b;
     if(b<a)
     {
         cout<<"\n b>a.";
     }

 }while(b<a);
  //b=10 a=4=>10-4=6

for(int i=a;i<=b;i++)
{
    if(a<10)
    {
        continue;
    }
    else
    {
        cout<<"\n "<<doixung(i);
    }
}






    return 0;
}
