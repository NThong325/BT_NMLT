#include <iostream>
#include <cmath>:
using namespace std;

int uocsole(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Uoc so le lon nhat cua so nguyen duong n:";
	cout << uocsole(n);
	return 0;
}
int uocsole(int nn)
{
	int t = nn;
	while (t % 2 == 0)
		t = t / 2;
	return t;
}