#include "Ngay.h"
istream& operator >> (istream& is, CNgay& x)
{
	do
	{
		cout << "\n nhap vao ngay:";
		is >> x.Day;
		if (x.Day<1 || x.Day>31)
		{
			cout << "\n Ngày Không HoP lE!";
		}
	} while (x.Day<1||x.Day>31);

	do
	{
		cout << "\n nhap vao Thang:";
		is >> x.Month;
		if (x.Month <1|| x.Month>12)
		{
			cout << "\n Tháng Không HoP lE!";
		}
	} while (x.Month<1 || x.Month>12);

	do
	{
		cout << "\n nhap vao Nam:";
		is >> x.Year;
		if (x.Year<1940)
		{
			cout << "\n Nam Không HoP lE!";
		}
	} while (x.Year<1940 );
	return is;
}
ostream& operator << (ostream& os, CNgay x)
{
	os << "Ngay " << x.Day << " Thang " << x.Month << " Nam  " << x.Year;
	return os;
}
int CNgay::getday()
{
	return Day;
}
void CNgay::setday(int x)
{
	Day = x;
}
int CNgay::getyear()
{
	return Year;
}
void CNgay::setyear(int x)
{
	Year = x;
}
int CNgay::getMonth()
{
	return Month;
}
void CNgay::setMonth(int x)
{
	Month = x;
}
CNgay::CNgay()
{
}

CNgay::~CNgay()
{
}
 CNgay::CNgay(int d, int m, int y)
{
	Day = d;
	Month = m;
	Year = y;
}