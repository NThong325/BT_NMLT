#include <iostream>
#include <cmath>
using namespace std;

void thay(float&, float&);
int main()
{
	float a;
	cout << "Nhap a:";
	cin >> a;
	float b;
	cout << "Nhap b:";
	cin >> b;
	cout << "Truoc doi dau:";
	cout << "\na=" << a;
	cout << "\nb=" << b;
	thay(a, b);
	cout << "\nSau doi dau:";
	cout << "\na=" << a;
	cout << "\nb=" << b;
	return 0;
}
void thay(float& aa, float& bb)
{
	if (aa < 0)
		aa = -aa;
	if (bb < 0)
		bb = -bb;
}