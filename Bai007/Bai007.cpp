#include <iostream>
#include <cmath>
using namespace std;
float DoC(float);

int main()
{
	float f;
	cout << "Nhap do f:";
	cin >> f;
	cout << "Do C:";
	cout << DoC(f);
	return 0;
}
float DoC(float f)
{
	return (float)5 / 9 * (f - 32);
}