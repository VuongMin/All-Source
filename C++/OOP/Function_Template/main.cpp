#include <iostream>
#include<string>
using namespace std;
 //viet  Ham Hoan doi vi tri ap dung cho auto Kieu du lieu
 template<class kieu>//Khong co dau cham phay nhe
 void  Hoanvi(kieu &a,kieu &b)
 {
    kieu Temp=a;
    a=b;
    b=Temp;
 }


int main()
{
    //float a=2.3;
    //float b=5.6;
    string a="Minh";
    string b="Vuong";
    Hoanvi(a,b);
    cout<<"\n Sau Hoan vi\n";
    cout<<"\n a="<<a<<"\n B= "<<b;
    return 0;
}
