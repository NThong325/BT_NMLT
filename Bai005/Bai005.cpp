#include <iostream>
#include <cmath>
using namespace std;
float TheTich(float);

int main()
{
	float r;
	cout << "Nhap r:";
	cin >> r;
	cout << "The tich:";
	cout << TheTich(r);
	return 0;
}
float TheTich(float rr)
{
	return (float)4 / 3 * 3.14 * rr * rr * rr;
}