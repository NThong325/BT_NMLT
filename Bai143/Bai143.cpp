#include <iostream>
#include <cmath>
using namespace std;

int ktHoanThien(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	if (ktHoanThien(n) == 1)
		cout << "Hoan thien";
	else
		cout << "Khong hoan thien";
	return 0;
}
int ktHoanThien(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s == nn)
		return 1;
	return 0;
}