
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>//khai bao malloc-relloc-calooc...
//nhap vao 2 so nguyen a-b tim max va min cho con tro
//tim min-cach 1
int timmin(int *a,int *b)//ham tra ve gia tri con tro !tra ve gia tri :tim min
{
    return *a < *b ? *a : *b;
}
//cach 2 ==tra ve 1 con tro!
int* timmax(int *a,int *b)//tra ve 1 cai dia chi(timmax) nhung co * ,tuc la tra ve 1 gia tri!!
{
    return *a>*b?a:b;//tra ve dia tri cua con tro(tuc la dia chi cua a,b)
}

int main()
{
    int *a,*b;
    //nhap truc tiep nen can cap vung nho !!

    a=malloc(sizeof(int *));
    b=malloc(sizeof(int *));

    //cap vung nho calloc->(ep kieu )calloc(so luong o,kich co cua kieu)
  /*
   a=calloc(1,sizeof(int *));
   b=calloc(1,sizeof(int *));
   */
   //cap vung nho relloc-> chua co vung nho:(ep kieu)realoc( 0,kich co cua kieu )
  /*
   a=realloc(0,sizeof(int *));
   b=realloc(0,sizeof(int *));
   */

    printf("\n nhap vao gia tri a:\t");
    scanf("%d",a);
    //vi ban chat cua con tro la dia chi nen nhap vao a la nhap vao dia chi
    printf("\n nhap vao gia tri cua b:\t");
    scanf("%d",b);
    //goi ham
    printf("\n gia tri nho nhat:\t %d",timmin(a,b));
    printf("\n  dia chi cua ham tim max la:\t%p",timmax(a,b));
        printf("\n  gia tri cua ham tim max lon nhat la:\t%d",*timmax(a,b));
        //vi ham tra ve la con tro va dia chi cua ham la tim max
        //nen khi xuat ra gia tri thi phai co *:toan tu lay gia tri!
        free(a);
        free(b);


    getch();
}
