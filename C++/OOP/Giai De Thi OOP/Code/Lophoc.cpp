#include "Lophoc.h"
template <class tml>
void Hoanvi(tml a, tml b)
{
	tml temp = a;
	a = b; 
	b = temp;
}
void Lophoc::Sort()
{
	int size = DanhsachLop.size();
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (DanhsachLop[i].DiemTrungBinh() < DanhsachLop[j].DiemTrungBinh())
			{
				Hoanvi<Hocsinh>(DanhsachLop[i], DanhsachLop[j]);
			}
			else if (DanhsachLop[i].GetMaso()>DanhsachLop[j].GetMaso())
			{
				Hoanvi<Hocsinh>(DanhsachLop[i], DanhsachLop[j]);
			}
 
		}
	}
}
Lophoc::Lophoc()
{
	
}
Lophoc::~Lophoc()
{
}
//Lophoc::Lophoc(vector<Hocsinh> x)
//{
//	DanhsachLop = x;
//}
 istream& operator>>(istream& is, Lophoc &x)
{
	 int LuaChon;
	 do
	 {
		 cout << "\n======Menu====\n";
		 cout << "\n 1.Tiep Tuc\n";
		 cout << "\n Phim Khac Thoat\n";
		 cout << "-------------------------\n";
		 cout << "\n Lua Chon ban:";
		 cin >> LuaChon;
		 if (LuaChon == 1)
		 {
			 string maso;//kiem tra ma so trung ne.
			 bool check;
			 do
			 {
				 check = true;
				 fflush(stdin);
				 cout << "\n Nhap vao Ma so:";
				 getline(cin, maso);
				 int size = x.DanhsachLop.size();
				 for (int i = 0; i < size; i++)
				 {
					 if (maso == x.DanhsachLop[i].GetMaso())
					 {
						 cout << "\n Ma so Bi Trung!";
						 check = false;
						 break;
					 }
				 }
			 } while (check == false);

			 Hocsinh hs;
			 hs.SetMaso(maso);//Dua ma so Vao ListHocsinh
			 hs.InputHocsinh();
			 x.DanhsachLop.push_back(hs);
		 }

	 } while (LuaChon==1);
	 return is;
}
 ostream& operator<<(ostream& os, Lophoc x)
 {
	 int size = x.DanhsachLop.size();
	 for (int i = 0; i < size; i++)
	 {
		 cout << "\n ------Hoc Sinh :" << i + 1 << "\---------n";
		 x.DanhsachLop[i].OutHocsinh();
		 cout << "\nDiem Tb:" << x.DanhsachLop[i].DiemTrungBinh();
	 }
	 return os;
 }
void Lophoc::InputLop()
{
	char LuaChon;
	do
	{
		cout << "\n ===================Menu===================\n";
		cout << "1.Input\n ";
		cout << "\n Phim Khac Thoat.\n";
		cout << "\n==================================\n";
		cin >> LuaChon;
		if (LuaChon == '1')
		{
			string maso;//kiem tra ma so trung ne.
			bool check;
			do
			{
				check = true;
				fflush(stdin);
				cout << "\n Nhap vao Ma so:";
				getline(cin, maso);
				int size = DanhsachLop.size();
				for (int i = 0; i < size; i++)
				{
					if (maso == DanhsachLop[i].GetMaso())
					{
						cout << "\n Ma so Bi Trung!";
						check = false;
						break;
					}
				}
			} while (check == false);

			Hocsinh hs;
			hs.SetMaso(maso);//Dua ma so Vao ListHocsinh
			hs.InputHocsinh();
			DanhsachLop.push_back(hs);
		}
	} while (LuaChon=='1');
	
	
}
void Lophoc::OutLop()
{
	int size = DanhsachLop.size();
	for (int i = 0; i < size; i++)
	{
		cout << "\n ------Hoc Sinh :" << i + 1 << "\---------n";
		DanhsachLop[i].OutHocsinh();
		cout << "\nDiem Tb:" << DanhsachLop[i].DiemTrungBinh();
	}
}
void  Lophoc::ThuHang(string str)
{
	Sort();
	int size = DanhsachLop.size();
	for (int i = 0; i < size; i++)
	{
		if (str == DanhsachLop[i].GetMaso())
		{
			cout << "\n ======Hoc sinh Can Tim==============\n";
			DanhsachLop[i].OutHocsinh();
			cout << "\n Xep Hang :" << i + 1;
			break;
		}
	}
	cout << "\n Ma so Khong Dung!";
}
void Lophoc::DownFile(ofstream& Fileout)
{
	Sort();//sap xep de co so hang theo i
	int size = DanhsachLop.size();
	Fileout << size << endl;//So Luong ne Dong dau trong fileout
	//Ghi Tung doi tuong xuong Fileout
	for (int i = 0; i < size; i++)
	{
		
		Fileout << DanhsachLop[i].GetMaso() << " - " << DanhsachLop[i].GetName() << " - " << DanhsachLop[i].DiemTrungBinh() << " - " << DanhsachLop[i].XepLoai() << " - " << i + 1<<endl;
	}

}
void Lophoc::ReadFile(ifstream& FileIn)
{
	
	int Nsinhvien;
	FileIn >> Nsinhvien;
	//Duyet Theo Con so Nsinhvien da biet.
	for (int i = 1; i <= Nsinhvien; i++)
	{
		Hocsinh hs;
		string Maso;
		getline(FileIn, Maso,'-');
		//xoa khoang trang thua
		Maso.erase(Maso.begin() + Maso.length() - 1);
		//Lay data tu 1 Sinh vien Roi ne.
		hs.SetMaso(Maso);
		string Name;
		getline(FileIn, Name, '-');
		Name.erase(Name.begin() + Name.length() - 1);
		hs.SetName(Name);
		int NBomon;
		FileIn >> NBomon;
		//Duyet Lay ra bO MON
		for (int i = 1; i <= NBomon; i++)
		{
		
			
			string NameBomon;
			getline(FileIn, NameBomon, '-');
			NameBomon.erase(NameBomon.begin() + NameBomon.length() - 1);
			int Sochi;
			FileIn >> Sochi;
			//Doi 3 bytes Tai Vi tri hien tai
			FileIn.seekg(3, SEEK_CUR);
			float Diem;
			FileIn >> Diem;
			//Add Dulieu  cua 1	Mon hoc
			Monhoc mh;
			mh.SetMonhoc(NameBomon);
			mh.Setsochi(Sochi);
			mh.Setdiem(Diem);
			//Add vao ListMonhoc cua 1 sv
			hs.SetListMonhoc(mh);
			
		}

		DanhsachLop.push_back(hs);
	}
	
}
