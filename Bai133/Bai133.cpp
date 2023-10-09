#include <iostream>
#include <cmath>
using namespace std;

void TamGiac(float, float, float);
int main()
{
	float x;
	cout << "Nhap x:";
	cin >> x;
	float y;
	cout << "Nhap y:";
	cin >> y;
	float z;
	cout << "Nhap z:";
	cin >> z;
	TamGiac(x, y, z);
	return 0;
}
void TamGiac(float xx, float yy, float zz)
{
	if (xx + yy > zz && yy + zz > xx && xx + zz > yy)
	{
		if (xx == yy && yy == zz)
			cout << "Tam giac deu";
		else
		{
			if (xx * xx == yy * yy + zz * zz || yy * yy == xx * xx + zz * zz || zz * zz == yy * yy + xx * xx)
			{
				if (xx == yy || zz == yy || xx == zz)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac vuong";
			}
			else
			{
				if (xx == yy || zz == yy || xx == zz)
					cout << "Tam giac can";
				else
					cout << "Tam giac thuong";
			}
		}
	}
	else
		cout << "Khong phai la tam giac"; (xx == yy || zz == yy || xx == zz);
}