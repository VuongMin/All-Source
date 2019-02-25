#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

//ham kiem tra loi
bool kiemtraloi(string chuoi)
{
    //lay so ki tu chuoi
   int length=chuoi.length();
   int dem=0;
   for(int i=0;i<length;i++)
   {
/*day co su khac biet:
trong chuoi so cung la 1 ki tu nhung no cung hieu la so!
vi dieu kien la chuoi[i]>'9' va ta ko se dk chuoi[i]<0;
de danh no cho cai dk sau:diemtoan<0||diemtoan>10
       */
       if((chuoi[i]>'9')&&chuoi[i]!='.')
       {
           return false;
           break;
       }
       if(chuoi[i]=='.')
       {
           dem++;
           if(dem==2)
           {
               return false;
               break;
           }
           if(chuoi[0]=='.'||chuoi[length-1]=='.')
           {
               return false;
           }
       }
   }
   return true;
}



// lass hocsinh

class hocsinh
{
private:
    string toan,van,hoa;
public:
    void nhapsinhvien()
    {
        dtoan:
        do
        {


        fflush(stdin);
        cout<<"\n nhap vao diem toan:\n";
        getline(cin,this->toan);

        if(kiemtraloi(toan)==false)
        {
            cout<<"\n ban nhap sai du lieu.vui long kiem tra lai";
            //xoa man hinh system("cls");
        }
        else

        {
            //chuyen kieu chuoi sang so
            int diemtoan=atof((char *)toan.c_str());
            if(diemtoan<0||diemtoan>10)
            {
                cout<<"\n vui long nhap lai diem(1->10)!";
                goto dtoan;
            }


        }
        }while(kiemtraloi(toan)==false);


      dvan:
          do
            {
                fflush(stdin);
        cout<<"\n nhap vao diem van:\t";
        getline(cin,van);
         if(kiemtraloi(van)==false)
        {
            cout<<"\n ban nhap sai du lieu.vui long kiem tra lai";

        }
        else
        {
            //chuyen kieu chuoi sang so
            int diemvan=atof((char *)van.c_str());
            if(diemvan<0||diemvan>10)
            {
                cout<<"\n vui long nhap lai diem(1->10)!";
                goto dvan;
            }


        }
        }while(kiemtraloi(van)==false);

        dhoa:
            do
            {

         fflush(stdin);
        cout<<"\n nhap vao diem hoa:\t";
        getline(cin,hoa);
         if(kiemtraloi(hoa)==false)
        {
            cout<<"\n ban nhap sai du lieu.vui long kiem tra lai";

        }
        else
        {
            //chuyen kieu chuoi sang so
            int diemhoa=atof((char *)hoa.c_str());
            if(diemhoa<0||diemhoa>10)
            {
                cout<<"\n vui long nhap lai diem(1->10)!";
                goto dhoa;
            }


        }
        }while(kiemtraloi(hoa)==false);


    }
    void xuatsinhvien()
    {
        cout<<"\n diem toan:\t"<<toan;
        cout<<"\n diem van:\t"<<van;
        cout<<"\n diem hoa:\t"<<hoa;
    }
};

int main()
{
    hocsinh hs;
    hs.nhapsinhvien();
    hs.xuatsinhvien();

    return 0;
}
