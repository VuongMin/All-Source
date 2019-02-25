#include<iostream>
using namespace std;
//Tao class co con tro 
class MyClass
{
public:
	void nhap();
	void xuat();
	MyClass();
	MyClass(int, int *);
	MyClass(const MyClass&);
	~MyClass();


private:
	int n;
	int *a;

};

void MyClass::nhap()
{
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
}
void MyClass::xuat()
{ 
	for (int i = 0; i < n; i++)
	{ 
		cout << a[i] << " ";
	}
}

MyClass::MyClass(int soluong, int *mang)
{
	n = soluong;
	for (int i = 0; i < soluong; i++)
	{
		a[i] = mang[i];//gan tu phan tu qua
	}
}
MyClass::MyClass()
{
	n = 5;
	a = NULL;
}

MyClass::~MyClass()
{
	delete[]a;
}

int main()
{
	MyClass x;
	x.nhap();//Luu y:vi khi ta khoi tao trong thi ta phai goi de no moi co du lieu nhe!
	x.xuat();
	//Ham Truyen vao co tham so
	int *mang = new int[] { 2, 4, 6, 8, 9 };
	MyClass ThamSo(5,mang);
	ThamSo.xuat();
	//Copy x qua y bang cu phap mac dinh cua chuong trinh
	//Luu Y:Voi Poiter thi no khong duoc ap dung nhu vay vi no se sao chep vung nho qua het,1 thay doi ca 2 thay doi

	//MyClass y(x); -- Mac dinh ne
	//cout << "\n--- Y----\n";
	//y.xuat();

	system("pause");
	return 0;

}