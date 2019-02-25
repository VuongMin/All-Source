#include <iostream>

using namespace std;
//s(n)=1+1/3+1/5+...+1/2n+1
//dieu kien dung n==0->1/2*0+1  <=> 1/1
float dequi(int n)
{
    if(n==0)//neu n==0 thi return lai so 1
    {
        return 1;
    }
    return 1.0/((2*n)+1)+dequi(n-1);
}
float khudequi(int n)
{
    float tong=0;
    for(int i=0;i<=n;i++)
    {
        tong+=1.0/((2*i)+1);
    }
    return tong;
}
float dequiduoi(int n,float x=1)
{
    if(n==0)
    {
        return x;
    }
    return dequiduoi(n-1,x+(1.0/((2*n)+1)));
}
int main()
{
    int n=5;
    cout<<"\n de qui="<<dequi(n);
    cout<<"\n Khu de qui="<<khudequi(n);
    cout<<"\n De qui duoi = "<<dequiduoi(n);
    return 0;
}
