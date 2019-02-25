#include "ngay.h"
#include<string>
#include<stdio.h>
//Khai bao
struct SinhVien
{
    string Hoten,Maso;
    NGAY ngaysinh;
    float Toan,Ly,Hoa;
};
typedef struct SinhVien SINHVIEN;
void Input_SV(SINHVIEN &);
void Out_SV(SINHVIEN);
double DiemTrungBinhSv(SINHVIEN);
