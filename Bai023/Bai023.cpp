#include <iostream>
#include <cmath>
using namespace std;

int hc(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << hc(n);
	return 0;
}
int hc(int nn)
{
	int hc = (nn / 10) % 10;
	return hc;
}
