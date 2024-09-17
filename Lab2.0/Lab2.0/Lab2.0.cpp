#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;



int main()
{
	SetConsoleCP(1251);

	SetConsoleOutputCP(1251);
	double x, z1, z2;

	cout << "a = "; cin >> x;

	z1 = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) + 1 - 2 * sin(2 * x) * sin(2 * x));
	//z2 = 2 * sin(x);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;

	system("pause");
	return 0;

}