#include <iostream>
using namespace std;
float TinhS()
{
	float s = 0;
	float e = 0.5;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}
int main()
{
	cout << "Ket qua:";
	cout << TinhS();
	return 0;
}