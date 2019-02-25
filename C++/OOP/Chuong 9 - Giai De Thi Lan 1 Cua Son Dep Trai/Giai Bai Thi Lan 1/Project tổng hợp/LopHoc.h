#pragma once
#include "SinhVien.h"
#include <fstream>

class LopHoc
{
private:
	vector<SinhVien> DanhSachLop;
public:
	void Nhap();
	void Xuat();
	void SapXep();
	int XepHang(string);
	void Setter_DanhSachLop(vector<SinhVien> list);
	vector<SinhVien> Getter_DanhSachLop();
	void DocFile(ifstream &);
	void GhiFile(ofstream &);
	

	LopHoc(void);
	~LopHoc(void);
};

