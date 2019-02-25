#include <iostream>

using namespace std;
//s(n)=1/2+1/4+...+1/2*n
//dieu kien dung 1
float dequi(int n)//n=5->1/10+dequi(4)
{
    if(n==1)
    {
        return 1.0/2;
    }
    return 1.0/(2*n)+dequi(n-1);
}
float khudequi(int n)
{
    float Tong =0;
    for(int i=1;i<=n;i++)
    {
        Tong+=1.0/(2*i);
    }
    return Tong;
}
float dequiduoi(int n,float x=1.0/2) //can than kieu du lieu
{
    if(n==1)
    {
        return x;
    }
    return dequiduoi(n-1,x+(1.0/(2*n)));

}

int main()
{
    int n=1;
    cout<<"\n DE QUI ="<<dequi(n);
    cout<<"\n KHU DE QUI ="<<khudequi(n);
    cout<<"\n De qui duoi="<<dequiduoi(n);


    return 0;
}
