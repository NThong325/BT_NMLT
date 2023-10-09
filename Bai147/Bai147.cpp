#include <iostream>
#include <cmath>
using namespace std;

int ktToanLe(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	if (ktToanLe(n) == 1)
		cout << "Toan le";
	else
		cout << "Khong toan le";
	return 0;
}
int ktToanLe(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	return flag;
}