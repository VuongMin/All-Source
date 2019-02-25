#include <iostream>

using namespace std;
//s(n)=1^2+2^2+...+n^2
//dieu kien dung la 1 ->vi 1^2=1
int dequi(int );
int khudequi(int );
int dequiduoi(int,int);
int main()
{
    int n=5;
    int x=1;
    cout<<"\n De qui="<<dequi(n);
    cout<<"\nkhu de qui="<<khudequi(n);
    cout<<"\n de qui duoi="<<dequiduoi(n,x);

    return 0;
}
int dequi(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*n+dequi(n-1);
}
int khudequi(int n)
{
    int Tong=1;
    for(int i=2;i<=n;i++)
    {
        Tong+=i*i;
    }
    return Tong;
}
int dequiduoi(int n,int x=1)
{
    if(n==1)
    {
        return x;//return x de khi de qui thi key qua la x->vi x luon duoc cap nhat lai
    }
    return dequiduoi(n-1,x+(n*n));
}
