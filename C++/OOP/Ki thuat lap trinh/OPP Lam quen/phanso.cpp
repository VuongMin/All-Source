#include<iostream>
using namespace std;
/* viet  chuong trinh nhap vao 1 phan so.cho biet phan so do am hay duong hay bang 0
*/
class phanso
{
 private:
     int tuso,mauso;
 public:
    void nhap()
    {
        cout<<"\n nhap vao tu so:\t";
        cin>>this->tuso;
        cout<<"\n nhap vao mau so:\t";
        cin>>mauso;
    }
    void xet()
    {
       if(tuso==0||mauso==0)
       {
           cout<<"\n phan so bang 0";
       }
       else if(tuso<0||mauso<0)
       {
           cout<<"\n phan so am!";

       }
       else
       {
           cout<<"\n phan so duong!";
       }
    }

    void xuat()
{
    cout<<"\n phan so:\t"<<tuso<<"/"<<mauso<<endl;
    xet();
}
};

int main()
{
    phanso ps;
    ps.nhap();
    ps.xuat();
    return 0;
}
