#include<iostream>
#include<vector>
using namespace std;
void nhap(vector<int> &a)
{
 for(int i=1;i<=10;++i)
 {
     a.push_back(i);
 }
}
void xuat(vector<int> a)
{
  for(vector<int>::iterator it=a.begin();it!=a.end();it++)
  {
      cout<<*it<<"   ";
  }
}
int main()
{
    vector<int> x;
    nhap(x);
    cout<<"\n xuat theo kieu lop::iterator!\n";
    xuat(x);
//    x.erase(x.begin()+2);
//    cout<<"\n xoa phan tu tai vi tri a[2]:\t";
//    xuat(x);
//    x.erase(x.begin()+3,x.begin()+6);
//    cout<<"\n xoa doan a[3]->a[6-1]:\t";
//    xuat(x);
//  x.insert(x.end()-2,100);
//  cout<<"\n them vao cuoi  tro lai 2 don vi..\n";
//  xuat(x);
//x.insert(x.end()-2,3,100);
//cout<<"\n them vao cuoi tro lai 2 don vi 3 lan so 100.\n";
//xuat(x);
//vector<int>x_1;
//cout<<"\n";
//for( int i=10;i>=1;i--)
//{
//    x_1.push_back(i);
//}
//x.insert(x.begin()+1,x_1.begin()+1,x_1.begin()+5);
//cout<<"\n* chen vao vi tri 1 cua vector x->lay tu vi tri a[1]->a[5-1] cua vector x_1*\n";
//xuat(x);
int myvector[]={500,600,700,800};
x.insert(x.begin()+2,myvector+1,myvector+3);
cout<<"\n them vao vi tri a[2] cua vector x->lay tu mang int myvector lay tu vi tria[1]->a[3-1]..\n ";
xuat(x);
x.clear();
cout<<"\n size sau khi clear():\t"<<x.size();
    return 0;
}
