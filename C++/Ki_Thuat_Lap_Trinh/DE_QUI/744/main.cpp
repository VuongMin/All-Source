#include <iostream>

using namespace std;
//s(n)=1+1/1+2+1/1+2+3+..+1/1+2+3+..+n
float dequi(int n)
{
    if(n==1)
    {
        return 1;
    }
    int Tong=1;
    for(int i=2;i<=n;i++)
    {
        Tong+=i;
    }
    return 1.0/Tong+dequi(n-1);
}
float khudequi(int n)
{
    float Tong =1;
    float Sum=1;
    for(int i=2;i<=n;i++)
    {
        Tong+=i;
        Sum+=1.0/Tong;
    }
    return Sum;
    //n==3 | sum=
}
double dequiduoi(int n,float x=1)
{
    if(n==1)
    {
        return x;
    }
    int tong=1;

    for(int i=2;i<=n;i++)
    {
        tong+=i;
    }
    return dequiduoi(n-1,x+1.0/tong);
    //n==3 2  1| x=1 +1/6 + 1/3

}
int main()
{
    int n=5;

    cout<<"\n de qui ="<<dequi(n);
    cout<<"\n khu de qui ="<<dequi(n);
     cout<<"\n de qui duoi ="<<dequiduoi(n);
    return 0;
}
