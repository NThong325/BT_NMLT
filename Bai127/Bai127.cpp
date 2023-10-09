#include <iostream>
#include <cmath>
using namespace std;

float a;
float b;
float linhcanh();
int main()
{
	cout << "Nhap a:";
	cin >> a;
	cout << "Nhap b:";
	cin >> b;
	cout << "Gia tri nho nhat la:";
	cout << linhcanh();
	return 0;
}
float linhcanh()
{
	float lc = a;
	if (lc > b)
		lc = b;
	return lc;
}