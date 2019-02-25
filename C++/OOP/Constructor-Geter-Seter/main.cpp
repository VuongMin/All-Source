#include <iostream>
#include<string>
using namespace std;
class sinhvien
{
private:
    string Ten;
    double Diem;
public:
    void Out();
    //Ham  Default Constructor
    //Khi cu gap den sinhvien o Main() Thi tu no se chay cai ham mac dinh nay
    sinhvien ()
    {
        Ten="Min";
        Diem=6.9;
    }
    //Ham Constructor Co Tham So
    //Neu thuoc tinh co bao nhieu thi phai co bao bien tham so vao de gan luon chu la bi rac
    sinhvien(string t,double d)
    {
        Ten=t;//Gan 2 gia Tri truyen ben ngoai vao trong!
        Diem=d;
    }
    /*=>Ham huy duoc viet khi du liue co con tro
    =>Getter duoc viet khi dung o mot lop khac muon lay du lieu cua lop nay thi viet
    phuong thuc tra ve cai gia tri can lay
    =>setter Thay doi duoc va thuong kieu void giong nhu constructor co tham so vay!
     */
};
void sinhvien::Out()
{
    cout<<"\n Ten:"<<Ten;
    cout<<"\n Diem:"<<Diem;
}
int main()
{
    sinhvien sv1;
    sv1.Out();
    sinhvien sv2("vuongmin",7.9);

    sv2.Out();
      //Ham COPY constructor
      cout<<"\n---- sv3 copy Tu sv1------\n";
    sinhvien sv3(sv1);
    sv3.Out();

    return 0;
}
