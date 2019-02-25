#include <iostream>
#include<math.h>
using namespace std;
//T=(x,n)=x^n
float dequi(float x,int n)//n=5 x=2^5*dequi(4)
{
    if(n==0)
    {
        return 1;
    }



    if(n>0)
    {
        return pow(x,1)*dequi(x,n-1);//x^1*x^1*x^1=X^3
    }
     return  (1.0/x)*dequi(x,n+1);// 1/x *1/x*1/x=x^-3
}
float khudequi(int x,int n)
{
    if(n>0)
    {
        float tong =x;
        for(int i=2;i<=n;i++)
        {
            tong*=pow(x,1);
        }
        return tong;
    }
    if(n<0)
    {
        float tong=1.0/x;
        for(int i=n;i<=-2;i++)
        {
            tong*=1.0/x;

        }
        return tong;
    }
    return 1;
}
float dequiduoi(float x,int n,float dieukiendung=1)
{
    if(n==0)
    {
        return dieukiendung;
    }
    if(n>0)
    {
        return dequiduoi(x,n-1,dieukiendung*(pow(x,1)));
    }
    return dequiduoi(x,n+1,dieukiendung*(1.0/x));
}

int main()
{
    float x=2.0;
    int n=-5;
    cout<<"\n de qui ="<<dequi(x,n);
    cout<<"\n khu de qui ="<<khudequi(x,n);
    cout<<"\n de qui duoi ="<<dequiduoi(x,n);
    return 0;
}
