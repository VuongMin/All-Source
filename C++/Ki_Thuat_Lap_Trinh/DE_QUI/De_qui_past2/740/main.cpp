#include <iostream>

using namespace std;
//s(n)=1+1*2+1*2*3+....+ ...*n

int dequi(int n)
{
    if(n==1)
    {
        return 1;
    }
    int giaithua=1;
    for(int i=2;i<=n;i++)
    {
        giaithua*=i;
    }
    return giaithua+dequi(n-1);
}
int giaithua(int n)
{
    int gt=1;
    for(int i=2;i<=n;i++)
    {
        gt*=i;
    }
    return gt;
}
int khudequi(int n)
{
    int tong=0;
    int gt=1;
    for(int i=1;i<=n;i++)
    {
       tong+=giaithua(i);
       //  gt*=i;
       //  tong+=gt;
    }
    return tong;
}
int dequiduoi(int n,int x=1)
{
    if(n==1)
    {
        return x;

    }
     int gt=1;
     for(int i=2;i<=n;i++)
     {
         gt*=i;
     }
     return dequiduoi(n-1,x+gt);
}

int main()
{
    int n=5;
    cout<<"\n de qui ="<<dequi(n);
    cout<<"\n Khu de qui ="<<khudequi(n);
    cout<<"\n de qui duoi ="<<dequiduoi(n);
    return 0;
}

