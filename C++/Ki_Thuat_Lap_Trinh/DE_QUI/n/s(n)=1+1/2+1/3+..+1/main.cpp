#include <iostream>

using namespace std;
//s(n)=1+1/2+...+1/n
double dequi(int n)//n=5->1/5+dequi(4)
{
    if(n==1)
    {
        return 1;
    }
    return 1.0/n+dequi(n-1);
}
double khudequi(int n)
{
    double Tong=1;
    for(int i=2;i<=n;i++)
    {
        Tong+=1.0/i;

    }
    return Tong;
}
double dequiduoi(int n,float x=1)//luon can than kieu du lien em nhe

{
    if(n==1)
    {
        return x;
    }
    return dequiduoi(n-1,x+(1.0/n));
}



int main()
{
 int n=5;
 cout<<"\n DE QUI ="<<dequi(n);
 cout<<"\n KHU DE QUI ="<<khudequi(n);
 cout<<"\n DE QUI DUOI ="<<dequiduoi(n);
    return 0;
}
