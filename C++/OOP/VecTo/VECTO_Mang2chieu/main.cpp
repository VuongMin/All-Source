#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void NhapMang(vector<vector<int>> &a, int dong, int cot)
{
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			cout << "\nNhap vao a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void XuatMang(vector<vector<int>> a)
{
	int dong = a.size();
	int cot = a[0].size();

	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			cout << setw(6) << a[i][j];
		}
		cout << endl;
	}
}

int main()
{
	int dong = 3, cot = 4;
	vector<vector<int>> a; // Khai báo vector 2 chiều.

	/* Cấp phát */
	a.resize(dong);
	for(int i = 0; i < dong; i++)
	{
		a[i].resize(cot);
	}

	NhapMang(a, dong, cot);
	XuatMang(a);

	system("pause");
	return 0;
}
