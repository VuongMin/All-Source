#include <iostream>

using namespace std;
//s(n)=1*2*3*...*n
int dequi(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*dequi(n-1);
}
int khudequi(int n)
{
    int tong=1;
    for(int i=2;i<=n;i++)
    {
        tong*=i;
    }
    return tong;
}
int dequiduoi(int n,int x=1)
{
    if(n==1)
    {
        return x;
    }
    return dequiduoi(n-1,x*n);
}
int main()
{
    int i=5;
    cout<<"\n de qui ="<<dequi(i);
    cout<<"\n khu de qui ="<<khudequi(i);
    cout<<"\n de qui duoi ="<<dequiduoi(i);
    return 0;
}
