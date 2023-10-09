#include <iostream>
#include <cmath>
using namespace std;

float TinhAn(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Ket qua:";
	cout << TinhAn(n);
	return 0;
}
float TinhAn(int nn)
{
	if (nn == 1)
		return 2;
	int at = 2;
	float ahh;
	int i = 2;
	while (i <= nn)
	{
		ahh = (float)(at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}
	return ahh;
}