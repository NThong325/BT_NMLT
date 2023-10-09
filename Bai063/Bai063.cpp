#include <iostream>
#include <cmath>
using namespace std;

float Tich(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Tich la:";
	cout << Tich(n);
	return 0;
}
float Tich(int nn)
{
	float tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			tich = tich * dv;
		t = t / 10;
	}
	return tich;
}