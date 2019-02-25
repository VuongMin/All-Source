#include <iostream>

using namespace std;
void input(int *,int  );
void Export(int *,int );
bool Mangchan(int *,int );
void Textnguyento(int *,int );
void Textgiatang(int *,int );
int countx(int *,int );
int Tongnguyento(int *,int);
void Fitsnguyento(int *,int );
int SoduongMin(int *,int );
int Timmin(int *,int );
int Nguyento(int );
void SortGiam(int *,int );
void TachMangA(int *a,int *b,int *c,int n,int Tangb=0,int Tangc=0);

int vitriTailp(int *a,int n)
{
    return a[n-1];
}
void MangB_NgT(int *a,int n,int *b,int Tang=0)
{

    for(int i=0; i<n; i++)
    {
        if(Nguyento(a[i])==1)
        {

            b[Tang++]=a[i];

        }
    }
    if(Tang!=0)
    {
        Export(b,Tang);
        cout<<"\n";
        Export(a,n);
    }
    else
    {
        cout<<"\n Mang b khong duoc Tao!";
    }
}


int main()
{

    int *a=0,n;
    do
    {
        cout<<"\n Nhap vao so luong phan tu:\t";
        cin>>n;
        if(n<1)
        {
            cout<<"\n Vui Long kiem tra lai!";
        }

    }
    while(n<0);
    a=new int[n];//luc mang chua co thi cap phat bang n nhe
    input(a,n);
//     Export(a,n);
cout<<"\n Mang_giam _dan:\t";
       SortGiam(a,n);
//     if(Mangchan(a,n)==false)
//     {
//         cout<<"\n Mang KHONG CHAN!";
//     }
//     else
//     {
//         cout<<"\n Mang chan !";
//
//     }
//     Textnguyento(a,n);
//     Textgiatang(a,n);
//     cout<<"\n so luong cac so chia het cho 4 nhung khong chia het cho 5 ="<<countx(a,n);
//     cout<<"\n TONG cac so Nguyen To ="<<Tongnguyento(a,n);
//     cout<<"\n Vi tri cuoi a["<<n-1<<"]="<<vitriTailp(a,n);
//     Fitsnguyento(a,n);
//     cout<<"\n so nho Nhat = "<<Timmin(a,n);
//
    cout<<"\n So Duong Nho Nhat ="<<SoduongMin(a,n);
    cout<<"\n Mang- nguyen - To - b :\t";
    int *b=0;
    b=new int;// vi no la mot mang hoan toan moi nen can cap phat
    MangB_NgT(a,n,b);
    int *c=0;
    c=new int;
    TachMangA(a,b,c,n);
    delete[] a;
    delete[] b;
    delete[] c ;

    return 0;
}

void input(int *a,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"\n Nhap vao Phan Tu thu a["<<i<<"]:\t";
        cin>>a[i];
    }
}
void Export(int *a,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
bool Mangchan(int *a,int n)
{

    for(int i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {
            return false;
        }
    }
    return true;
}
int Nguyento(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2; i<n; ++i)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

}
void Textnguyento(int *a,int n)
{
    for(int i=0; i<n; i++)
    {
        if(Nguyento(a[i])!=1)
        {
            cout<<"\n Mang khong nguyen to!";
            return;
        }
    }
    cout<<"\n Mang Nguyen TO!";
}
void Textgiatang(int *a,int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                cout<<"\n Mang Khong Tang dan!";
                return;
            }
        }
    }
    cout<<"\n Mang Tang dan!";
}
int countx(int *a,int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%4==0&&a[i]%5!=0)
        {
            count ++;
        }
    }
    return count;
}
int Tongnguyento(int *a,int n)
{
    int Tong=0;
    for(int i=0; i<n; i++)
    {
        if(Nguyento(a[i])==1)
        {
            Tong+=a[i];
        }
    }
    return Tong;

}
void Fitsnguyento(int *a,int n)
{

    for(int i=0; i<n; i++)
    {
        if(Nguyento(a[i])==1)
        {
            cout<<"\n vi tri dau tien  nguyen to = "<<a[i];
            break;
        }
    }


}
int Timmin(int *a,int n)
{
    int min=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }

    }
    return min;
}
int SoduongMin(int *a,int n)
{
    int soduongdautien=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            soduongdautien=a[i];
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>=0&&a[i]<soduongdautien)
        {
            soduongdautien=a[i];
        }
    }
    return soduongdautien;
}
void TachMangA(int *a,int *b,int *c,int n,int Tangb,int Tangc)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]>=0)
        {
            b[Tangb++]=a[i];
        }
        else
        {
            c[Tangc++]=a[i];
        }
    }
    cout<<"\n MANG -B-DUONG:\t";
    Export(b,Tangb);
    cout<<"\n MANG -C-AM:\t";
    Export(c,Tangc);
}
void SortGiam(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    Export(a,n);
}
