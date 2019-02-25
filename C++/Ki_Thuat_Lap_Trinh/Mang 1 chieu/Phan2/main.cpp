  #include <iostream>
#define max 100
#include<stdlib.h>
#include<conio.h>
using namespace std;
void  arrgiam(int a[],int n);
void arrTang(int a[],int n);
void input(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"\n Nhap Vi Tri a["<<i<<"] :\t";
        cin>>a[i];
    }
}
void Export(int a[],int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<"\t"<<a[i];
    }
}
///Tim Nguyen To Ne
int NguyenTo(int x)
{
    if(x<2)
    {
        return 0;
    }
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;

}
void NguyenToMang(int a[],int n,int b[],int c[],int Tang=0,int dem=0)
{


    for(int i=0; i<n; i++)
    {
        if(NguyenTo(a[i])==1)
        {
            b[dem++]=a[i];
        }
        else
        {
            c[Tang++]=a[i];
        }
    }
//  cout<<"\n MANG A \n";
//o day se khong cho no xuat ra mang a bang cach reset lai n->ko delete dc ...vi ko phai con tro!
//    n=0;
//    Export(a,n);


    if(dem==n)
    {
        cout<<"\n MANG Nguyen To  \n";
        for(int i=0; i<dem; i++)
        {
            cout<<"\t"<<b[i];
        }


    }
    else
    {
         cout<<"\n Mang  Con Lai  sau khi Da cHuyen So nguyen To Qua \n";
    for(int i=0; i<Tang; i++)
    {

        cout<<"\t"<<c[i];
    }
    cout<<"\n MANG Nguyen To  \n";
        for(int i=0; i<dem; i++)
        {
            cout<<"\t"<<b[i];
        }
    }



}
///Tách mảng a thành 2 mảng b (chứa các số nguyên dương) và c
///(chứa các số còn lại)
void Tach(int a[],int b[],int c[],int n)
{
    int dem=0;
    int Tang=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>=0)
        {
            b[dem++]=a[i];
        }
        else
        {
            c[Tang++]=a[i];
        }
    }
    n=0;//de mang a ko the xuat ra<=>xoa mang a
    cout<<"\n Mang  toan Nguyen Duong\n";
    for(int i=0; i<dem; i++)
    {
        cout<<"\t"<<b[i];
    }
    cout<<"\n Mang  Cac so Am\n";
    for(int i=0; i<Tang; i++)
    {
        cout<<"\t"<<c[i];
    }
}
//Tim Kiem
int Timkiem(int a[],int n,int &x)
{
    cout<<"\n NHap x an Tim:\t";
    cin>>x;
    for(int i =0; i<n; i++)
    {
        if(x==a[i])
        {
            cout<<"\n x Tai Vi tri a["<<i<<"]";
            return 1;
        }
    }
    return 0;
}
//GOP mang
void Gopmang (int a[],int b[],int c[],int &A,int &B,int dem=0)
{
    do
    {
        cout<<"\n*******************************";
        cout<<"\n Nhap  N pHAN Tu:\t";
        cin>>A;
        if(A<1)
        {
            cout<<"\n Kiem tra lai!";
        }
        else
        {

            input(a,A);
        }


    }
    while(A<1);
    do
    {
        cout<<"\n*******************************";
        cout<<"\n Nhap  N pHAN Tu:\t";
        cin>>B;
        if(B<1)
        {
            cout<<"\n Kiem tra lai!";
        }
        else
        {

            input(b,B);
        }

    }
    while(B<1);


    for(int i=0; i<A; i++)
    {
        c[dem++]=a[i];

    }
    for(int i=0; i<B; i++)
    {
        c[dem++]=b[i];
    }
    A=0;//Luc nay 2 mang kia ko con !vi gan =0
    B=0;
    cout<<"\n Gop Mang A-B:\t";
    Export(c,dem);
    // Export(a,A);
    //Export(b,B);

}
//Them Phan Tu Tai vi Tri A[i]
void Add(int a[],int &n,int vitrithem,int SoThem)
{

    for(int i=n; i>vitrithem; i--)
    {
        a[i]=a[i-1];
    }
    n++;
    a[vitrithem]=SoThem;
    //cout<<"\n Mang sau Khi Them Tai vi Tri a["<<vitrithem<<"]";
    //Export(a,n);

}
//Xoa vi tri a[i]
void Dele(int a[],int &n,int vitrixoa)
{

    for(int i=vitrixoa; i<n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
    //cout<<"\n Mang sau khi xoa vi tri a["<<vitrixoa<<"]\n";
    //Export(a,n);

}
// Sắp xếp mảng sao cho các số dương đứng đầu mảng giảm dần,
//kế đến là các số âm tăng dần, cuối cùng là các số 0.
void SortALL(int a[],int n,int b[],int dem=0)
{
    arrgiam(a,n);
    arrTang(a,n);
    Export(a,n);

    /*
    Cach---2
    for(int i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            b[dem++]=a[i];

        }
    }
    arrgiam(b,dem);
    for(int i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            b[dem++]=a[i];
        }
    }
    arrTang(b,dem);
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            b[dem++]=a[i];
        }
    }
    Export(b,dem);
    */


}
//sap xep tat ca so giam dan
void  arrgiamall(int a[],int n)
{
    // 2 1  3 4 5

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }

}

