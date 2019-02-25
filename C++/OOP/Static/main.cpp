#include <iostream>

using namespace std;
//Viet Thuoc tinh Tinh va Phuong THUC tinh de dem so lan phan so duoc tao
class Phanso
{
private:
    int Tuso,Mauso;
public:
     static int soLuong ;//Bien Toan cuc de dem
    Phanso()
    {
        soLuong++;// Quan Tam Dem THoi ne!
        Tuso=0;
        Mauso=1;
    }


};
//Ben Ngoai Class Ta Phai Khai Bao Nua
 int Phanso::soLuong;
int main()
{
    Phanso::soLuong=0;//Gan o day ne
    Phanso a,b,c,d,e,f;
    cout<<"\n So Luong Phan so duoc tao :"<<Phanso::soLuong;

    return 0;
}
