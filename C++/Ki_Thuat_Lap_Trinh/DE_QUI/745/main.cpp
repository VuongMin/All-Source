#include <iostream>
#include<math.h>
using namespace std;
//S(N)=x+x^2/2!+x^3/3!+..+x^n/n!
double dequi(float x,int n)
{
    if(n==1)
    {
        return x;
    }
    int giaithua=1;
    for(int i=2;i<=n;i++)
    {
        giaithua*=i;
    }
    return pow(x,n)/giaithua+dequi(x,n-1);
    //n==3 2 1 |2^3/3!+ 2^2/2!+ 2
}
double khudequi(float x,int n)
{    int giaithua=1;
    float Tong=x;
    for(int i=2;i<=n;i++)
    {
        giaithua*=i;
        Tong+=pow(x,i)/giaithua;
    }
        return Tong;

}
float dequiduoi(int n,float x,float z=0)
{
    if(n==0)
    {
        return z;
    }
    int giaithua=1;
    for(int i=2;i<=n;i++)
    {
        giaithua*=i;
    }
    return dequiduoi(n-1,x,z+pow(x,n)/giaithua);
}


int main()
{
    int n=5;
    float x=2.0;

    cout << "de qui =" <<dequi(x,n)<< endl;
    cout<<"\n khu de qui="<<khudequi(x,n);
    cout<<"\n de qui duoi ="<<dequiduoi(n,x);

    return 0;
}
