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

	double result = func1(x);
	cout << "\n��������� 1 ������� = " << result << endl;
	double result1 = func2(x, y);
	cout << "\n��������� 2 ������� = " << result1 << endl;

	//�������� 2
	double a, b;
	cout << "\n������ �: ";
	cin >> a;
	cout << "\n������ b: ";
	cin >> b;

	double result2 = geometricAverage(a, b);
	cout << "\n��������� ������� = " << result2;

}