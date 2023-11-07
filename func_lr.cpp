#define _USE_MATH_DEFINES
#include <cmath>

double geometricAverage(double a, double b) {

	return sqrt(a * b);

}

double func1(int x) {
	return cbrt(pow(cos(x * x), 3) + fabs(10 * x - 6)) + sin(M_PI_2);
}

double func2(double x, double y) {
	return sqrt(x / (x + fabs(8 * pow(y, 3)))) - pow(sqrt(( x * x + x * 10 * y) / pow((x + y), 2)),1/5.0) + exp(5);

}