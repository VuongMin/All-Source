#include "Bank.h"


Bank::Bank()
{
}


Bank::~Bank()
{
}
istream& operator >>(istream& is, Bank &x)
{ 
	char Luachon;
	do
	{
		cout << "\n ------------------Menu---------------------\n";
		cout << "\n1.Term Book";
		cout << "\n2.Non-Term Book";
		cout << "\n3.Thoat";
		cout << "\n--------------------------------------------\n";
		Luachon = _getch();
		bool check;
		string cmnd;
		if (Luachon == '1' || Luachon == '2')
		{
			do
			{

				check = true;
				fflush(stdin);
				cout << "\n Nhap vao CMND:";
				is >> cmnd;
				//Duyet Tim trung
				int sizeTerm = x.ListTerm.size();
				int SizeNon = x.ListNonTerm.size();
				bool checkLoop = true;
				for (int i = 0; i <sizeTerm; i++)
				{
					if (x.ListTerm[i].GetCMND() == cmnd)
					{
						checkLoop = false;
						check = false;
						break;
					}
				}
				if (checkLoop == true)
				{
					for (int i = 0; i < SizeNon; i++)
					{
						if (x.ListNonTerm[i].GetCMND() == cmnd)
						{
							check = false;
							break;
						}
					}
				}
				if (check == false)
				{
					cout << "\n CMND Bi Trung...";
				}
			} while (check == false);
		}
		if (Luachon == '1')
		{
			Term a;
			is >> a;
			a.SetCMND(cmnd);
			x.ListTerm.push_back(a);
			
		}
		else if (Luachon=='2')
		{
			NonTerm a;
			is >> a;
			a.SetCMND(cmnd);
			x.ListNonTerm.push_back(a);
		}
		
	} while (Luachon!='3');
	return is;
}

ostream& operator <<(ostream& os, Bank x)
{
	int sizeTerm = x.ListTerm.size();
	int SizeNon = x.ListNonTerm.size();
	for (int i = 0; i < sizeTerm; i++)
	{
		os << x.ListTerm[i];
	}
	for (int i = 0; i < SizeNon; i++)
	{
		os << x.ListNonTerm[i];
	}
	return os;
}
double Bank::TinhTongLai()
{
	double Tong = 0;
	int sizeTerm = ListTerm.size();
	int SizeNon = ListNonTerm.size();
	for (int i = 0; i < sizeTerm; i++)
	{
		cout << "\n Term Book " << i + 1 << "--\n";
		Tong += ListTerm[i].TinhTienLai();
	}
	for (int i = 0; i < SizeNon; i++)
	{
		cout << "\n Non-Term Book " << i + 1 << "--\n";
		Tong += ListNonTerm[i].TinhLai();
	}
	return (size_t)Tong;
}