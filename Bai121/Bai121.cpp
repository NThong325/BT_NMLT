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
	if (nn == 0)
		return 1;
	if (nn == 1)
		return 1;
	int att = 1;
	int at = 1;
	int ahh;
	int i = 2;
	while (i <= nn)
	{
		ahh = at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}