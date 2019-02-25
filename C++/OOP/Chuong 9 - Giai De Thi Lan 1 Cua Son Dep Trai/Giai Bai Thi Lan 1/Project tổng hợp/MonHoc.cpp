#include "MonHoc.h"

// Nếu có trả về true
// Nếu không trả về false

/* 
Hợp lệ là số nguyên khi:
1. Trong chuỗi không có ký tự gì khác số và khác '-'
2. Dấu '-' chỉ được có 1 dấu duy nhất nằm ở đầu chuỗi

Trường hợp dấu "-"
"5-": không hợp lệ
"5-4": không hợp lệ
"--5": không hợp lệ
"-5": hợp lệ
*/
bool KiemTraLaSoNguyen(string s)
{
	int length = s.length();
	int dem = 0;

	for(int i = 0; i < length; i++)
	{
		if((s[i] < '0' || s[i] > '9') && s[i] != '-')
		{
			return false;
		}

		if(s[i] != '-' && s[i + 1] == '-')
		{
			return false;
		}

		if(s[i] == '-')
		{
			dem++;
			if(dem == 2)
			{
				return false;
			}
		}
	}
	return true;
}


void MonHoc::Nhap()
{
	fflush(stdin); // Xóa bộ nhớ đệm.
	cout << "\nNhap vao ten mon hoc: ";
	getline(cin, Ten);
	bool Check;

	do{
		cout << "\nNhap vao so chi cua mon hoc: ";
		//cin >> SoChi;
		string sochi;
		fflush(stdin);
		getline(cin, sochi);

		Check = KiemTraLaSoNguyen(sochi);

		if(Check == false)
		{
			cout << "\nKieu du lieu khong hop le. Xin kiem tra lai !";
		}
		else
		{
			SoChi = atoi(sochi.c_str());
			if(SoChi < 1)
			{
				Check = false;
				cout << "\nSo chi khong hop le. Xin kiem tra lai !";
			}
		}
	}while(Check == false);

	do{
		cout << "\nNhap vao diem cua mon hoc: ";
		cin >> Diem;

		if(Diem < 0 || Diem > 10)
		{
			cout << "\nDiem khong hop le. Xin kiem tra lai !";
		}
	}while(Diem < 0 || Diem > 10);
}

void MonHoc::Xuat()
{
	cout << "\nTen mon hoc: " << Ten;
	cout << "\nSo chi: " << SoChi;
	cout << "\nDiem: " << Diem;
}

MonHoc::MonHoc(void)
{
}


MonHoc::~MonHoc(void)
{
}

void MonHoc::Setter_SoChi(int sochi)
{
	SoChi = sochi;
}

void MonHoc::Setter_Diem(float diem)
{
	Diem = diem;
}

int MonHoc::Getter_SoChi()
{
	return SoChi;
}

float MonHoc::Getter_Diem()
{
	return Diem; 
}

string MonHoc::Getter_Ten()
{
	return Ten;
}

void MonHoc::Setter_Ten(string ten)
{
	Ten = ten;
}


