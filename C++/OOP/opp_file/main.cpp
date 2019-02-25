#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class HocSinh
{
private:
	string Ten;
	float Toan, Ly, Hoa;
public:
	void Nhap(ifstream &FileIn)
	{
		getline(FileIn, Ten, '-');
		FileIn >> Toan;

		// bỏ qua 3 bytes kể từ vị trí hiện tại
		FileIn.seekg(3, 1);

		FileIn >> Ly;

		// bỏ qua 3 bytes kể từ vị trí hiện tại
		FileIn.seekg(3, 1);

		FileIn >> Hoa;

		string str;
		getline(FileIn, str);
	}

	void Xuat()
	{
		cout << "\nTen: " << Ten;
		cout << "\nToan: " << Toan;
		cout << "\nLy: " << Ly;
		cout << "\nHoa: " << Hoa;
	}
};

int main()
{
	ifstream FileIn("INPUT.txt", ios_base::in);

	if(!FileIn)
	{
		cout << "\nKhong tim thay tap tin INPUT.TXT";
		system("pause");
		return 0;
	}
	vector<HocSinh> arr;
	while(!FileIn.eof())
	{
		HocSinh hs;
		hs.Nhap(FileIn);
		arr.push_back(hs);
	}

	int size = arr.size();
	for(int i = 0; i < size; i++)
	{
		cout << "\nThong tin hoc sinh thu " << i + 1 << " la: \n";
		arr[i].Xuat();
	}

	FileIn.close(); // đóng file lại.

	system("pause");
	return 0;
}
