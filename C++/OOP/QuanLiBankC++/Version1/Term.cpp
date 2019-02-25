#include "Term.h"


istream& operator >>(istream& is, Term& x)
{
	do
	{
		cout << "\n Nhap Ky han:";
		is >> x.Kyhan;
		if (x.Kyhan < 1)
		{
			cout << "\n ky han khong hop le!";
		}
	} while (x.Kyhan<1);
	// Goi nhap cua cha poiter
	Saving *cha = static_cast<Saving *>(&x);//ep kieu 
	is >> *cha;
	return is;

}
ostream& operator <<(ostream& os, Term x)
{
	//xuat cha
	Saving cha = static_cast<Saving >(x);
	os << "\n ky han:" << x.Kyhan;
	os << cha;
	return os;
}
double Term::TinhTienLai()
{
	if (Kyhan >= ThangDaGui)
	{
		return TienGui*Laisuat / 100 * ThangDaGui;
	}
	return 0;
}
Term::Term()
{
}


Term::~Term()
{
}
