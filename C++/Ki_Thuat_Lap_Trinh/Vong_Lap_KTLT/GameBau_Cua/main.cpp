#include <iostream>
#include<conio.h>
#include<time.h>
#include<windows.h>
using namespace std;
//   inline bool IsPressed(int press)
//{
//	return GetAsyncKeyState(press);
//}

int main()
{
    /*
    Bài Làm Thêm 5: Viết game đổ bầu cua cá cọp

gợi ý: mới vào ta sẽ cho người chơi đặt tiền cược cho các mặt
 (có 6 mặt)

sẽ có 3 con xúc sắc, mỗi con xúc sắc sẽ ra kết quả của 1 con cho nên
chỗ này ta sẽ cho nó quay 3 lần, mỗi lần là kết quả 1 con
=> random từ 1 tới 6
1=>cá
2=> gà
3=>nai
4=>tôm
5=>bầu
6=>cua

xong rồi sẽ tính ra xem người chơi trúng được bao nhiêu tiền ?
tiền vốn hiện tại còn bao nhiêu (gợi ý: ban đầu có thể cho
người chơi vốn là 100k)
    */
   vuongmin:
    cout<<"---------------------Menu--------------------"<<endl;
    cout<<"1.Dat Tien "<<endl;
    cout<<"2. Choi"<<endl;
    cout<<"3. ESC"<<endl;
    cout<<"---------------Chuc -Ban-May -Man-------------"<<endl;


    int bau,cua,tom,ca,ga,nai;
    int rad;
    int sum=0;
    int sumtong=0;
    char x=getch();
    if(x=='1')
    {

        cout<<"\n Ban Dat Cuoc Cho Mat Bau:\t";
        cin>>bau;
        cout<<"\n Ban Dat Cuoc Cho Mat Cua:\t";
        cin>>cua;
        cout<<"\n Ban Dat Cuoc Cho Mat Tom:\t";
        cin>>tom;
        cout<<"\n Ban Dat Cuoc Cho Mat Ca:\t";
        cin>>ca;
        cout<<"\n Ban Dat Cuoc Cho Mat Ga:\t";
        cin>>ga;
        cout<<"\n Ban Dat Cuoc Cho Mat Nai:\t";
        cin>>nai;
         cout<<"\n********** Chon 2 De Choi Ne*************\n";


         do
         {
             x=getch();
             if(x!=2)
             {
                 cout<<"\n -----------Bam 2 de choi do ban----------";
             }

         if(x=='2')
         {

           cout<<"\n****************************";
           cout<<"\n *****QUAY-So-ne******";
            cout<<"\n";
             for(int i=1;i<=3;i++)
             {
                 cout<<"\a";
                 system("color 2");
                 srand(time(0));
                 rad=1+rand()%6;
                 switch(rad)
                 {
                 case 1:
                    {
                        cout<<"\n Xuat Hien Mat Bau.";
                        sum+=bau;

                        break;
                    }
                 case 2:
                    {
                        cout<<"\n Xuat Hien Mat Cua.";
                        sum+=cua;

                        break;
                    }
                    case 3:
                    {
                        cout<<"\n Xuat Hien Mat Tom.";
                        sum+=tom;

                        break;
                    }
                    case 4:
                    {
                        cout<<"\n Xuat Hien Mat Ca.";
                        sum+=ca;

                        break;
                    }
                    case 5:
                    {
                        cout<<"\n Xuat Hien Mat Ga.";
                        sum+=ga;

                        break;
                    }
                    case 6:
                    {
                        cout<<"\n Xuat Hien Mat NAI.";
                        sum+=nai;

                        break;
                    }

                 }


                 Sleep(1000);
             }
             sumtong+=sum;

            cout<<"\n Tien  Thuong :\t="<<sumtong;


         }

             return 0;



         }while(x!=2);

    }
    else if(x=='2')
    {
        system("cls");
        system("color 2");
        goto vuongmin;
    }
    else
    {    system("cls");
        system("color 4");
        cout<<"\n Cam on Ban.";
        return 0;
    }


    return 0;
}
