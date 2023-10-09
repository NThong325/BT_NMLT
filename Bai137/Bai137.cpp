#include <iostream>
#include <cmath>
using namespace std;

float HamSo(float);
int main()
{
	float x;
	cout << "Nhap x:";
	cin >> x;
	cout << "Gia tri cua ham so la:";
	cout << HamSo(x);
	return 0;
}
float HamSo(float xx)
{
	float f;
	if (xx >= 5)
		f = 2 * xx * xx + 5 * xx + 9;
	else
		f = -2 * xx * xx + 4 * xx - 9;
	return f;
}