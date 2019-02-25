#include<iostream>
using namespace std;
/*bai 2:nhap vao 2 phan so.tinh tong-hieu-tich-thuong-xet 2 phan so do la am hay duong.
xuat phan so toi gian

*/

class phanso
{
private:
    int tuso,mauso;
public:
    void nhap();
    void xuat();
    float timloai();
    void rutgon();
    //phan so+phan so ra 1 phan so;va  phai truyen 1 phan so co kieu phan so
    phanso tinhtong(phanso);
    phanso tinhhieu(phanso);
    phanso tinhtich(phanso);
    phanso tinhthuong(phanso);
};
//nhap phan so
void phanso::nhap()
{
    cout<<"\n nhap vao tu so:\t";
    cin>>tuso;
    do{
    cout<<"\n nhap vao mau so:\t";
    cin>>mauso;
    if(mauso==0)
    {
        cout<<"\n vui long nhap lai mau so(#0)!";
    }
    }while(mauso==0);
}
//void xuat phan so
void phanso::xuat()
{

    //doi dau lai cho dep:1/-2=>-1/2
    if(mauso<0)
    {
        tuso*=-1;
        mauso*=-1;
    }
    cout<<tuso<<"/"<<mauso<<endl;
}
//tim loai am duong
float phanso::timloai()
{
    //phai ep kieu vi tu so va mau so la int nhung chia nhau se ra float
    return (float)tuso/mauso;
}
//int a ,int b la tu so va mau so thu tuc ham
int ucln(int a,int b)
{
    //quy chuan ve duong vi neu so am ko thuc hien dc
    if(a<0)
    {
        a*=-1;
    }
    if(b<0)
    {
        b*=-1;
    }
    int max=a>b?a:b;
    int min=a<b?a:b;
    if(max%min==0)
    {
        //return la chuong trinh ngung!
        return min;

    }
    for( int i=min/2;i>=1;i--)
    {
        if(min%i==0&&max%i==0)
            //5 8->i=2->i=1


        {
            //tra vi i
            return i;
        }
    }

}
//rutgon
void phanso::rutgon()
{
    //vi cac phuong thuc nam trong class phan so nen cu goi thang cac phuong thuc
     int uc=ucln(tuso,mauso);
     tuso/=uc;
     mauso/=uc;
}
// tinh tong -hieu -tich -thuog
//kieu phan so-tinh tong  this voi phan so ps
phanso phanso::tinhtong(phanso ps)
{
    //tao ra phan so de luu tu va mau!
    phanso tong;
    tong.tuso=tuso*ps.mauso+ps.tuso*mauso;
    tong.mauso=mauso*ps.mauso;
    return tong;

}
phanso phanso::tinhhieu(phanso ps)
{
    phanso hieu;
    hieu.tuso=tuso*ps.mauso-ps.tuso*mauso;
    hieu.mauso=mauso*ps.mauso;
    return hieu;
}
phanso phanso::tinhtich(phanso ps)
{
    phanso tich;
    tich.tuso=tuso*ps.tuso;
    tich.mauso=mauso*ps.mauso;
return tich;
}
phanso phanso::tinhthuong(phanso ps)
{
    phanso nghichdao;
    nghichdao.tuso=ps.mauso;
    nghichdao.mauso=ps.tuso;
    return this->tinhtich(nghichdao);

}

int main()
{

    phanso ps,ps_1;
    ps.nhap();
    ps_1.nhap();

    ps.xuat();
    ps_1.xuat();
    cout<<"\n---phan so sau rut gon--- \n";

    ps.rutgon();

    ps.xuat();
    ps_1.rutgon();
    ps_1.xuat();
    float tim =ps.timloai();

    if(tim<0)
    {
        cout<<"\n ps<0";
    }
    else if(tim==0)
    {
        cout<<"\n ps=0";
    }
    else
    {
        cout<<"\n ps>0";
    }
    phanso tong=ps.tinhtong(ps_1);
    phanso hieu=ps.tinhhieu(ps_1);
    phanso tich=ps.tinhtich(ps_1);
    phanso thuong=ps.tinhthuong(ps_1);
    cout<<"\n*****Tong -Hieu-Tich-Thuong*****\n";
    tong.xuat();
    cout<<"\t"<<"rut gon=>";tong.rutgon();tong.xuat();
    hieu.xuat();
    cout<<"\t"<<"rut gon=>";hieu.rutgon();hieu.xuat();
    tich.xuat();
    cout<<"\t"<<"rut gon=>";tich.rutgon();tich.xuat();
    thuong.xuat();
    cout<<"\t"<<"rut gon=>";thuong.rutgon();thuong.xuat();


    return 0;
}
