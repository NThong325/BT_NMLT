#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float DienTich(int, float);

int main()
{
	float r;
	cout << "Nhap r:";
	cin >> r;
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "DienTich:";
	cout << DienTich(n, r);
	return 0;
}
float DienTich(int nn, float rr)
{
	return (float)1 / 2 * nn * rr * rr * sin(M_PI * 2 / nn);
}