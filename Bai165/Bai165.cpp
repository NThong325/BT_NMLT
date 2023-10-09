#include <iostream>
#include <cmath>:
using namespace std;

int songuyen(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "So nguyen lon nhat can tim la:";
	cout << songuyen(n);
	return 0;
}
int songuyen(int nn)
{
	int t = 1;
	int k = 0;
	while (2 * t <= nn)
	{
		t = t * 2;
		k = k + 1;
	}
	return k;
}