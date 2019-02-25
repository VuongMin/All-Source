#pragma once
#include"Term.h"
#include "NonTerm.h"
#include <vector>
#include<conio.h>
class Bank
{
private:
	vector <NonTerm>ListNonTerm;
	vector<Term>ListTerm;
public:
	friend istream& operator >>(istream&, Bank&);
	friend ostream& operator <<(ostream&, Bank);
	double TinhTongLai();
	Bank();
	~Bank();
};






