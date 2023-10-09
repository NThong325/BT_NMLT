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
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			t = t * i;
		i = i + 2;
	}
	return t;
}