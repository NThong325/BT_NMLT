#include <iostream>
#include <cmath>
using namespace std;

int linhcanh(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Chu so nho nhat cua so nguyen n la:";
	cout << linhcanh(n);
	return 0;
}
int linhcanh(int nn)
{
	float lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}