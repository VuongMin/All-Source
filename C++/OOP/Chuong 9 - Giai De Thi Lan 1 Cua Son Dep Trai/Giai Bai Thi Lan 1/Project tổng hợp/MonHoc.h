#pragma once
#include <iostream>
#include <string>
using namespace std;

class MonHoc
{
private:
	string Ten;
	int SoChi;
	float Diem;
public:
	void Nhap();
	void Xuat();
	MonHoc(void);
	~MonHoc(void);
	void Setter_SoChi(int);
	int Getter_SoChi();
	void Setter_Diem(float);
	float Getter_Diem();

	void Setter_Ten(string);
	string Getter_Ten();
};

