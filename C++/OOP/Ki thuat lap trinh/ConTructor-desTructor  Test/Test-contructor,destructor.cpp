#include<iostream>
using namespace std;
class hocsinh
{
private:
    string ten;
    //float diem;
    float *diem;

public:
    void xuat();
    void thaydoi()
    {
        //toan tu gia tri *
        (*diem)--;
    }
    //tao defaul contructor
/*<tenlop>(){}=>khong tham so.khi chuong trinh chay den cai hocsinh hs
 thi  defaul contructor se duoc goi va luu vao !
 */
     hocsinh()
 {
     ten="vuongmin";
     diem=new float;
     *diem=7;

 }
 /*khi muon thay doi ten da khoi  tao truoc thi ta dung phuong thuc
 khoi tao co tham so
 */
 hocsinh(string t,float x)
 {
    ten=t;//<=>min gan qua ten
//vi o day con tro diem ko co gia tri nao de no chuyen bo nho qua nen
//phai cung cap bo nho.khong cung cap bo nho neu no dc luu vao 1 bien

    diem=new float;
    *diem=x;//<=>6.9 gan qua 7
 }
 //tao tao sao chep
 hocsinh(const hocsinh &x)
 {
     ten=x.ten;
     //tao vung nho moi de doi vung nho cu qua
     diem=new float;
     *diem=*x.diem;
 }
 //vi co con tro nen can delete


   //getter xem va so sanh
    string getter_ten()
    {
        return ten;
    }
    // setter thay doi ne
   void setter_ten( string t )
   {
       ten=t;

   }


};
//khong nhap ma xuat va khong defaul contructor thi no ra gia tri rac
//chuoi thi rong ,diem thi gia tri rac!
void hocsinh::xuat()
{
    cout<<"\n ten:\t"<<ten;
    cout<<"\n diem :\t"<<*diem;

}








int main()
{
    hocsinh hs("min",6.9);
    hocsinh hs2(hs);
    hs.thaydoi();
    cout<<"\n hoc sinh 1\n";
    hs.xuat();
    cout<<"\nhoc sinh 2";
    // cout<<"\n ten:\t"<<hs.ten;=>sai vi ten trong private

    hs2.xuat();
    // cach ten ne

  cout<<"\n ten la:\t"<<hs.getter_ten();
  //xuat ten ma duoc thay doi roi ne

   hs.setter_ten("min ne");
   cout<<"\n ten sau ne:\t"<<hs.getter_ten();





    return 0;
}
