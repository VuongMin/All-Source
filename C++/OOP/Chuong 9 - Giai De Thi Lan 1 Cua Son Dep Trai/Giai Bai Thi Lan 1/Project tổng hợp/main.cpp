#include "LopHoc.h"
#include <fstream> // Thư viện hỗ trợ file của C++

int main()
{
	/*SinhVien x;
	cin >> x;
	cout << x;
	cout << "\nDiem trung binh = " << x.TinhDiemTrungBinh();
	cout << "\nXep loai: " << x.XepLoai();*/

	/*LopHoc lh;
	lh.Nhap();
	lh.Xuat();

	string mssv;
	fflush(stdin);
	cout << "\nNhap vao mssv can tim kiem: ";
	getline(cin, mssv);

	int Kq = lh.XepHang(mssv);

	if(Kq == -1)
	{
		cout << "\nMSSV khong ton tai trong lop hoc";
	}
	else
	{
		cout << "\nMssv " << mssv << " xep hang " << Kq << " trong lop hoc";
		cout << lh.Getter_DanhSachLop()[Kq - 1];
	}*/

	//LopHoc lh;
	//lh.Nhap();

	

	//LopHoc lh;

	//ifstream FileIn;

	// Mở file để đọc.
	//FileIn.open("INPUT.TXT", ios_base::in);

	//if(!FileIn)
	//{
	//	cout << "\nKhong tim thay tap tin INPUT.TXT";
	//	system("pause");
	//	return 0; // Kết thúc
	//}
	//
	///* 
	//CÚ PHÁP DÙNG CON TRỎ CHỈ VỊ

	//FileIn.seekg(<Độ dịch>, <Vị trí bắt đầu>)
	//- <Độ dịch>: Tính theo byte
	//	+ Số dương: Dịch lên
	//	+ Số âm: Dịch xuống
	//- <Vị trí bắt đầu>:
	//	+ 0 hay SEEK_SET: Tính từ đầu file
	//	+ 1 hay SEEK_CUR: Tính từ vị trí hiện tại con trỏ đang đứng
	//	+ 2 hay SEEK_END: Tính từ cuối file

	//vd:
	//FileIn.seekg(3, 1); // Dịch 3 bytes kể từ vị trí hiện tại.
	//*/

	//lh.DocFile(FileIn);

	// Đóng file lại.
	//FileIn.close();
	LopHoc lh;
	ofstream FileOut;

	// Mở file ra.
	FileOut.open("OUTPUT.TXT", ios_base::out);
	lh.Nhap();
	lh.GhiFile(FileOut);

	FileOut.close(); // Đóng file lại.

	system("pause");
	return 0;
}