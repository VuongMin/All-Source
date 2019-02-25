#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
    //dat ten cho vecto
    vector<int>a;
    int n,i,x,xoa;
    //cap phat bo nho cho vecto a kieu int
    vuongmin:

        cout<<"\n nhap vao so luong phan tu:\t";
        cin>>n;

  //cap phat bo nho vecto
    a.resize(n);

    for(int i=0;i<n;i++)
    {
        a[i]=i+1;

    }
    /*note:*moi dau kich thuoc cua mang la chinh n.khi ta muon them 1 so or( kieu sinh vien,hoten)
    vao cuoi thi dung ham fush_back*/
    //ham them cuoi...<ten vecto>.<push_back(< so muon add>)>.

        /*luc nay da duoc them va size tu tang len la n+1!*/
        a.push_back(100);

        // a.pop_back();ham xoa cuoi

    int size=a.size();//ham lay size!
    cout<<"\n size  :\t"<<size<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<"   ";
    }



        cout<<"\n nhap vao vi tri can tim:\t";
        cin>>x;
        //ham -at-: <ten vecto>.<at(<vi tri can tim>)>
        cout<<"\n ket qua tai vi tri a["<<x<<"]:\t"<<a.at(x);
        cout<<"\n ban muon xoa phan tu tai vi tri :\t";
        cin>>xoa;
        a.erase(a.begin()+xoa);




  /* vi khi chung ta nhap thi gia tri n dau tien da duoc luu trong n.khi chung tang size bang cac ham(push_back,insert...)
  thi n dc luu vang nhu cu khi ta xuat ra cai xoa thi chi cho no chay den n hoac cai size ma minh tao o tren

  va cho no -1 don vi .vi chi xoa di 1 so,neu xoa 2 hoac nhieu hon thi - so xoa do!! */
    for(int i=0;i<size-1;i++)//or i<n cung duoc
    {
        cout<<a[i]<<"   ";
    }




int repeat;
cout<<"\n Would you like to continue. If yes choose '1'. if not get any other keys.";

cin>>repeat;


if(repeat==1)
{
    system("cls");//xoa man hinh
    goto vuongmin;
}


   system("pause");
  return 0;
}
