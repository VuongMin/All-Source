//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n=9,m=19;
//    if(n<10&&m<20)
//    {
//        while(n>=1)
//        {
//           while(m>=1)
//           {
//               cout<<m<<" ";
//               m--;
//           }
//           cout<<"\n n: "<<n<<"\n";
//           n--;
//        }
//
//    }
//    cout<<"\n";
//    for(int i=1,j=2;i+j<10;i++,j+=2)
//    {
//        cout<<i+j<<" ";
//    }
//    cout<<"\n";
//    int s;
//    s=1>=2;
//    cout<<s<<endl;
//    int a=1;
//    if(a==0)
//        cout<<"\n a =0";
//    if(a==0)
//    {
//        cout<<"a ==0 !";
//
//    }
//    else
//        cout<<"a !=0";
//    cout<<"\n";
//    for(int i=0;i<10;i+=2)
//    {
//        cout<<i<<" ";
//    }
//    int b=2;
//    int c=1;
//    switch(b)
//    {
//    case 1:
//    {
//        cout<<"\n 1";
//        break;
//    }
//    case 2:
//    {
//        switch(c)
//        {
//        case 1:
//        {
//            cout<<"\n b =1";
//            break;
//        }
//        case 2:
//        {
//            cout<<"\n b=2!";
//            break;
//        }
//        }
//        break;
//    }
//    case 3:
//    {
//        cout<<"\n 3";
//    }
//    }
//    int loidungswitch;
//    cout<<"\n Nhap lua chon:\t";
//    cin>>loidungswitch;
//    switch(loidungswitch)
//    {
//    case 1:
//    case 5:
//    case 7:
//    case 9:
//    case 3:
//        cout<<"\n so le !";
//        break;
//    case 2:
//    case 6:
//    case 8:
//
//
//
//    case 4:
//        cout<<"\n so chan !";
//        break;
//
//    }
//    return 0;
//}
#include<iostream>
#include<string>
using namespace std;
class TenLop
{
private:

    string name;//trong private nen rieng cho class minz
public:
    //ham constructor (Ham dung)
    //Chuc nang: Khoi tao mac dinh
    // kieu khong gia tri tra ve
    ///Co The Co Tham so Hoac khong!
    //CU-PHAP:
    /*
      ->KHONG CO THAM SO
      <ten_lop>()
      {
          name=" Tu Hoc Lap Trinh!";
         cac cau lenh( );
      }

    */
    /*
    =>CO THAM SO TRUYEN VAO
    <ten_lop>( string ten)
    {
      name=ten;
    }
    */
    TenLop()
    {
        name=" Hay ";
        //cout<<" Hay ";
    }
    TenLop(string ten)
    {
        name=ten;
    }

    void setter(string ten)
    {
        name=ten;
        //cout<<name;
    }
    //tra ve cai ten do = kieu du lieu cua ten do da duoc thay doi
    string getter()
    {
        return name+" co Len! ";//cong them 1 chuoi!
    }


};
int main()
{
  TenLop Ten;//khi chay den day la no da chay ngay vao ham constructor
   //string x=" vuong min normal";
  //Ten.setter(x);
   cout<<Ten.getter()<<endl;//xuat ra Ten
   TenLop Ten2("vuongmin normal");
   cout<<Ten2.getter();





    return 0;
}





