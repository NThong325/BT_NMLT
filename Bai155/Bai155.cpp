#include <iostream>
#include <cmath>
using namespace std;

float GiaTri(float);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Gia tri:";
	cout << GiaTri(n);
	return 0;
}
float GiaTri(float nn)
{
	float t = 1;
	int i = 0;
	while (i <= nn)
	{
		t = t * 2;
		i = i + 1;
	}
	return t;
}