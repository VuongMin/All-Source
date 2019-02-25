#include "Hocsinh.h"


Hocsinh::Hocsinh()
{
	Maso = "";
	Hoten = "";
	SoLuongMonhoc = 0;
	//Monhoc mh;
	//ListMonhoc.push_back(mh);
}
Hocsinh::Hocsinh(string ms, string ht, vector<Monhoc> List)
{
	Maso = ms;
	Hoten = ht;
	//Gan 2 Mang cho nhau<2 Mang khong the gan truc tiep ma phai gan tung phan tu>
	//chay theo size cua list vi ListMonHoc ban dau Phan tu = 0 
	int size = List.size();
	for (int i = 0; i < size; i++)
	{
		ListMonhoc.push_back(List[i]);
	}
}
vector<Monhoc> Hocsinh::GetListMonhoc()
{
	return ListMonhoc;
}
void Hocsinh::SetListMonhoc(Monhoc x)
{
	ListMonhoc.push_back(x);
}
string Hocsinh::GetMaso()
{
	return Maso;
}
void Hocsinh::SetMaso(string x)
{
	Maso = x;
}
string Hocsinh::GetName()
{
	return Hoten;
}
void Hocsinh::SetName(string x)
{
	Hoten = x;
}
Hocsinh::~Hocsinh()
{
}
void Hocsinh::InputHocsinh()
{
	//cout << "\n Nhap vao Ma so:";
	//getline(cin, Maso);
	cout << "\n Nhap vao Ho ten:";
	getline(cin, Hoten);
	do
	{
		cout << "\n Nhap vao So luong dang ky mon hoc:";
		cin >> SoLuongMonhoc;
		if (SoLuongMonhoc < 1)
		{
			cout << "\n So luong dang ki khong hop le.";
		}
	} while (SoLuongMonhoc<1);
	for (int i = 0; i < SoLuongMonhoc; i++)
	{
		Monhoc mh;
		mh.InputMonhoc();
		ListMonhoc.push_back(mh);
	}

}
void Hocsinh::OutHocsinh()
{
	cout << "\nTen :" << Hoten;
	cout << "\n Ma so :" << Maso;
	int size = ListMonhoc.size();
	for (int i = 0; i <size ; i++)
	{
		cout << "\n===Mon Thu " << i + 1 << "====\n";
		ListMonhoc[i].OutMonhoc();
	}
}
//Method operator
 istream& operator >>(istream& is, Hocsinh& hs)
{
	 fflush(stdin);
	 cout << "\n Nhap Ma so:";
	 getline(is, hs.Maso);//vi is dung cho cai file luon
	 fflush(stdin);
	 cout << "\n Nhap Hoten:";
	 getline(is, hs.Hoten);
	 
	 cout << "\n Nhap so luong:";
	 is >> hs.SoLuongMonhoc;
	 for (int i = 0; i < hs.SoLuongMonhoc; i++)
	 {
		 Monhoc mh;
		 is >> mh;
		 hs.ListMonhoc.push_back(mh);
		 
	 }
	 return is;
}
 ostream& operator <<(ostream& os, Hocsinh hs)
 {
	 os << "\n  Ho Ten :" << hs.Hoten;
	 os << "\nMa so:" << hs.Maso;
	 os << "\n======Mon Hoc======\n";
	 for each (Monhoc var in hs.ListMonhoc)
	 {
		 os << var<<"\n";
	 }
	 return os;
 }
 //Method Process
 double Hocsinh::DiemTrungBinh()
 {
	 int TongSoChi = 0;
	 double sum = 0;
	 int size = ListMonhoc.size();
	 for (int i = 0; i < size; i++)
	 {
		 sum += (ListMonhoc[i].Getdiem()* ListMonhoc[i].Getsochi());
		 TongSoChi += ListMonhoc[i].Getsochi();
	 }
	 return sum / TongSoChi;
 }
 string Hocsinh::XepLoai()
 {
	 double dtb = this->DiemTrungBinh();
	 if (dtb>9)
	 {
		 return "xuat sac!";
	 }
	 if (dtb > 8)
	 {
		 return "Gioi!";
	 }
	 if (dtb > 7)
	 {
		 return"Kha";
	 }
	 if (dtb > 5)
	 {
		 return "Trung Binh";
	 }
	 return "yeu";
 }