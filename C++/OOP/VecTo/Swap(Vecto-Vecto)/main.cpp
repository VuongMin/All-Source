#include <iostream>
#include<vector>
using namespace std;
void out(vector<int>arr)
{
    for(vector<int>::iterator it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }
}

int main()
{
    vector<int> arr;
    //Cap Phat
     arr.resize(5);
     int Size=arr.size();
     for(int i=0;i<Size;i++)
     {
         arr[i]=i*2;
     }
     //Tao Moi VECTO
     vector<int> arrnew;
     arrnew.resize(5);
     for(int i=0;i<Size;i++)
     {
         arrnew[i]=i+1;
     }
     out(arr);
     cout<<"\n******\n";
     out(arrnew);
     //Swap 2 vecto
     arr.swap(arrnew);
     cout<<"\n **Sau khi swap 2 vecto***\n";
      out(arr);
      cout<<"\n*****\n";
      out(arrnew);
    return 0;
}
