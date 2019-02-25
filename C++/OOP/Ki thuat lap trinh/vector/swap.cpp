#include <iostream>
#include <vector>
using namespace std;

void XuatMang(vector<int> arr)
{
	for(int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << "   ";
	}
}

int main()
{
	vector<int> arr, arr_1;

	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);

	arr_1.push_back(69);

	cout << "\n\n\t\t* Truoc Khi Swap *\n";
	cout << "\narr: ";
	XuatMang(arr);
	cout << "\narr_1: ";
	XuatMang(arr_1);

	arr.swap(arr_1);

	cout << "\n\n\t\t* Sau Khi Swap *\n";
	cout << "\narr: ";
	XuatMang(arr);
	cout << "\narr_1: ";
	XuatMang(arr_1);
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int x = 6;
//
//	if(x % 2 == 0)
//	{
//		cout << "1";
//	}
//
//	else if(x + 1 == 7)
//	{
//		cout << "2";
//	}
//
//	else if(x - 1 == 5)
//	{
//		cout << "3";
//	}
//	return 0;
//}
