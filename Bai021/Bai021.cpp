#include <iostream>
#include <cmath>
using namespace std;

float LuyThua(float);
int main()
{
	float x;
	cout << "Nhap x:";
	cin >> x;
	cout << LuyThua(x);
	return 1;
}
float LuyThua(float x)
{
	float x2 = x * x;
	cout << "x2:" << x2;
	float x4 = x2 * x2;
	cout << "\nx4:" << x4;
	float x8 = x4 * x4;
	cout << "\nx8:" << x8;
	float x16 = x8 * x8;
	cout << "\nx16:" << x16;
	float x15 = x16 / x;
	cout << "\nx15:";
	return x15;
}