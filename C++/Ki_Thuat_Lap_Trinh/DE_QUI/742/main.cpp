#include <iostream>
#include<math.h>
using namespace std;
//s(n)=x^2+x^4+...+x^2*n
double dequi(float x,int n)
{
    if(n==1)
    {
        return pow(x,2);
    }
    return pow(x,(2*n))+dequi(x,n-1);
    //n= 3  2  1  | 2^6+2^4+2^2
}
double khudequi(float x,int n)
{
    float Tong =pow(x,2);
    for(int i=2;i<=n;i++)
    {
        Tong+=pow(x,(2*i));
    }
    return Tong;
    //n==3  | Tong=2^2+2^4+2^6
}
double dequiduoi(float x,int n,float z=0)
{
    if(n==0)
    {
        return z;
    }
    return dequiduoi(x,n-1,z+pow(x,2*n));
    //n==3  2 1 0 | z=0+2^6+2^4+2^2 tra ve z
}

int main()
{
    int n=5;
    float x = 2.0;

    cout<<"\n de qui ="<<dequi(x,n);
    cout<<"\n khu de qui ="<<khudequi(x,n);
    cout<<"\n de qui duoi ="<<dequiduoi(x,n);
    return 0;
}
