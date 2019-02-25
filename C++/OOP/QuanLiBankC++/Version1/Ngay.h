#pragma once
#include<iostream>
using namespace std;
class CNgay
{
private :
	int Day, Month, Year;
public:
	CNgay();
	~CNgay();
	CNgay(int, int, int);
	//Operator Nhap -Xuat
	friend istream& operator >>(istream&, CNgay&);
	friend ostream& operator <<(ostream&, CNgay);
	//Get-Set
	int getday();
	void setday(int);
	int getMonth();
	void setMonth(int);
	int getyear();
	void setyear(int);

	
};

