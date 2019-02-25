#include <iostream>
#include<vector>

using namespace std;


int main()
{
   //Khai bao
   vector<int> arr;
   //Cap phat mang dong
   int n=5;
   arr.resize(n);
   cout<<"\n Size:"<<arr.size()<<endl;
   for(int i=0;i<n;i++)
   {
       arr.at(i)=i+1;//<=>arr[i]
   }
   //Them cuoi Push Back
    arr.push_back(69);
    //Them tai vi tri so!
    arr.insert(arr.begin()+2,100);
    arr.erase(arr.begin());
    int Size=arr.size();
   for(int i=0;i<Size;i++)
   {
       cout<<arr.at(i)<<" ";
   }
     cout<<"\n Size:"<<arr.size()<<endl;



    return 0;
}
