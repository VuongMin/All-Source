#include<iostream>
#include<math.h>
using namespace std;
/*
4. Kiểm tra 1 số nguyên dương x có phải là số chính phương hay không ?

Định nghĩa số chính phương: Là số mà kết quả khai căn bậc 2 của nó
là 1 số nguyên. vd: 0, 1, 4, 9, 16, 25, 36
*/
int main()
{
    int x;
    cout<<"\n nhap x: ";
    cin>>x;
    float t=sqrt(x);

    //day la phuong thuc ap dung ep kieu
    if(t==(int)t)
    //if(t=pow(t,2))
    {

        cout<<"\n so "<<x<<" la so chinh phuong";
    }

    return 0;
}

