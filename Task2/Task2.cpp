#include <iostream>
using namespace std;
#include "math.h"
double fun(double x)
{
	return  sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4)) / (sqrt(pow(x, 2) - 4 + x + 2));
}
void main()
{
	double x, f;
	cout << "x= ";
	cin >> x;

	f = fun(x);
	cout << "F= " << f;
}