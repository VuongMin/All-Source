#include <iostream>

using namespace std;

int main()
{
//    int mang[]={1,5,9};
//    int *controint=0;
//    cout<<"\n "<<mang[0]<<" "<<&mang[0];
//    controint=&mang[0];
//    cout<<"\n "<<*controint<<" "<<controint<<" "<<&controint;
//    controint=mang;//vi tri dau tien cua mang[0]==mang
//    cout<<"\n "<<*controint<<" "<<controint;
///Tiep-Theo
int a[]={1,5,9,10,25};
int *poiter=a;//<=>&a[0];
poiter+=2;//tro den a[2]//
cout<<"\n gia tri ="<<*poiter<<" "<<poiter;
cout<<"\n";

    return 0;
}
