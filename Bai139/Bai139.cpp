#include <iostream>
#include <cmath>
using namespace std;

float a;
float b;
void HamSo();
int main()
{
	cout << "Nhap a:";
	cin >> a;
	cout << "Nhap b:";
	cin >> b;
	HamSo();
	return 0;
}
void HamSo()
{
	if (a == 0)
	{
		if (b == 0)
			cout << "Vo so nghiem";
		else
			cout << "Vo nghiem";
	}
	else
	{
		float x = -b / a;
		cout << "x=" << x;
	}
}