#include <iostream>
#include <cmath>
using namespace std;
float Tich(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Tong la:";
	cout << Tich(n);
	return 0;
}
float Tich(int nn)
{
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		i = i + 1;
	}
	return t;
}