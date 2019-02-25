#include"Lophoc.h"
int main()
{
	Lophoc lh;
	//Read
	ifstream FileIn;
	FileIn.open("Input.txt", ios_base::in);
	while (!FileIn)
	{
		cout << "\n File Khong ton tai.";
		system("pause");
		return 0;
	}

	lh.ReadFile(FileIn);
	FileIn.close();
	cout << "\n---------- Danh sach Lop ReadFile------------------\n";
	lh.OutLop();


	//Mo File
	ofstream Fileout;
	Fileout.open("OUTPUT.txt", ios_base::out);//Luu data lien tuc ne.
	//Lophoc lh;
	//cin >> lh;
	lh.DownFile(Fileout);
	Fileout.close();
	//-------------------------------------------------------------------
	/*Lophoc lh;
	//lh.InputLop();
	//lh.OutLop();
	cin >> lh;
	cout << lh;
	string Maso;
	cout << "\n Nhap vao Ma so can Tim:";
	fflush(stdin);
	getline(cin, Maso);
	lh.ThuHang( Maso);
	// 1 học sinh nè
	/*Hocsinh hs;
	vector<Monhoc> mh;
	Hocsinh hs2("001","Min",mh);
	cout << hs2;
	hs.InputHocsinh();
	hs.OutHocsinh();
	cin >> hs;
	cout << hs;
	cout << "\n Diem Trung Binh :" << hs.DiemTrungBinh();
	cout << "\n Xep loai:" << hs.XepLoai();
	*/
	system("pause");
	return 0;

}