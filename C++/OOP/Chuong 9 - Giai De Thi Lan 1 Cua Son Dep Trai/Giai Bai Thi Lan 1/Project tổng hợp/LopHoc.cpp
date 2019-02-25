#include "LopHoc.h"

void LopHoc::Nhap()
{
	int luachon;

	do{
		cout << "\n--------------- Menu ---------------\n";
		cout << "\n1. Nhap sinh vien";
		cout << "\n2. Thoat";
		cout << "\n------------------------------------\n";

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
			string mssv;
			bool Check;

			do{
				fflush(stdin);
				cout << "\nNhap mssv: ";
				getline(cin, mssv);

				Check = true; // Khởi tạo ban đầu

				int size = DanhSachLop.size();

				for(int i = 0; i < size; i++)
				{
					if(DanhSachLop[i].Getter_MaSo() == mssv)
					{
						Check = false;
						break;
					}
				}
				if(Check == false)
				{
					cout << "\nMa so sinh vien da bi trung. Xin kiem tra lai !";
				}
			}while(Check == false);
			SinhVien sv;
			sv.Setter_MaSo(mssv);
			sv.Nhap();
			DanhSachLop.push_back(sv);
		}

	}while(luachon != 2);
}

void LopHoc::Xuat()
{
	int size = DanhSachLop.size();

	for(int i = 0; i < size; i++)
	{
		cout << "\nThong tin sinh vien thu " << i + 1 << "\n";
		DanhSachLop[i].Xuat();
	}
}

template <class T>
void HoanVi(T &a, T &b)
{
	T Temp = a;
	a = b;
	b = Temp;
}

// Sắp giảm dần theo điểm trung bình
void LopHoc::SapXep()
{
	int size = DanhSachLop.size();

	for(int i = 0; i < size - 1; i++)
	{
		for(int j = i + 1; j < size; j++)
		{
			if(DanhSachLop[i].TinhDiemTrungBinh() < DanhSachLop[j].TinhDiemTrungBinh())
			{
				HoanVi<SinhVien>(DanhSachLop[i], DanhSachLop[j]);
			}
			else if(DanhSachLop[i].TinhDiemTrungBinh() == DanhSachLop[j].TinhDiemTrungBinh())
			{
				if(DanhSachLop[i].Getter_MaSo() > DanhSachLop[j].Getter_MaSo())
				{
					HoanVi<SinhVien>(DanhSachLop[i], DanhSachLop[j]);
				}
			}
		}
	}
}

int LopHoc::XepHang(string mssv)
{
	SapXep(); // Phải sắp xếp trước

	int size = DanhSachLop.size();

	for(int i = 0; i < size; i++)
	{
		if(DanhSachLop[i].Getter_MaSo() == mssv)
		{
			return i + 1; // Phải có i + 1 do chỉ số bắt đầu từ 0
		}
	}
	return -1; // Không tìm thấy.
}

vector<SinhVien> LopHoc::Getter_DanhSachLop()
{
	return DanhSachLop;
}

void LopHoc::Setter_DanhSachLop(vector<SinhVien> list)
{
	int size = list.size();

	for(int i = 0; i < size; i++)
	{
		DanhSachLop.push_back(list[i]);
	}
}

void LopHoc::DocFile(ifstream &FileIn)
{
	string n;
	getline(FileIn, n);

	int size = atoi(n.c_str());

	// Mỗi lần vòng lặp chạy thì push_back 1 sinh viên vào danh sách lớp.
	for(int i = 1; i <= size; i++)
	{
		SinhVien sv;

		string maso;
		getline(FileIn, maso, '-');
		maso.erase(maso.begin() + maso.length() - 1); // Xóa khoảng trắng ở cuối

		FileIn.seekg(1, SEEK_CUR); // Dịch 1 byte kể từ vị trí hiện tại.

		sv.Setter_MaSo(maso); // Cập nhật mã số cho sinh viên

		string hoten;
		getline(FileIn, hoten, '-');

		hoten.erase(hoten.begin() + hoten.length() - 1); // Xóa khoảng trắng ở cuối.

		sv.Setter_HoTen(hoten);

		// Nếu muốn an toàn dịch thêm 1 byte, còn không cũng không cần do số thì nó tự bỏ khoảng trắng đi, ko tính khoảng trắng


		string m;
		getline(FileIn, m);

		int soluongmon = atoi(m.c_str());

		// Vòng lặp chạy m lần, mỗi lần đọc 1 môn.
		for(int j = 1; j <= soluongmon; j++)
		{
			MonHoc mh;

			string tenmonhoc;
			getline(FileIn, tenmonhoc, '-');

			tenmonhoc.erase(tenmonhoc.begin() + tenmonhoc.length() - 1); // Xóa khoảng trắng ở cuối.

			mh.Setter_Ten(tenmonhoc);

			// Nếu muốn an toàn thì dịch 1 byte

			int sochi;
			FileIn >> sochi;

			mh.Setter_SoChi(sochi);

			FileIn.seekg(3, SEEK_CUR); // Dịch 3 bytes kể từ vị trí hiện tại.

			string d;
			getline(FileIn, d);

			float diem = atof(d.c_str());

			mh.Setter_Diem(diem);

			sv.Setter_ListMonHoc(mh);
		}
		DanhSachLop.push_back(sv);
	}
}

void LopHoc::GhiFile(ofstream &FileOut)
{
	SapXep(); // Sắp xếp danh sách lớp học.

	int size = DanhSachLop.size();

	FileOut << size << endl;

	for(int i = 0; i < size; i++)
	{
		FileOut << DanhSachLop[i].Getter_MaSo() << " - " << DanhSachLop[i].Getter_HoTen() << " - " << DanhSachLop[i].TinhDiemTrungBinh() << " - " << DanhSachLop[i].XepLoai() << " - " << i + 1 << endl;
	}
}

LopHoc::LopHoc(void)
{
}


LopHoc::~LopHoc(void)
{
}
