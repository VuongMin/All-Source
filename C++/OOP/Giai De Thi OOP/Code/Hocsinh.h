#pragma once
#include"Monhoc.h"
#include<vector>
class Hocsinh
{
private:
	string Maso, Hoten;
	int SoLuongMonhoc;
	vector<Monhoc> ListMonhoc;
public:
	Hocsinh();
	Hocsinh(string, string,vector<Monhoc>);
	~Hocsinh();
	vector<Monhoc> GetListMonhoc();
	void  SetListMonhoc(Monhoc);
	string GetMaso();
	void SetMaso(string);
	string GetName();
	void SetName(string);
	//Method Input
	void InputHocsinh();
	void OutHocsinh();
	friend istream& operator >> (istream&, Hocsinh&);
	friend ostream& operator <<(ostream&, Hocsinh);
	//Method Process Diem Trung Binh
	double DiemTrungBinh();
	string XepLoai();
	
};

