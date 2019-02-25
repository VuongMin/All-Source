#pragma once
#include"Saving.h"
class Term:public Saving
{
private:
	int Kyhan;
public:
	friend istream& operator>>(istream&, Term&);
	friend ostream& operator<<(ostream&, Term);
	double TinhTienLai();
	Term();
	~Term();
};

