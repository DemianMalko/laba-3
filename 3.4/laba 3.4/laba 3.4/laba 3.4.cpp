// < Малько Дем'ян Денисович >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 9
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double r; // вхіжний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "r = "; cin >> r;
	// розалуження в повній формі
	if ((y >= (x - 1) * (x - 1) && (y * y) <= (r * r) - (x * x) && x >= 0 && y > 0) || 
		(y *y +x*x<= r*r && y <= 0 && x <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;

}