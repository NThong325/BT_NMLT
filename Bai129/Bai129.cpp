#include <iostream>
#include <cmath>
using namespace std;
void HoanVi(float&, float&, float&);
int main()
{
	float a;
	cout << "Nhap a:";
	cin >> a;
	float b;
	cout << "Nhap b:";
	cin >> b;
	float c;
	cout << "Nhap c:";
	cin >> c;
	cout << "\nTruoc hoan vi:";
	cout << "\na=" << a;
	cout << "\nb=" << b;
	cout << "\nc=" << c;
	HoanVi(a, b, c);
	cout << "\nSau hoan vi:";
	cout << "\na=" << a;
	cout << "\nb=" << b;
	cout << "\nc=" << c;
	return 0;
}
void HoanVi(float& aa, float& bb, float& cc)
{
	float temp;
	if (aa > bb)
	{
		temp = aa;
		aa = bb;
		bb = temp;
	}
	if (aa > cc)
	{
		temp = aa;
		aa = cc;
		cc = temp;
	}
	if (bb > cc)
	{
		temp = bb;
		bb = cc;
		cc = temp;
	}
}