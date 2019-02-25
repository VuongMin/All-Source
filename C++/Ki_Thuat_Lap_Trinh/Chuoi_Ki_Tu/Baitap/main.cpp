#include <iostream>
#include<string.h>
using namespace std;
/*Bài 2: Viết hàm nhận vào một chuỗi và trả về chuỗi tương ứng (giữ nguyên chuỗi đầu vào):
Các ký tự thành ký tự thường (giống strlwr).
Các ký tự thành ký tự hoa (giống strupr).
Các ký tự đầu tiên mỗi từ thành ký tự hoa.
Chuẩn hóa chuỗi (xóa khoảng trắng thừa).
*/
char* Thuong(char *chuoi)
{
    char *Mangnew=strdup(chuoi);
    int Length=strlen(Mangnew);
    for(int i=0;i<Length;i++)
    {
        if(Mangnew[i]>='A'&&Mangnew[i]<='Z')
        {
            Mangnew[i]+=32;
        }
    }
//    Mangnew[Length]='\0';
    return Mangnew;//<=>&mangnew[0]
}
int main()
{
    char ChuoiBanDau[]="Nguyen Minh Vuong";
    cout<<"\n Chuoi Thuong :"<<Thuong(ChuoiBanDau);
    cout<<"\n Chuoi Ban dau :"<<ChuoiBanDau;
        return 0;
}
