#include "Monhoc.h"


Monhoc::Monhoc()
{
	DiemMonhoc = 0;
	SoChiMonhoc = 2;
	TenMonhoc = "";
}
Monhoc::Monhoc(string Name,int chi,float soure)
{
	TenMonhoc = Name;
	SoChiMonhoc = chi;
	DiemMonhoc = soure;
}

Monhoc::~Monhoc()
{
}
//Method Input
void Monhoc::InputMonhoc()
{
	fflush(stdin);
	cout << "\n Nhap vao ten mon hoc:";
	getline(cin, TenMonhoc);
	fflush(stdin);
	do
	{
		cout << "\n Nhap vao So Chi :";
		cin >> SoChiMonhoc;
		if (SoChiMonhoc < 1)
		{
			cout << "\n So chi mon hoc khong hop le!";
		}
	} while (SoChiMonhoc<1);
	do
	{
		cout << "\n Nhap vao diem Mon Hoc:";
		cin >> DiemMonhoc;
		if (DiemMonhoc<0 || DiemMonhoc>10)
		{
			cout << "\n Diem mon hoc khong hop le.";
		}
	} while (DiemMonhoc<0 || DiemMonhoc>10);
}
void Monhoc::OutMonhoc()
{
	cout << "\n Ten Mon hoc:" << TenMonhoc;
	cout << "\n So chi :" << SoChiMonhoc;
	cout << "\n Diem mon hoc:" << DiemMonhoc;
}
//Method Opertor
istream& operator >>(istream &is, Monhoc &mh)
{
	cout << "\n Nhap Ten Mon:";
	is >> mh.TenMonhoc;
	cout << "\n Nhap vao So chi:";
	is >> mh.SoChiMonhoc;
	cout << "\n Nhap vao Diem :";
	is >> mh.DiemMonhoc;
	return is;
}
ostream& operator<<(ostream &os, Monhoc mh)
{
	os << "Ten mon hoc:" << mh.TenMonhoc;
	os << "\n So chi :" << mh.SoChiMonhoc;
	os << "\n Diem :" << mh.DiemMonhoc;
	return os;
}