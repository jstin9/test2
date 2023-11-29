#include "math.h"
#include "windows.h"
#include <iostream>
#include "func.h"

using namespace std;
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Завдання 1
	double x,y;
	cout << "Введіть x: ";
	cin >> x;
	cout << "Введіть y: ";
	cin >> y;

	int a = func1(x);
	cout << "\nРезультат 1 формули = " << a << endl;
	double b = func2(x, y);
	cout << "\nРезультат 2 формули = " << b << endl;

	//Завдання 4

	double result3 = geometricAverage(a, b);
	cout << "\nРезультат формули = " << result3;

}