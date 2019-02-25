#pragma once
#include<iostream>
#include<string>
using namespace std;
class Monhoc
{
private:
	string TenMonhoc;
	int SoChiMonhoc;
	float DiemMonhoc;
public:
	string GetMonhoc()
	{
		return TenMonhoc;
	}
	void SetMonhoc(string x)
	{
		TenMonhoc = x;
	}
	int Getsochi()
	{
		return SoChiMonhoc;
	}
	void Setsochi( int value)
	{
		SoChiMonhoc = value;
	}
	float Getdiem()
	{
		return DiemMonhoc;
	}
	void Setdiem(float value)
	{
		DiemMonhoc = value;
	}
	Monhoc();
	Monhoc( string, int, float);
	~Monhoc();
	//Method Input
	void InputMonhoc();
	void OutMonhoc();
	//Method With Operator
	friend istream& operator >>(istream &, Monhoc &);
	friend ostream&  operator <<(ostream&, Monhoc);
};

