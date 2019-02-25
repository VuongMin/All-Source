#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
/*
Bài 1:
Viết chương trình trò chơi oẳn tù tì giữa người và máy theo thể lệ
 người luôn đi trước.

Luật chơi như sau: Người nhập vào ký tự tương ứng:
'B' hay 'b' => Búa
'O' hay 'o' => Bao
'K' hay 'k' => kéo

Sau đó Máy sẽ random ra ký tự bất kỳ (có thể là búa hoặc bao hoặc kéo).
 Sau đó tính kết quả chung cuộc (người thắng hay máy thắng).

Gợi ý: Tham khảo cách Random số nguyên trong 1 đoạn nào đó,
ta có thể quy ước vd: số 1 => búa, 2 => bao, 3 => kéo. Rồi tính
thắng thua giữa người & máy theo nguyên tắc như ngoài đời:

- Búa thắng kéo nhưng thua bao
- Bao thắng búa nhưng thua kéo
- Kéo thắng bao nhưng thua búa.

*/

using namespace std;

int main()
{
    cout<<" \n ------menu----- \n ";
    cout<<"  \n *keo* <=> k  ";
    cout<<"\n * bua* <=> b";
    cout<<" \n * bao* <=> bat ky ";
    cout<<"\n ------------------------------------------------------\n";
  char x;
  cout<<"\n nhap vao lua cho cua nguoi choi :\t ";
  cin>>x;
  if(x=='k'||x=='K')
  {
      cout<<"\n nguoi choi chon keo.";

  }
  else if(x=='b'||x=='B')
  {
      cout<<"\n nguoi choi chon Bua.";
  }
  else
  {
      cout<<"\n nguoi choi chon Bao.";
  }
  // Den may Chon(chi nhan duoc so nguyen)
  // a+rand()%(b-a+1)
         srand(time(0));
        int m= 1+rand()%3;

        if(m==1)
        {
            cout<<"\n may chon KEO .";

        }
        else if(m==2)
        {
            cout<<"\n may chon Bua.";
        }
        else
        {
            cout<<"\n may chon Bao.";
        }
        // ham sleep xi kill ne
         cout<<" \n Loangding";
         cout<<".";
         Sleep(1000);
         cout<<".";
         Sleep(1000);
         cout<<".";
         Sleep(1000);
         system("cls");

         cout<<"\n---------------------------\n";

        //so sanh ne

       if(x=='k'||x=='K')
       {
           if(m==1)
           {
               cout<<"\n hoa cmnr!";

           }
            else if(m==2)
            {
                cout<<"\n may thang cmnr!";
            }
            else
            {
                cout<<"\n nguoi cho thang cmnr!";
            }
       }
       //truong hop 2
          if(x=='B'||x=='b')
       {
           if(m==1)
           {
               cout<<"\n nguoi choi thang cmnr!";
           }
            else if(m==2)
            {
                cout<<"\n hoa cmnr!";
            }
            else
            {
                cout<<"\n may thang cmnr!";
            }
       }

       //truong hop 3
          if(x!='b'&&x!='k')

          {


          if(m==3)
          {
              cout<<"\n hoa cmnr";

          }else if(m==2)
          {
              cout<<" nguoi choi thang cmnr!";
          }
          else
          {
              cout<<"\n may thang !";
          }
          }

    return 0;
}
