#include <iostream>

using namespace std;
// viet ra  Myvecto co cac phuong Thuc Giong vecto
template<class Kieu>
class Myvecto
{
  //Tao ra Mang Ne va n
private:
       int n;
       Kieu arr[100];
public:
 //Phuong Thuc Khoi Tao Mac dinh
   Myvecto()
   {
       n=0;//Khoi tao
   }
   //push_back()
   void Push_Back(Kieu x)
   {
       arr[n]=x;//Them X tai vi tri n Vi mang (0->n-1)
       n++;
   }
   //size()
   int Size()
   {
       return n;//Vi cho nho N ma trong mang

   }
   //pop()
   Kieu Pop()
   {
       n--;
       return arr[n];

   }
   //Viet Toan Tu []
   Kieu operator [](int index)
   {
       return arr[index];
   }


};
int main()
{
        Myvecto< int> arr;
        arr.Push_Back(2);
        arr.Push_Back(3);
        cout<<"\n Size = "<<arr.Size()<<"\n Mang :";
        for(int i=0;i<arr.Size();i++)
        {

            cout<<"\t"<<arr[i];
        }
        cout<<"\n so chuan bi xoa : "<<arr.Pop();
        cout<<"\n Sau xoa Ne:";
           for(int i=0;i<arr.Size();i++)
        {

            cout<<"\t"<<arr[i];
        }

     return 0;
}
