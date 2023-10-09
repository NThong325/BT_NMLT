#include <iostream>
#include <cmath>
using namespace std;

int Dem(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "So luong chu so le cua so nguyen n:";
	cout << Dem(n);
	return 0;
}
int Dem(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			dem++;
		t = t / 10;
	}
	return dem;
}