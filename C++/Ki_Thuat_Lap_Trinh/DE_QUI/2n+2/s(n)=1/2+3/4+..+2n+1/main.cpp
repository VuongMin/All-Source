#include <iostream>

using namespace std;
//s(n)=1/2+3/4+...+(2n+1)/(2n+2)
//dieu kien dung n==0
float dequi(int n)
{

    if(n==0)
    {
        return 1.0/2;
    }
    return (2.0*n+1)/(2.0*n+2.0)+dequi(n-1);


}
float khudequi(int n)
{
    float tong =0;
    for(int i=0;i<=n;i++)//i=0 de lan chay day tien ==1/2
    {
        tong+=(2.0*i+1)/(2.0*i+2);

    }
    return tong;
}
float dequiduoi(int n,float x=1.0/2)
{
    if(n==0)
    {
        return x;
    }
    return dequiduoi(n-1,x+(2.0*n+1)/(2.0*n+2));
}
int main()
{
    int n=5;
    cout<<"\n de qui ="<<dequi(n);
    cout<<"\n Khu de qui ="<<khudequi(n);
    cout << "\n de qui duoi =" <<dequiduoi(n);
    return 0;
}
