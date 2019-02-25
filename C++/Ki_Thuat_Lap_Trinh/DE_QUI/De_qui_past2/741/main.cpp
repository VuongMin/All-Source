#include <iostream>
#include<math.h>
using namespace std;
//s(n)=x^1+x^2+x^3+..x^n
long dequi(int n,int x)
{
    if(n==1)
    {
        return x;
    }
    return pow(x,n)+dequi(n-1,x);
 }
 long khudequi(int x,int n)
 {
     long tong=x;
     for(int i=2;i<=n;i++)
     {
         tong+=pow(x,i);
     }
     return tong;
 }
 int dequiduoi(int x,int n,int z=0)
 {

     if(n==0)
     {
         return z;
     }
     return dequiduoi(x,n-1,z+pow(x,n));


 }
int main()
{

    int n=5;
    int x=2;
    cout << "de qui ="<<dequi(n,x) << endl;
    cout<<"\n khu de qui ="<<khudequi(x,n);
    cout<<"\n de qui duoi ="<<dequiduoi(x,n);
    return 0;
}
