#include <iostream>
using namespace std;
float TinhS(int xx, int nn)
{
	float s = 1;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + t*(i+1);
		i = i + 1;
	}
	return s;
}
int main()
{
	int x, n;
	cin >> x >> n;
	cout << "Ket qua:";
	cout << TinhS(x, n);
	return 0;
}