//Sửa các số nguyên tố có trong mảng thành số 0
void ResetNgTo(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        if(NguyenTo(a[i])==1)
        {
            a[i]=0;
        }
    }
    Export(a,n);
}
// Chèn số 0 đằng sau các số nguyên tố trong mảng
void Insert_0(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        if(NguyenTo(a[i])==1)
        {
            Add(a,n,i+1,0);
            i++;//de cho no khong set lai cai so da them!
        }
    }
    Export(a,n);
}
//Xóa tất cả số nguyên tố có trong mảng
void Dele_NgTO(int a[],int &n)
{
    for(int i=0; i<n; i++)
    {
        if(NguyenTo(a[i])==1)
        {
            Dele(a,n,i);
            i--;

        }
    }
}
int main()
{
min:
    system("color 4");
    int a[max],b[max],c[max];

    int n;
    system("color 3");
    do
    {
        cout<<"\n NHap N phan Tu:\t";
        cin>>n;
        if(n<1)
        {
            cout<<"\n Kiem Tra N!";
        }

    }
    while(n<1);
    input(a,n);
    cout<<"\n **Mang vua nhap **\n";
    Export(a,n);
//    Tim-X
    int x=0;
    if(Timkiem(a,n,x)!=1)
    {
        cout<<"\n Khong Thay x !";
    }
    //Mang-Giam-Dan
    cout<<"\n Mang giam dan \n";
    arrgiamall(a,n);
    Export(a,n);

    //Xoa-vitri-a[i]
    int vitrixoa=0;
    do
    {
        cout<<"\n Nhap vao vi tri can xoa:\t";
        cin>>vitrixoa;
        if(vitrixoa<0||vitrixoa>n)
        {
            cout<<"\n Vi tri xoa khong hop le!";
        }

    }
    while(vitrixoa<0||vitrixoa>n);
    Dele(a,n,vitrixoa);
    cout<<"\n Mang-sau-khi-xoa vi tri a["<<vitrixoa<<"]\n";
    Export(a,n);


    //Them-Phan-TU-sau vi-tri -a[i]

    int vitrithem,sothem;
    do
    {
        cout<<"\n Nhap vao vi tri Them:\t";
        cin>>vitrithem;
        if(vitrithem<0||vitrithem>n)
        {
            cout<<"\n Vi Tri Khog Hop LE!";
        }

    }
    while(vitrithem<0||vitrithem>n);
    cout<<"\n Nhap vao so Them:\t";
    cin>>sothem;
    Add(a,n,vitrithem,sothem);
    cout<<"\n **MANG-SAU-KHI -THEM- vi TRi a["<<vitrithem<<"]**\n";
    Export(a,n);
    //Mang-sau-khi-sap-xep-DUONG_GIAM_AM-TANG_0CUOI
    cout<<"\n** Mang sau khi sap xep Duong_Giam,Am_tang,va 0 **\n";
    SortALL(a,n,b);
    cout<<"\n** MANG SAU KHI DA THEM 0 SAU NGUYEN TO**\n";

    Insert_0(a,n);


    //Mang-sau-khi-Tach-am-duong
    Tach(a,b,c,n);
    //RESET-SO-NGUYEN-TO
    cout<<"\n** RESET Nguyen To == 0 tu Mang - b**\n";
    ResetNgTo(a,n);
    //dele nguyen To
    Dele_NgTO(a,n);
    cout<<"\n Mang sau khi xoa cac so nguyen to\n";
    Export(a,n);

    //Gop-mang
    int A,B;
    A=B=0;
    Gopmang(a,b,c,A,B);
    //mang-nguyen-TO
    NguyenToMang(c,n,b,a);
    cout<<"\n Ban Muon tiep tuc Keydown 1";
    char T=getch();
    if(T=='1')
    {
        system("cls");
        goto min;
    }

    return 0;
}
//    Sắp xếp mảng giảm dần
void  arrgiam(int a[],int n)
{
    // 2 1  3 4 5

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }

}
//Tang
void  arrTang(int a[],int n)
{
    // 2 1  3 4 5
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j]&&(a[i]<=0&&a[j]<=0))
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }

}
