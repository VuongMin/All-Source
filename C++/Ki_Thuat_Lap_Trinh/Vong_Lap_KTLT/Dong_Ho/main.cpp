#include <iostream>
#include<windows.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
inline bool IsPressed(int presskey)
{
    return GetAsyncKeyState(presskey);
}
int main()
{
    /*
     Viết chương trình đồng hồ điện tử. Có dạng như sau: 00:00:00 .
     Khi bấm Enter thì đồng hồ (chương trình) sẽ chạy.
      Bấm SPACE để dừng và bấm SPACE để chạy tiếp. Bấm ESCAPE để thoát.
    */
    int dem=0;
      cout<<"\n Nhan Phim Enter De Dung-1lan nua De Tiep Tuc!";
      cout<<"\n Bam Dau Cach de thoat !";

     for(int h=0;h<=24;h++)
     {
         system("color 1");
         for(int m=0;m<=59;m++)
         {

             for(int s=0;s<=59;s++)
             {

                   cout << setw(2) << setfill('0') << h<<":" ;
                   cout << setw(2) << setfill('0') << m<<":" ;
                   cout << setw(2) << setfill('0') << s ;

                 if(IsPressed(VK_SPACE))
                 {
                     return 0;
                 }
                 if(IsPressed(VK_RETURN))
                 {

                     dem++;

                 }
                 if(dem%2!=0)
                 {
                     system("pause");
                 }


      cout<<"\n Nhan Phim Enter De Dung-1lan nua De Tiep Tuc!";
      cout<<"\n Bam Dau Cach de thoat !";
                  Sleep(100);
                   system("color c");
                  system("cls");

             }
         }

     }

    return 0;
}
