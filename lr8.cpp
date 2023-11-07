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

	double result = func1(x);
	cout << "\nРезультат 1 формули = " << result << endl;
	double result1 = func2(x, y);
	cout << "\nРезультат 2 формули = " << result1 << endl;

	//Завдання 2
	double a, b;
	cout << "\nВведіть а: ";
	cin >> a;
	cout << "\nВведіть b: ";
	cin >> b;

	double result2 = geometricAverage(a, b);
	cout << "\nРезультат функції = " << result2;

}