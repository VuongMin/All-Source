#pragma once
#include"Hocsinh.h"
#include <fstream>//Thu vien IO File
class Lophoc
{
private:
	vector<Hocsinh> DanhsachLop;
public:
	Lophoc();
	Lophoc(vector<Hocsinh>);
	~Lophoc();
	void InputLop();
	void OutLop();
	void Sort();
	void ThuHang(string );
	friend istream& operator >>(istream&, Lophoc&);
	friend ostream& operator <<(ostream&, Lophoc);
	void DownFile(ofstream&);//Khi Xuat vao file Can tham chieu vi thay doi data Null sang Not Null
	void ReadFile(ifstream&);


};

