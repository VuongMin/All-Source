#include <iostream>
#include<vector>
using namespace std;
void Out(vector<int> arr)
{
    int Size=arr.size();
    for(int i=0;i<Size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(69);
    Out(arr);
    //Xoa 1 vi tri
    arr.erase(arr.begin()+2);
    cout<<"\n -----Sau khi xoa Tai 1 vi tri-------\n";
    Out(arr);
    //Xoa doan Tu A ->(B-1)
    arr.erase(arr.begin()+1,arr.begin()+4);
    cout<<"\n**** Xoa doan Tu A->(B-1)****\n";
    Out(arr);
    //Insert 1 so va 1 vi tri
    arr.insert(arr.end()-1,96);
    cout<<"\n****Chen 1 so vao 1 vi tri****\n";
    Out(arr);
    //Chen so n lan vao 1 vi tri
    arr.insert(arr.end()-1,3,33);
    cout<<"\n ***Chen n Lan so vao 1 vi tri***\n";
    Out(arr);
    return 0;
}
