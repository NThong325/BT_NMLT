#include<iostream>
#include<cmath>
using namespace std;

void NamNhuan(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	NamNhuan(n);
	return 0;
}
void NamNhuan(int nn)
{
	int dk1 = nn % 4;
	int dk2 = nn % 100;
	int dk3 = nn % 400;
	if (((dk1 == 0) && (dk2 != 0)) || (dk3 == 0))
		cout << "Nam nhuan";
	else
		cout << "Khong phai la nam nhuan";
}