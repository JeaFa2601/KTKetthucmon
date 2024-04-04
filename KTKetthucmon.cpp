// KTKetthucmon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// KTKetthucmon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float s, l, p;
	int a, b, o, k;
	cout << "Nhap so a =";
	cin >> a;
	cout << "Nhap so b =";
	cin >> b;

	s = a + b;
	l = a - b;
	p = a * b;
	if (a,b == 0) {
		cout << "Khong Chia Duoc Cho 0" << endl;
	}
	o = a / b;

	
	{
		cout << "Tong =" << s << endl;
		cout << "Hieu =" << l << endl;
		cout << "Tich =" << p << endl;
		cout << "Chia =" << o << endl;
	}



	return 0;

}








