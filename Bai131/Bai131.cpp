#include <iostream>
#include <cmath>
using namespace std;

float do_dai_canh(float, float, float, float);
int main()
{
	float x1, y1, x2, y2, x3, y3;
	cout << "Nhap x1:";
	cin >> x1;
	cout << "Nhap y1:";
	cin >> y1;
	cout << "Nhap x2:";
	cin >> x2;
	cout << "Nhap y2:";
	cin >> y2;
	cout << "Nhap x3:";
	cin >> x3;
	cout << "Nhap y3:";
	cin >> y3;
	float a = do_dai_canh(x1, y1, x2, y2);
	float b = do_dai_canh(x2, y2, x3, y3);
	float c = do_dai_canh(x1, y1, x3, y3);
	if (a + b > c && a + c > b && b + c > a)
		cout << "La tam giac";
	else
		cout << "Khong phai la tam giac";
	return 0;
}
float do_dai_canh(float x1, float y1, float x2, float y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}