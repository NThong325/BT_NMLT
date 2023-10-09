#include <iostream>
#include <cmath>:
using namespace std;

int songuyen(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Gia tri nguyen duong lon nhat can tim la:";
	cout << songuyen(n);
	return 0;
}
int songuyen(int nn)
{
	int s = 0;
	int k = 0;
	while (s + k + 1 < nn)
	{
		k = k + 1;
		s = s + k;
	}
	return k;
}