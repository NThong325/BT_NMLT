#include <iostream>
#include <cmath>
using namespace std;

int ktDang2m(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	if (ktDang2m(n) == 1)
		cout << "La dang";
	else
		cout << "Khong la dang";
	return 0;
}
int ktDang2m(int nn)
{
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = 0;
		t = t / 5;
	}
	return flag;
}