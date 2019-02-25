#include <iostream>

using namespace std;
void Input(int **a,int &n)//Thay doi  gian tiep gia Tri cua  con tro  mang a!
{
    do
    {
        cout<<"\n Nhap vao n:\t";
        cin>>n;
        if(n<=0)
        {
            cout<<"\n n Khong Hop le!";
        }

    }while(n<=0);
    //cap phat
    *a=new int[n];//chu y:(*a)
    for(int i=0;i<n;i++)
    {
        cout<<"\n Nhap vao a["<<i<<"]:\t";
        cin>>*((*a)+i);//<=>(*a)[i];
    }
}
void Export(int *a ,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
           /*Các thao tác xử lý*/
//Tách các số nguyên tố có trong mảng a đưa vào mảng b.
bool NgTo(int x)
{
    if(x<2)
    {
        return false;
    }
    else
    {
        for(int i=2;i<x;i++)
        {
            if(x%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
void Tach_NgTo(int *a,int n)
{
    //khong duoc giam n vi giam no se lam sai mang ban dau do!
    int *poiter_phu=new int;//o day dia chi la 1 o rieng roi!! neu cho ++ thi sang cai o 4 buyte ke tiep!!rac->bat dau chung gan!
    //int *poiter_phu=new int[n];=>cach 2: tao ra dung N
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(NgTo(a[i]))
        {
              poiter_phu[dem++]=*(a+i);
        }
    }
    cout<<"\n Mang Nguyen To duoc Tach ra \n";
    Export(poiter_phu,dem);
}
//Tách mảng a thành 2 mảng b (chứa các số nguyên dương) và c (chứa các số còn lại)
void Tach_Thanh_TWO(int *a,int n)
{
    int * P_duong=new int;
    int * P_conlai=new int;
    int C_duong=0;
    int C_conlai=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            P_duong[C_duong++]=a[i];
        }
        else
        {
            P_conlai[C_conlai++]=a[i];
        }
    }
    cout<<"\n Mang Toang duong sau Tach \n";
    Export(P_duong,C_duong);
    cout<<"\n Mang con lai sau tach \n";
    Export(P_conlai,C_conlai);

}
//Sắp xếp mảng giảm dần
void Sort_Giamdan(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<*(a+j))
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    Export(a,n);
}
//Sắp xếp mảng sao cho các số dương đứng đầu mảng giảm dần, kế đến là các số âm tăng dần, cuối cùng là các số 0.
///doi voi bai nay chi can duong giam va cho am-0 tang la duoc!!
void Sort_all(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+i)>*(a+j)&&a[i]<=0&&a[j]<=0)
            {
                int Temp=a[i];
                a[i]=a[j];
                a[j]=Temp;
            }
        }
    }
    Export(a,n);
}
            /*Các thao tác thêm/xóa/sửa*/
//Sửa các số nguyên tố có trong mảng thành số 0
//Chèn số 0 đằng sau các số nguyên tố trong mảng
void Add_0(int *&a,int &n,int vitrithem,int sothem=0)
{
   int *P=new int[n];//Tao ra mot mang con tro!!==mang con tro ban dau
   for(int i=0;i<n;i++)
   {
       P[i]=a[i];//Luu tat ca qua
   }
   delete []a;
   //cap phat lai a du ra 1 o
   a=new int[n+1];//a se thay doi nen dung rerenfer
   for(int i=0;i<n;i++)
   {
       a[i]=P[i];
   }
   delete []P;
   for(int i=n;i>vitrithem;i--)
   {
       a[i]=a[i-1];
   }
   a[vitrithem+1]=sothem;
    n++;//n thay doi rerenfer

}
void Add_sauNguyenTo(int *&a,int &n)//n va *a thay doi nen dung rerenfer
{
    for(int i=0;i<n;i++)
    {
        if(NgTo(a[i]))
        {
            Add_0(a,n,i);
            i++;
        }
    }
}
//Xóa tất cả số nguyên tố có trong mảng
void Dele(int *&a,int &n,int vitrixoa)
{
    for(int i=vitrixoa;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    int *P=new int[n];
    for(int i=0;i<n;i++)
    {
        P[i]=a[i];
    }
    delete []a;
    //vi neu khong cap nhat lai mang a thi sao xuat ra duoc ket qua
    //vi *p mang chi dc khai bao trong ham !
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=P[i];
    }

}
void dele_NguyenTo(int *&a,int &n)
{
    for(int i=0;i<n;i++)
    {
        if(NgTo(a[i]))
        {
            Dele(a,n,i);
            i--;
        }
    }

}
//Them n Lan vao vi tri K
void Add_Nlan(int *&a,int &n,int &vitrithem,int &sothem,int &soLan)
{
    do
    {
        cout<<"\n Nhap vao vi tri can Them :\t";
        cin>>vitrithem;
        if(vitrithem<0||vitrithem>=n)
        {
            cout<<"\n Vi tri Them khong Hop Le!";
        }

    }while(vitrithem<0||vitrithem>=n);
    cout<<"\n Nhap vao so can Them :\t";
    cin>>sothem;
    do
    {
        cout<<"\n Nhap vao so lan Them:\t";
        cin>>soLan;
        if(soLan<0)
        {
            cout<<"\n sO LAN khong hop le!!";
        }

    }while(soLan<0);
    for(int i=0;i<soLan;i++)
    {
        Add_0(a,n,vitrithem-1,sothem);
    }


}
//Xoa -doan-THeo yeu cau
void Dele_Doan(int *&a,int &n)
{
    int vitridau;
    int vitricuoi;
    vitridau=vitricuoi=0;
    do
    {
        cout<<"\n Nhap vao vi tri dau Can xoa:\t";
        cin>>vitridau;
        if(vitridau<0||vitridau>=n)
        {
            cout<<"\n Khong Hop Le!";
        }

    }while(vitridau<0||vitridau>=n);
      do
    {
        cout<<"\n Nhap vao vi tri Sau - Can xoa:\t";
        cin>>vitricuoi;
        if(vitricuoi<vitridau)
        {
            cout<<"\n Khong Hop Le!";
        }

    }while(vitricuoi<vitridau);
    int solanxoa=vitricuoi-vitridau;
    for(int i=0;i<solanxoa;i++)
    {
        Dele(a,n,vitridau);

    }
    cout<<"\n xoa tu vi tri a["<<vitridau<<"]-a["<<vitricuoi-1<<"]\n";
}

int main()
{
    int *a=NULL;
    int n=0;
    Input(&a,n);
    Export(a,n);
//    cout<<"\n Mang sau khi Sap xep Giam \n";
//    Sort_Giamdan(a,n);
//    cout<<"\n Mang sau khi sap xep duong giam-am tang - 0 cuoi\n";
//    Sort_all(a,n);
//    Tach_NgTo(a,n);
//    Tach_Thanh_TWO(a,n);
cout<<"\n Them 0 sau cac so nguyen To\n " ;
  Add_sauNguyenTo(a,n);
  Export(a,n);
  cout<<"\n Xoa tat ca cac so nguyen To\n";
  dele_NguyenTo(a,n);
  Export(a,n);
  int vitrithem,sothem,solan;
  Add_Nlan(a,n,vitrithem,sothem,solan);
  cout<<"\n Them "<<solan<<" lan -vao vi tri a["<<vitrithem<<"] -so: "<<sothem<<endl;
  Export(a,n);
  Dele_Doan(a,n);
  Export(a,n);
    delete []a;

    return 0;
}
