#include <iostream>
#include<string.h>
using namespace std;
int STRLEN(char x[])//<=>char *x :giong con tro mang 1 chieu!
{
    int dem=0;
    int i=0;
    while(x[i]!='\0')
    {
        dem++;
        i++;
    }
    return dem;
}
//Ham- Copy
char* STRCPY(char *x,char *Copy)//<=>nhan vao 1 chuoi tra ve 1 chuoi
{
   int i=0;
   while(x[i]!='\0')
   {
      Copy[i]=x[i];
      i++;
   }
   Copy[i]='\0';// Phai co ki Tu nay de No ket Thuc!
   return &Copy[0];//Ham tra ve dia chi dau tien<=>Tuc la tra ve nguyen Mang!
            //<=>copy  ==&copy[0];
}
char* STRLWR(char *x)
{
    int i=0;
    while(x[i]!='\0')
    {
        if(x[i]>='A'&&x[i]<='Z')
        {
            x[i]+=32;
        }
        i++;
    }
    return x;
}
char* STRUPR(char *x)
{
    int i=0;
    while(x[i]!='\0')
    {
        if(x[i]>='a'&&x[i]<='z')
        {
            x[i]-=32;
        }
        i++;
    }
    return x;
}
char* STRREV(char *x)
{
    int length=STRLEN(x);
    //cap phat ne
    int dem=0;
    char *Save=new char;
    for(int i=length-1;i>=0;i--)
    {
         Save[dem]=x[i];
         dem++;
    }
    return Save;
}
int main()
{
    char str[]="vuongmin normal";
    cout<<"\n**** So-Ki-TU***\n";
    cout<<"\nDefaul:\t"<<strlen(str);
    int Length=STRLEN(str);
    cout<<"\nHam:\t"<<Length;
    char str_copy[]="";
    strcpy(str_copy,str);
    cout<<"\n**** Copy****\n";
    cout<<endl<<"Defauls:\t"<<str_copy;
    cout<<"\nLengh sau khi copy:\t"<<STRLEN(str_copy);
    cout<<"\nLengh Ban dau-sau khi qua Ham copy(Defaul):\t"<<STRLEN(str);
    char str_CopyHam[]="";
    cout<<"\nHam-Copy:\t"<<STRCPY(str_copy,str_CopyHam);
    //Ham Tao ban sao
    //Ham chuyen CHuoi In thanh Thuong
    char str_In[]="NGUYEN MINH VUONG";
    cout<<"\n ***IN->THUONG***\n";
    cout<<"\nDefaul:\t"<<strlwr(str_In);
    cout<<"\nHam :\t"<<STRLWR(str_In);
    //Ham chuyen Thuong Thanh Hoa
    cout<<"\n***Thuong->IN***\n";
    cout<<"\nHam:\t"<<STRUPR(str_In);
    cout<<"\nDefauls:"<<strupr(str_In);
    cout<<"\n***Ham dao NGuoc Chuoi***\n";
    cout<<"\nHam:\t"<<STRREV(str_In);
    cout<<"\nDefauls:"<<strrev(str_In);

    return 0;
}
