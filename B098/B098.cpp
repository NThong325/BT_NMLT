#include <iostream>
using namespace std;
float TinhS(int nn)
{
	float s = 0;
	int i = 2;
	while (i <= nn)
	{
		s = pow(i + s, i);
		i = i + 1;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << "Ket qua:";
	cout << TinhS(n);
	return 0;
}