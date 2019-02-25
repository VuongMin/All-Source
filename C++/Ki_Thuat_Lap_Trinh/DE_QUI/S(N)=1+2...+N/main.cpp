//S(N)=1+2+...+n
#include <iostream>

using namespace std;
int dequi(int n)
{
    if(n==1)
      {
          return 1;
      }
      return n+dequi(n-1);
}
int khudequi(int n)
{
    int Tong=1;
    for(int i=2;i<=n;i++)
    {
        Tong+=i;
    }
    return Tong;
}
//de qui duoi
int dequiduoi(int n,int x=1)//n=5=>5+dequi(4)
{
    if(n==1)
    {
        return x;
    }
    return dequiduoi(n-1,x+n);
}

int main()
{
    int n=5;
    cout<<dequi(n);
    cout<<"\n"<<khudequi(n);
    cout<<"\n De qui duoi :"<<dequiduoi(n);

    return 0;
}
