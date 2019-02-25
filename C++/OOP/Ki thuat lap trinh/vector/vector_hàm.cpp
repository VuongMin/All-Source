///*#include<iostream>
//#include<stdlib.h>
//#include<vector>
//using namespace std;
////khi nhap thi khoi dau la gia tri rac,nen khi nhap gia tri thay doi ta dung tham chieu
////
//void nhap(vector<int> &a,int &n)
//{
//    cout<<"\n nhap vao so luong phan tu:\t";
//    cin>>n;
//    //cung cap vung nho
//    a.resize(n,0);//<=>a.resize(n)
//    //a.size()=>so luong phan tu cua vecto
//    for(int i=0;i<a.size();i++)
//    {
//
//        a.at(i)=i+1;//<=>a[i]
//    }
//
//}
//void xuat(vector<int> a)
//{
//    for(int i=0;i<a.size();i++)
//    {
//        cout<<a.at(i)<<"   ";
//    }
//}
//int main()
//{
//    vector<int> a;
//    int n;
//    nhap(a,n);
//    xuat(a);
//    system("pause");
//    return 0;
//}
//*/
////nhap va xuat kieu khac(vo tan)
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
//void nhap(vector<int> &a)
//{
//    //trong khi dieu dung =>co nghia la:no chua co gap dieu kien de dung or luon dung voi kieu du lieu int
//    //neu nhap vao du lieu khac no se sai!
//    while(true)
//    {
//        int x;
//        cout<<"\n nhap vao so:\t";
//        cin>>x;
//
//        a.push_back(x);
//        if(x==0)
//        {
//            //neu x==0 thi dung lai
//            break;
//        }
//
//    }
//}
///*nhap =>cach 2*/
void nhap(vector<int> &a,int &x)
{
    while(true)
    {
        cout<<"\n nhap vao so :\t";
        cin>>x;
        //them cuoi la no tu them vao sau va no size no tu tang len nen ko can phai cap vung nho truoc
        a.push_back(x);
        if(x==0)
        {
            break;
        }
    }

}
void xuat(vector<int> a)
{
    //a.size-1=>vi khong muon lay so 0!
    for(int i=0;i<a.size()-1;i++)
    {
        cout<<a.at(i)<<"   ";
    }
}
int main()
{
    vector<int> a;
    int x;
    nhap(a,x);
    xuat(a);
    cout<<"\n gia tri dau(front():\t"<<a.front();
    cout<<"\n size:\t"<<a.size();
    a.pop_back();
    cout<<"\n size sau khi pop_back():\t"<<a.size();
    cout<<"\n gia tri cuoi back():\t"<<a.back();
    cout<<"\n kich thuoc that su :\t"<<a.capacity();
    cout<<"\nkich thuoc toi da:\t"<<a.max_size();
    return 0;
}





