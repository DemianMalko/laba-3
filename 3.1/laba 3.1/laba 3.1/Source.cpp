// < Малько Дем'ян >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;
	A = 2 * abs(x * x * x);
	// 1 спосіб
	if (x<=-0.1)
		B = 5 * cos(18 * x);
	if (-0.1 < x && x < 1.2)
		B = atan((x + 2) / 5);
	if (x >= 1.2)
		B = 1 / (tan(x + 18));
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// 2 спосіб
	if (x <= -0.1)
		B = 5 * cos(18 * x);
	else
		if (x >= 1.2)
			B = 1 / (tan(x + 18));
		else
			B = atan((x + 2) / 5);
	y = A - B;
	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}