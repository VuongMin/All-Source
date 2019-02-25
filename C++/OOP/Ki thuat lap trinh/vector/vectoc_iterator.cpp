#include<iostream>
#include<vector>
using namespace std;
//luon luon co tham chieu moi chay duoc vi moi dau la rac thi minh muon them thi phai dan de cho no chuyen doi
void nhap(vector<int> &a)
{
    for(int i=1;i<=10;i++)
    {
        a.push_back(i);
    }
}
//xuat theo kieu binh thuong
void exportnormal(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"   ";//<=>a.at(i)
    }
}
//theo kieu lop::iterator
void xuat(vector<int> a)
{
    for(vector<int>::iterator it=a.begin();it!=a.end();it++)//<=> xuat(danh sach lien ket)
    {
        //vi it dc lap trong lop:nen phai dung con tro de lay no ra!
        cout<<*it<<"   ";
    }
}
int main()
{
    vector<int> a;

    nhap(a);
    cout<<"\n xuat theo kieu binh thuong!\n";
    exportnormal(a);
    cout<<"\n xuat theo kieu iterator!\n";
    xuat(a);
    return 0;
}
