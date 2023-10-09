#include <iostream>
#include <cmath>
using namespace std;

int ktChinhPhuong(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	if (ktChinhPhuong(n) == 1)
		cout << "Chinh phuong";
	else
		cout << "Khong phai la chinh phuong";
	return 0;
}
int ktChinhPhuong(int nn)
{
	int flag = 0;
	int i = 1;
	while (i <= nn)
	{
		if (i * i == nn)
			flag = 1;
		i = i + 1;
	}
	return flag;
}