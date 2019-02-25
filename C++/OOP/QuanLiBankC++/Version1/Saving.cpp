#include "Saving.h"
#include<time.h>
istream& operator >>(istream& is, Saving& x)
{
	/*fflush(stdin);
	cout << "\n Nhap CMND :";
	getline(is, x.CMND);*/
	fflush(stdin);
	cout << "\n Nhap Ho Ten:";
	getline(is, x.Name);
	do
	{
		cout << "\n----Ngay Lap So-------\n";
		is >> x.NgayLapSo;//class Cngay
		if (x.UpdateMonth() == false)
		{
			cout << "\nxin vui long kiem tra lai!";
		}
	} while (x.UpdateMonth()==false);
	
	do
	{
		cout << "\n Nhap Lai Suat :";
		is >> x.Laisuat;
		if (x.Laisuat <= 0)
		{
			cout << "\n Lai Xuat khong Hop Le!";
		}
	} while (x.Laisuat<1);
	do
	{
		cout << "\n Nhap Tien Gui:";
		is >> x.TienGui;
		if (x.TienGui <= 0)
		{
			cout << "\n Tien Gui khong Hop LE!";
		}
	} while (x.TienGui<=0);


	return is;
}
ostream& operator <<(ostream& os, Saving x)
{
	os << "\n CMND :" << x.CMND << "\n Ho Ten :" << x.Name <<x.NgayLapSo<< " \n Tien Gui :" << x.TienGui << "\n Lai suat:" << x.Laisuat;
	return os;
}
bool Saving::UpdateMonth()
{
	//Lay gio He thong ne
	int Daynow, MonthNow, YearNow;
	time_t t = time(0);
	struct tm *now = localtime(&t);
	YearNow = now->tm_year + 1900;//Cong 1990
	MonthNow = now->tm_mon + 1;//Tinh tu 0 
	Daynow = now->tm_mday;
	//Ngay Lap so
	int DayGui, MountGui, YearGui;
	DayGui = NgayLapSo.getday();
	MountGui = NgayLapSo.getMonth();
	YearGui = NgayLapSo.getyear();
	//Process sustrack
	//kiem tra ngay gui khong the be hon ngay he thong duoc
	if (YearNow < YearGui)
	{
		return false;
	}
	else
	{
		if (YearNow == YearGui&&MonthNow < MountGui)
		{
			return false;
		}
	}
	//mang ngay trong  thang
	int arr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	//dung ne tinh ra thang thoi
	double n = (YearNow - YearGui) * 12;//tinh nam ra thang ne
	if (MonthNow>MountGui)
	{
		n += MonthNow - MountGui;
	}
	else
	{

		n -= MountGui - MonthNow;
	}
	if (Daynow > DayGui)
	{
		n += (float)(Daynow - DayGui) / arr[MonthNow + 1];
	}
	else
	{
		n--;
		n += (float)(DayGui - Daynow) / arr[MonthNow + 1];
	}
	//cap nhat 
	ThangDaGui = n;
	// cout << "\n Thang gui" << n;
	//ngay 24 7 1998
	//ngay 10 3 2000

	return true;


}
string Saving::GetCMND()
{
	return CMND;
}
void Saving::SetCMND(string x)
{
	CMND = x;
}

Saving::Saving()
{
}


Saving::~Saving()
{
}
