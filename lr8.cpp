#include "math.h"
#include "windows.h"
#include <iostream>
#include "func.h"

using namespace std;
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//�������� 1
	double x,y;
	cout << "������ x: ";
	cin >> x;
	cout << "������ y: ";
	cin >> y;

	int a = func1(x);
	cout << "\n��������� 1 ������� = " << a << endl;
	double b = func2(x, y);
	cout << "\n��������� 2 ������� = " << b << endl;

	//�������� 4

	double result3 = geometricAverage(a, b);
	cout << "\n��������� ������� = " << result3;

}