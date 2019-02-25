#include <iostream>

using namespace std;
//s(n)=1/1*2+1/2*3+...+1/n*(n+1)
//dieu kien dung n==1
float dequi(int n)
{
    if(n==1)
    {
        return 1.0/2;
    }
    return 1.0/(n*(n+1))+dequi(n-1);
}
float khudequi(int n)
{
    float Tong =1.0/2;
    for(int i=2;i<=n;i++)
    {
        Tong+=1.0/(i*(i+1));
    }
    return Tong;
}
float dequiduoi(int n,float x=1.0/2)
{
    if(n==1)
    {
        return x;
    }
    return dequiduoi(n-1,x+(1.0/(n*(n+1))));
}
int main()
{
   int n =5;
   cout<<"\n de qui ="<<dequi(n);
   cout<<"\n Khu de qui ="<<khudequi(n);
   cout<<"\n DE QUI DUOI ="<<dequiduoi(n);
    return 0;
}
