#pragma once
#include "MonHoc.h"
#include <vector>

class SinhVien
{
private:
	string MaSo, HoTen;
	vector<MonHoc> ListMonHoc;
public:
	void Nhap();
	void Xuat();
	friend istream& operator >>(istream &, SinhVien &);
	friend ostream& operator <<(ostream &, SinhVien);
	SinhVien(string, string, vector<MonHoc>);
	SinhVien(void);
	SinhVien(const SinhVien &);
	~SinhVien(void);
	float TinhDiemTrungBinh();
	string XepLoai();
	void Setter_MaSo(string);
	string Getter_MaSo();
	void Setter_HoTen(string);
	string Getter_HoTen();

	void Setter_ListMonHoc(MonHoc);
	vector<MonHoc> Getter_ListMonHoc();
};

