#include <iostream>
#include<math.h>
using namespace std;
//s(n)=x +x^3 +x^5+...+x^2n+1
double dequi(float x,int n)
{
    if(n==0)
    {
        return x;
    }
    return pow(x,(2*n+1))+dequi(x,n-1);
    // n==3 2  1 0|2^7+2^5+2^3+ x
}
double khudequi(float x,int n)
{
    float Tong=x;
    for(int i=1;i<=n;i++)
    {
        Tong +=pow(x,2*i+1);
    }
    return Tong;
    //x=2
    //n==3 | Tong=2 +2^3+2^5+2^7
}
double dequiduoi(int n,float x,float z=0)
{
    if(n==0)
    {
        return z+x;
    }
    return dequiduoi(n-1,x,z+pow(x,2*n+1));
    //n==3  2 1 0 | z=0+2^7+2^5+2^3+... thieu

}
int main()
{
  int n=5;
  float x=2.0;
  cout<<"\n de qui ="<<dequi(x,n);
  cout<<"\n khu de qui ="<<khudequi(x,n);
  cout<<"\n de qui duoi ="<<dequiduoi(n,x);
    return 0;
}
