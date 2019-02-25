#include <iostream>

using namespace std;
void Tinh_toan(int n,int He)
{
    if(He==2)
    {
        int PhanTu=0;
        int *a=new int;
        int Temp=n;
        while(Temp!=0)
        {
            int Bien_Mang=Temp%2;
            *(a+PhanTu)=Bien_Mang;
            PhanTu++;
            Temp/=2;
        }
        for(int i=PhanTu-1;i>=0;i--)//Tai vi khong ton tai o a[phatu];(0->n-1)
        {
            cout<<a[i]<<" ";
        }

    }
    else if(He==8)
    {
        int PhanTu=0;
        int *a=new int;
        int Temp=n;
        while(Temp!=0)
        {
            int Bien_Mang=Temp%8;
            *(a+PhanTu)=Bien_Mang;
            PhanTu++;
            Temp/=8;
        }
        for(int i=PhanTu-1;i>=0;i--)//Tai vi khong ton tai o a[phatu];(0->n-1)
        {
            cout<<a[i]<<" ";
        }

    }
    else
    {

        int PhanTu=0;
        char *a=new char;
        int Temp=n;
        while(Temp!=0)
        {
            int Bien_Mang=Temp%16;
            if(Bien_Mang>9)
            {
                switch(Bien_Mang)
            {
            case 10:
                {
                    Bien_Mang='A';
                    break;
                }
                case 11:
                {
                    Bien_Mang='B';
                    break;
                }
                case 12:
                {
                    Bien_Mang='C';
                    break;
                }
                case 13:
                {
                    Bien_Mang='D';
                    break;
                }
                case 14:
                {
                    Bien_Mang='E';
                    break;
                }
                case 15:
                {
                    Bien_Mang='F';
                    break;
                }

            }
            *(a+PhanTu)=Bien_Mang;
            PhanTu++;
            }
            else
            {
                *(a+PhanTu)=Bien_Mang+48;
            PhanTu++;
            }

            Temp/=16;
        }
        for(int i=PhanTu-1;i>=0;i--)//Tai vi khong ton tai o a[phatu];(0->n-1)
        {
            cout<<a[i]<<" ";
        }

    }
}

int main()
{
    int n=0;
    do
    {
        cout<<"\n Nhap vao n:\t";
        cin>>n;

    }while(n<=0);

    cout<<"\n ------------Menu----------------\n";
    cout<<"\n He 2 : \t2";
    cout<<"\n He 8 :  \t8";
    cout<<"\n He 16:\t 16";
    cout<<"\n---------------------------------\n";
    int He=0;
    do
    {
        cout<<"\n Nhap vao he:\t";
        cin>>He;
        if(He!=2&&He!=8&&He!=16)
        {
            cout<<"\n He khong Hop le!";
        }

    }while(He!=2&&He!=8&&He!=16);
     Tinh_toan(n,He);
    return 0;
}
