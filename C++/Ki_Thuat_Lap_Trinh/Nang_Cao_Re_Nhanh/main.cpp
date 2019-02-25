#include <iostream>
#define hourfrist 3*30000
#define  gio 30000

/*
Một điểm KARAOKE tính tiền khách hàng theo công thức sau:
• Mỗi giờ trong 3 giờ đầu tiên tính 30 000 đồng/giờ,
• Mỗi giờ tiếp theo có đơn giá giảm 30% so với đơn giá trong 3 giờ đầu
tiên.
• Ngoài ra nếu thời gian thuê phòng từ 8 – 17 giờ thì được giảm giá 10%.
Viết chương trình nhập vào giờ bắt đầu, giờ kết thúc và in ra số tiền
 khách hàng phải trả biết
rằng 8 ≤ giờ bắt đầu < giờ kết thúc ≤ 24.
*/
using namespace std;


int main()
{

     int giobatdau,gioketthuc;
    do
    {
    cout<<"\n nhap gio bat dau:\t";
    cin>>giobatdau;
    if(giobatdau<8||giobatdau>24)
          {
           cout<<"\n gio bat dau >=8&&<24!";
          }

    }while(giobatdau<8||giobatdau>24);
    do
    {


    cout<<"\n nhap gio ket thuc:\t";
    cin>>gioketthuc;
    if(gioketthuc<giobatdau||gioketthuc>24)
    {
        cout<<"\n gio ket thuc >gio bat dau&&<24h.";
    }
    }while(gioketthuc<giobatdau||gioketthuc>24);
    //3 gio dau 30 000
     int  giothue=gioketthuc -giobatdau;
     int dongia=giothue*gio*0.3;

     if(giothue>=8||giothue<=17)
     {
         int sotien=hourfrist+dongia*0.1;
        cout<<"\n so tien phai tra ="<< sotien;
     }
     else
     {
        int sotien=hourfrist+dongia;
        cout<<"\n so tien phai tra ="<<sotien;
     }



    return 0;
}
