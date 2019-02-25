#include <iostream>
#include<vector>
using namespace std;
//Nhap xuat- vecto
void Nhap(vector<int>&arr,int &n)
{
   do
   {
       cout<<"\n nHAp vao So lUong Phan tu:\t";
       cin>>n;
       if(n<=0)
        cout<<"\n  Khong Hop le!";
   }while(n<=0);
   //Cap Phat dong
    arr.resize(n);
    int Size=arr.size();
    for(int i=0;i<Size;i++)
    {
        cout<<"\n Nhap vao vi tri a["<<i<<"]:\t";
        cin>>arr[i];//<=>arr.at(i)
    }
}
void Xuat(vector<int> arr,int n)
{


    for(int i=0;i<n;i++)
    {
        cout<<arr.at(i)<<" ";
    }
}
int main()
{
    vector<int> arr;
    int n=0;
    Nhap(arr,n);
    Xuat(arr,n);
    return 0;
}
