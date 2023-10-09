#include <iostream>
#include <cmath>
using namespace std;

float Tinh();
int main()
{
	cout << "Ket qua:";
	cout << Tinh();
	return 0;
}
float Tinh()
{
	float s = 0;
	float m = 0;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		m = m + i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}
