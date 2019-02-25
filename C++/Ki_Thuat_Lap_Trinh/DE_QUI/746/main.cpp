#include <iostream>
#include<math.h>
using namespace std;
int giaithua(int n)
{
    int giaithua=1;
    for(int i=2;i<=n;i++)
    {
        giaithua*=i;
    }
    return giaithua;
}
double dequi(int n,float x)
{
    if(n==0)
    {
        return 1;
    }
    return pow(x,2*n)/giaithua(2*n)+dequi(n-1,x);
}
double khudequi(int n,float x)
{
   float Tong=1;
   for(int i=1;i<=n;i++)
   {
       Tong+=pow(x,2*i)/giaithua(2*i);
   }
   return Tong;
   //n==3 |tong=1+2^1/2!

}
double dequiduoi(int n,float x,float z=0)
{
    if(n==-1)
    {
        return z;
    }
    return dequiduoi(n-1,x,z+pow(x,2*n)/giaithua(2*n));
}

int main()
{
    int n=5;
    float x=2.0;
    //s(n)=1+x^2/2!+x^4/4!+..+x^2n/(2n)!
    cout<<"\n de qui ="<<dequi(n,x);
    cout<<"\n khu de qui ="<<khudequi(n,x);
    cout<<"\n DE qui duoi ="<<dequiduoi(n,x);
    return 0;
}
