#include <iostream>

using namespace std;
///S = 1 + 2 + … + n
int sum0(int n)
{
    int sum=0;
    for(int i=1;i<=n;++i)
    {
        sum+=i;
    }
    return sum;

}
///S = 12 + 22 + … + n2
int sum1(int n)
{
   int sum=0;
   //dat ben ngoai vong for ..dat trong no se bi sai vi no ko cap nhat lai ma cong don
   int temp=12;
 for(int i=1;i<=n;++i)
     {

         sum+=temp;
         temp+=10;

     }
 return sum;
}
///S = 1 + 1/2 + … + 1/n
 float dequi(int n)
 {
     if(n==1)
     {
         return n;
     }
     return dequi(n-1)+1.0/n;
 }
 //khu de qui
 float khudequi(int n)
 {
      float sum=0;
     for(int i=1;i<=n;i++)
     {
       sum+=1.0/i;
     }
     return sum;
 }
 ///S = 1 * 2 * … * n
 int sumdequi(int n)
 {
     if(n==1)
     {
         return n;
     }
     return sumdequi(n-1)*n;
 }
 ///S = 1! + 2! + … + n!
 int sumgiathua(int n)
 {
     int giaithua=1;
     int sumgiaithua=0;
     for(int i=1;i<=n;i++)
     {
         giaithua*=i;
         sumgiaithua+=giaithua;
     }
     return sumgiaithua;
 }
 ///Hàm trả về USCLN của 2 số nguyên.
 int ucln(int a,int b)
 {
     int min=a<b?a:b;
     int max=a>b?a:b;


     if(max%min==0)
     {
         return min;
     }
     for(int i=min/2;i>=1;i--)
     {
         if((min%i==0)&&(max%i==0))
         {
             return i;
         }
     }
     return 0;
 }
  int  UCLN(int n)
  {
      int digit=n%10;
      int phannguyen=n/10;
       int uoc= ucln(digit,phannguyen);
       return uoc;

  }
  ///In ra n phần tử của dãy Fibonacy.
  void infibonacy(int n)
  {
      int a1=1,a2=1;
      if(n==1)
      {
          cout<<a1;

      }


      if(n==2)
      {
            cout<<a1<<" "<<a2;

      }

      else
      {
          cout<<a1<<" "<<a2<<" ";
          //n=3 lap 1 lan
          //n=4 lap 2 lan
          //n=5 lap 3 lan
          for(int i=1;i<=n-2;i++)
          {
              int an=a1+a2;
              cout<<an<<" ";
               a1=a2;
               a2=an;

          }

      }


  }


int main()
{

    int n;
    do
    {
        cout<<"\n nhap N =:\t";
        cin>>n;
        if(n<1)
        {
            cout<<"\n N>0! ";
        }

    }while(n<1);
      cout<<"\n---FIBONACY---";
    infibonacy(n);

    cout<<"\n Tong (1-n)="<<sum0(n);
    cout<<"\n Tong (12-n2)="<<sum1(n);
    cout<<"\n De qui ="<<dequi(n);
    cout<<"\n Khu De qui ="<<khudequi(n);
    cout<<"\n TONG (1*n)="<<sumdequi(n);
    cout<<"\n Tong giai thua="<<sumgiathua(n);
    if(n<10||n>99)
    {
        cout<<"\n Khong choi";
    }
    else
    {
        cout<<"\n Uoc Chung Lon Nhat ="<<UCLN(n);
    }

    return 0;
}
