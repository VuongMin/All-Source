#include "SinhVien.h"

void SinhVien::Nhap()
{
	/*fflush(stdin);
	cout << "\nNhap vao ma so: ";
	getline(cin, MaSo);*/

	fflush(stdin);
	cout << "\nNhap vao ho ten: ";
	getline(cin, HoTen);

	int luachon;
	do{
		cout << "\n------------- Menu -------------\n";
		cout << "\n1. Nhap thong tin mon hoc";
		cout << "\n2. Thoat";
		cout << "\n--------------------------------\n";

		do{
			cout << "\nNhap vao lua chon: ";
			cin >> luachon;

			if(luachon != 1 && luachon != 2)
			{
				cout << "\nLua chon khong hop le. Xin kiem tra lai !";
			}
		}while(luachon != 1 && luachon != 2);

		if(luachon == 1)
		{
			MonHoc mh;
			mh.Nhap();
			ListMonHoc.push_back(mh);
		}

	}while(luachon != 2);
}

void SinhVien::Xuat()
{
	cout << "\nMa so: " << MaSo;
	cout << "\nHo ten: " << HoTen;

	int size = ListMonHoc.size();

	for(int i = 0; i < size; i++)
	{
		cout << "\nMon hoc thu " << i + 1 << "\n";
		ListMonHoc[i].Xuat();
	}
	cout << "\nDiem trung binh = " << TinhDiemTrungBinh();
}

istream& operator >>(istream &is, SinhVien &x)
{
	/*fflush(stdin);
	cout << "\nNhap vao ma so: ";
	getline(is, x.MaSo);*/

	fflush(stdin);
	cout << "\nNhap vao ho ten: ";
	getline(is, x.HoTen);

	int luachon;
	do{
		cout << "\n------------- Menu -------------\n";
		cout << "\n1. Nhap thong tin mon hoc";
		cout << "\n2. Thoat";
		cout << "\n--------------------------------\n";

		do{
			cout << "\nNhap vao lua chon: ";
			is >> luachon;

			if(luachon != 1 && luachon != 2)
			{
				cout << "\nLua chon khong hop le. Xin kiem tra lai !";
			}
		}while(luachon != 1 && luachon != 2);

		if(luachon == 1)
		{
			MonHoc mh;
			mh.Nhap();
			x.ListMonHoc.push_back(mh);
		}

	}while(luachon != 2);

	return is;
}

ostream& operator <<(ostream &os, SinhVien x)
{
	os << "\nMa so: " << x.MaSo;
	os << "\nHo ten: " << x.HoTen;

	int size = x.ListMonHoc.size();

	for(int i = 0; i < size; i++)
	{
		os << "\nMon hoc thu " << i + 1 << "\n";
		x.ListMonHoc[i].Xuat();
	}
	return os;
}

SinhVien::SinhVien(void)
{
	MaSo = "69";
	HoTen = "Son dep chai";
}

SinhVien::SinhVien(string hoten, string maso, vector<MonHoc> list)
{
	HoTen = hoten;
	MaSo = maso;
	int size = list.size();

	for(int i = 0; i < size; i++)
	{
		ListMonHoc.push_back(list[i]);
	}
}

SinhVien::SinhVien(const SinhVien &x)
{
	MaSo = x.MaSo;
	HoTen = x.HoTen;

	int size = x.ListMonHoc.size();
	// Cách 1: ListMonHoc.resize(size);
	for(int i = 0; i < size; i++)
	{
		ListMonHoc.push_back(x.ListMonHoc[i]);
		// Cách 1: ListMonHoc[i] = x.ListMonHoc[i];
	}
}

SinhVien::~SinhVien(void)
{
}

float SinhVien::TinhDiemTrungBinh()
{
	int tongsochi = 0;
	float tongdiem = 0;

	int size = ListMonHoc.size();

	for(int i = 0; i < size; i++)
	{
		tongsochi += ListMonHoc[i].Getter_SoChi();
		tongdiem += ListMonHoc[i].Getter_Diem() * ListMonHoc[i].Getter_SoChi();
	}
	return tongdiem / tongsochi;
}

string SinhVien::XepLoai()
{
	float Dtb = TinhDiemTrungBinh();

	// Cách nhập môn làm
	/*if(Dtb >= 9 && Dtb <= 10)
	{
		return "Xuat Sac";
	}

	else if(Dtb >= 8 && Dtb < 9)
	{
		return "Gioi";
	}
	else if(Dtb >= 7 && Dtb < 8)
	{
		return "Kha";
	}*/

	// Cách hay hơn chút xíu
	if(Dtb < 2)
	{
		return "Kem";
	}

	if(Dtb < 5)
	{
		return "Yeu";
	}

	if(Dtb < 6)
	{
		return "Trung Binh";
	}
	if(Dtb < 7)
	{
		return "Trung Binh Kha";
	}
	if(Dtb < 8)
	{
		return "Kha";
	}
	if(Dtb < 9)
	{
		return "Gioi";
	}
	return "Xuat Sac";
}

string SinhVien::Getter_MaSo()
{
	return MaSo;
}

void SinhVien::Setter_MaSo(string ms)
{
	MaSo = ms;
}

void SinhVien::Setter_HoTen(string ht)
{
	HoTen = ht;
}

string SinhVien::Getter_HoTen()
{
	return HoTen;
}

void SinhVien::Setter_ListMonHoc(MonHoc mh)
{
	ListMonHoc.push_back(mh);
}

vector<MonHoc> SinhVien:: Getter_ListMonHoc()
{
	return ListMonHoc;
}