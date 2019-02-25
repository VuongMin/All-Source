#pragma once
#include "Ngay.h"
#include <string>
class Saving
{
protected :
	string CMND, Name;
	CNgay NgayLapSo;
	double TienGui,Laisuat;
	 double ThangDaGui;

public:
	friend istream& operator>>(istream&, Saving&);
	friend ostream& operator <<(ostream&, Saving);
	 bool UpdateMonth();
	 //Get Set
	 string GetCMND();
	 void SetCMND(string);
	Saving();
	~Saving();
};

