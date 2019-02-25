
#include<iostream>
using namespace std;
 /*Nhập vào thông tin 1 ngày (ngày - tháng - năm). Kiểm tra ngày có hợp
  lệ hay không ? Nếu hợp lệ hãy tìm ra ngày
kế tiếp (ngày - tháng - năm) & ngày trước đó (ngày - tháng - năm).
*/
int main()
{
    vuongmin:
    int ngay,thang,nam;
    int ngaytruocdo,thangtruocdo,namtruocdo;
    int ngayketiep,thangketiep,namketiep;
         do
         {
             cout<<"\n nhap nam:\t";
             cin>>nam;

         }while(nam<0);

         do
         {
                     cout<<"\n nhap thang :\t";
                      cin>>thang;
         }while(thang<1||thang>12);

        ngay:
        do{
        cout<<"\n nhap ngay :\t";
        cin>>ngay;
        }while(ngay<1||ngay>31);

        if((nam%4==0&&nam%100!=0)||nam%400==0)
        {
            if(thang==2)
            {
                if(ngay>29)
                {
                    cout<<" <=29";
                    goto ngay;
                }
            }


        }
        else
        {
            if(thang==2)
            {
                if(ngay>28)
                {
                    cout<<"\n ngay <= 28";
                    goto ngay;
                }
            }
        }

        cout<< " ngay "<<ngay<<" thang "<<thang<<" nam "<<nam;
        if(ngay!=1&&ngay!=31)

        {
            ngaytruocdo=ngay-1;
            thangtruocdo=thang;
            namtruocdo=nam;
            ngayketiep=ngay+1;
            thangketiep=thang;
            namketiep=nam;
            cout<<"\n ngay tiep theo = "<<" ngay "<<ngayketiep<<" thang "<<thangketiep<<" nam "<<namketiep;
            cout<<"\n ngay truoc do ="<<" ngay "<<ngaytruocdo<<" thang "<<thangtruocdo<<" nam "<<namtruocdo;
        }
         if(ngay==1)
        {
            if(thang!=1)
            {
                            ngaytruocdo=31;
            thangtruocdo=thang-1;
            namtruocdo=nam;
             ngayketiep=ngay+1;
            thangketiep=thang;
            namketiep=nam;
             cout<<"\n ngay tiep theo = "<<" ngay "<<ngayketiep<<" thang "<<thangketiep<<" nam "<<namketiep;
            cout<<"\n ngay truoc do ="<<" ngay "<<ngaytruocdo<<" thang "<<thangtruocdo<<" nam "<<namtruocdo;

            }
            else
            {
                ngaytruocdo=1;
                thangtruocdo=12;
                namtruocdo=nam-1;
                ngayketiep=ngay+1;
            thangketiep=thang;
            namketiep=nam;

              cout<<"\n ngay tiep theo = "<<" ngay "<<ngayketiep<<" thang "<<thangketiep<<" nam "<<namketiep;
            cout<<"\n ngay truoc do ="<<" ngay "<<ngaytruocdo<<" thang "<<thangtruocdo<<" nam "<<namtruocdo;

            }

        }
        if(ngay==31)
        {
            if(thang!=12)
            {
            ngaytruocdo=ngay-1;
            thangtruocdo=thang;
            namtruocdo=nam;
              ngayketiep=1;
            thangketiep=thang+1;
            namketiep=nam;
             cout<<"\n ngay tiep theo = "<<" ngay "<<ngayketiep<<" thang "<<thangketiep<<" nam "<<namketiep;
            cout<<"\n ngay truoc do ="<<" ngay "<<ngaytruocdo<<" thang "<<thangtruocdo<<" nam "<<namtruocdo;

            }
              else
            {
               ngaytruocdo=ngay-1;
            thangtruocdo=thang;
            namtruocdo=nam;
            ngayketiep=1;
            thangketiep=1;
             namketiep=nam+1;
             cout<<"\n ngay tiep theo = "<<" ngay "<<ngayketiep<<" thang "<<thangketiep<<" nam "<<namketiep;
            cout<<"\n ngay truoc do ="<<" ngay "<<ngaytruocdo<<" thang "<<thangtruocdo<<" nam "<<namtruocdo;

            }


        }
int x;
  cout<<"\n you can continue.. chon '1'";
  cin>>x;
  if(x==1)
  {
      goto vuongmin;
  }


    return 0;
}
