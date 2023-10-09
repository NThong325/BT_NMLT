#include <iostream>
#include <cmath>:
using namespace std;

void flag(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	flag(n);
	return 0;
}
void flag(int nn)
{
	int flag = 1;
	int t = nn;
	while (t >= 10)
	{
		int dv = t % 10;
		int hc = (t / 10) % 10;
		if (hc > dv)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Tang";
	else
		cout << "Khong tang";
}