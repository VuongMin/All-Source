#include <iostream>

using namespace std;
//Nhap Mang
void Input(int *&a,int &n)//boi vi con tro cung la 1 bien va muon no thay doi gia thi phai refenfer
{
    do
    {
        cout<<"\n Nhap vao n:\t";
        cin>>n;
        if(n<=0)
        {
            cout<<"\n N khong hop le!";
        }

    }
    while(n<=0);
    ///CAP-PHAT-bO -nHO
    //NOTE: ->chung ta co the tao tao 1 con tro de truy mang a[] bang cach gian tiep nhung o day da khai bao con tro
    //chu khong  khai bao tham so a[]
    a=new int[n];
    for(int i=0; i<n; i++)
    {
        cout<<"\n NHap vao a["<<i<<"]:\t";
        cin>>*(a+i);//<=>a[i](c++)<=>&a[i](C)<=>*(a++)
    }
}
void Export(int *a,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<*(a++)<<" ";
    }
}
/*Cach-Thao-Tac-KIEM-Tra*/
//Mảng có phải là mảng toàn chẵn
int Text_Chan(int *a,int n)
{
    for(int i=0; i<n; i++)
    {
        if(*(a+i)%2!=0)
        {
            return 0;
        }
    }
    return 1;
}
//Mảng có phải là mảng toàn số nguyên tố
bool Text_NgTo(int x)
{
    if(x<2)
    {
        return false;
    }
    else
    {
        for(int i=2; i<x; i++)
        {
            if(x%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
int Mang_nguyento(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        if(Text_NgTo(a[i])==false)
        {
            return 0;
        }
    }
    return 1;
}
//Mảng có phải là mảng tăng dần
int Text_Tangdan(int *a,int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<=a[j])
            {
                return 0;
            }

        }
    }
    return 1;
}
                  /*Các thao tác tính toán*/
//Có bao nhiêu số chia hết cho 4 nhưng không chia hết cho 5
int count_chia(int *a,int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(*(a+i)%4==0&&a[i]%5!=0)
        {
            dem++;
        }
    }
    return dem;
}
//Tổng các số nguyên tố có trong mảng
int  sum_NgTo(int *a,int n)
{
    int tong=0;
    for(int i=0;i<n;i++)
    {
        if(Text_NgTo(a[i]))
        {
            tong+=a[i];
        }
    }
    return tong;
}
                  /*Các thao tác tìm kiếm*/
//Vị trí cuối cùng của phần tử x trong mảng
void position_Last(int *a,int n,int &x)
{
    cout<<"\n Nhap vao x can tim:\t";
    cin>>x;
    int position=-1;//khong de 0 duoc vi no co 0 a[0]!con i thi gan roi nen ko lo
    for(int i=0;i<n;i++)
    {
        if(*(a++)==x)
        {
            position=i;//vi Tri ne!
        }
    }
    if(position!=-1)
    cout<<"\n VI tri cuoi x = a["<<position<<"]!";
    else
        cout<<"\n Khong Ton Tai cAi x Do!!hi";
}

//Vị trí số nguyên tố đầu tiên trong mảng nếu có
int  search_NgToFis(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        if(Text_NgTo(a[i]))
        {
            return i;//Tra ve vi tri dau tien
        }
    }
    return 0;
}
//Tìm số nhỏ nhất trong mảng
void Tim_Min(int *a,int n)
{
    int Min=a[0];
    for(int i=0;i<n;i++)
    {
        if(*(a+i)<Min)
        {
            Min=a[i];
        }
    }
    cout<<"\n So nho nhat = "<<Min;
}
//Tìm số dương nhỏ nhất trong mảng
void Tim_Minduong(int *a,int n)
{
    int Min_duong=0;
    bool check=false;
    for(int i=0;i<n;i++)
    {
        if(*(a+i)>=0)
        {
            Min_duong=a[i];
            check=true;
        }
    }
    if(check==false)
    {
        cout<<"\n Khong Ton tai so duong Trong mang nay!";
        return;//ngung->vi no o trong ham nen dc su dung nhu vay
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]<Min_duong&&a[i]>=0)
            {
                Min_duong=a[i];
            }
        }
    }
    cout<<"\n So duong Nho nhat trong mang = "<<Min_duong;
}

int main()
{
    //cap phat ngoai ham int main() dung refencen hoac con tro cap 2
    int *a=NULL;//khong tro vao dau ca!
    int n=0;
    Input(a,n);
    Export(a,n);
    if(Text_Chan(a,n)!=1)
    {
        cout<<"\n Mang ko  Toan chan!";
    }
    else
        {
            cout<<"\n mANG chan!";
        }
    if(Mang_nguyento(a,n)==1)
    {
        cout<<"\n Mang nguyen to!";
    }
    else
    {
        cout<<"\n Mang kHONG tOAN nguyen to!";
    }
    if(Text_Tangdan(a,n)==1)
    {
        cout<<"\n Mang Tang dan!";
    }
    else
    {
        cout<<"\n Mang khong tang dan!";
    }
    //Thao Tac Tinh Toan
    cout<<"\n SO luong so chia het cho 4 ,khong chia het 5 = "<<count_chia(a,n);
    cout<<"\n Tong cac so nguyen to trong mang = "<<sum_NgTo(a,n);
    int x=0;
    position_Last(a,n,x);
    int Tim_=search_NgToFis(a,n);
    if(Tim_==0)
    {
        cout<<"\n Mang Khong co  so nguyen to!";
    }
    else
    {
        cout<<"\n SO nguyen to dau tien tai a["<<Tim_<<"] !";
    }
    Tim_Min(a,n);
    Tim_Minduong(a,n);
//Xoa mang con tro
 delete[] a;
    return 0;
}
