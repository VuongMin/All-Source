#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
//vi day la con tro den 1 o nho khac nen khong can cap phat!! vi no se den o nho va 2 chung no se o trong cung 1 o nho!!
{
 int a=5;
 void *b;//con tro vo kieu
 //con tro den bien
 b=&a;//dia chi bang dia chi
 (*(int *)b)--;//phai ep kieu cho no vi no co ban la mang kieu mac dinh void
 //gia tri cua b giam xuong 1 don vi!

 printf("\n gia tri cua a:\t%d",a);
 printf("\n dia chi cua a:\t%p",&a);
 printf("\n gia tri con tro b:\t%d",*(int *)b);//ep kieu
 printf("\n dia chi cua con tro b:\t%p",&b);
 printf("\n mien gai tri cua con tro b:\t%p",b);
 //con tro den con tro
 int *c;
 c=b;//dia chi bang voi dia chi
 printf("\n gia tri con tro c:\t%d",*c);//khong can ep kiue vi no tro den 1 con tro!!thi cung nay voi no roi
 printf("\n dia chi cua con tro c:\t%p",&c);
 printf("\n mien gai tri cua con tro c:\t%p",c);

//hien tai 3 a,b,c cung nam chung tai 1 o nho neu thay doi 1 trong 3 thi toan bo se thay doi


    getch();
}
