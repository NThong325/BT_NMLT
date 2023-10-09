#include <iostream>
#include <cmath>
using namespace std;

int TinhAn(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Ket qua:";
	cout << TinhAn(n);
	return 0;
}
int TinhAn(int nn)
{
	if (nn == 1)
		return 2;
	int at = 2;
	int ahh;
	int i = 2;
	while (i <= nn)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	return ahh;
}