#include<iostream>
#include<conio.h>
#include<math.h>
#include<string>
using namespace std;
/*
2. Viết chương trình nhập vào 1 số nguyên dương giới hạn 9 chữ số.
 In ra cách đọc của số này.
Vd: 12345 => Muoi hai ngan ba tram bon muoi lam
*/
int main()
{
    vuongmin:
    int x,soluongso,temp;
    do
    {


    cout<<"\n nhap so nguyen :\t";
    cin>>x;

    soluongso=log10(x)+1;
    if(soluongso>9)
    {
        cout<<"\nso phai nho hon 9.";
    }
    }while(soluongso>9);
    //xet 4 chu so
    if(soluongso==4)
    {
        temp=x/1000;
        switch(temp)
        {
        case 1:
            cout<<" mot ngan ";
            break;
            case 2:
            cout<<" hai ngan ";
            break;
            case 3:
            cout<<" ba ngan ";
            break;
            case 4:
            cout<<" bon ngan ";
            break;
            case 5:
            cout<<" nam ngan ";
            break;
            case 6:
            cout<<" sau ngan ";
            break;
            case 7:
            cout<<" bay ngan ";
            break;
            case 8:
            cout<<" tam ngan ";
            break;
            case 9:
            cout<<" chin ngan ";
            break;

        }
        soluongso --;
        x%=1000;
    }

    //xet 3 chu so
    if(soluongso==3)
    {
        int temp=x/100;
        switch(temp)
        {
        case 1:
            cout<<" mot tram ";
            break;
            case 2:
            cout<<" hai tram ";
            break;
            case 3:
            cout<<" ba tram ";
            break;
            case 4:
            cout<<" bon tram ";
            break;
            case 5:
            cout<<" nam tram ";
            break;
            case 6:
            cout<<" sau tram ";
            break;
            case 7:
            cout<<" bay tram ";
            break;
            case 8:
            cout<<" tam tram ";
            break;
            case 9:
            cout<<" chin tram ";
            break;
        }
        soluongso --;
         x%=100;//x se duoc truyen xuong duoi


    }
    //xet 2 so
    if(soluongso==2)
    {
       temp=x/10;
       switch(temp)
       {
       case 1:
        cout<<" muoi ";
        break;
        case 2:
        cout<<" hai muoi ";
        break;
        case 3:
        cout<<" ba muoi ";
        break;
        case 4:
        cout<<" bon muoi ";
        break;
        case 5:
        cout<<" nam muoi ";
        break;
        case 6:
        cout<<" sau muoi ";
        break;
        case 7:
        cout<<" bay muoi ";
        break;
        case 8:
        cout<<" tam  muoi ";
        break;
        case 9:
        cout<<" chin muoi ";
        break;
       }
       soluongso--;


    }

    //xet 1 so
    if(soluongso==1)
    {
        temp=x%10;
      switch(temp)
      {


      case 1:
          cout<<" mot ";
          break;
           case 2:
          cout<<" hai ";
          break;
           case 3:
          cout<<" ba ";
          break;
           case 4:
          cout<<" bon ";
          break;
          case 5:
          cout<<" nam ";
          break;
          case 6:
          cout<<" sau ";
          break;
           case 7:
          cout<<" bay ";
          break;
          case 8:
          cout<<" tam ";
          break;
           case 9:
          cout<<" chin ";
          break;


      }

    }




     cout<<"\n ban co muon tiep tuc ban yes";
     char luachon=getch();
    cin>>luachon;
    if(luachon=='y'||luachon=='Y')
    {


     goto vuongmin;

    }
    return 0;
}
