#include <iostream>
#include <math.h>
using namespace std;
double fun(double x);
void main()
{
	double x, f;
	cout << "x= ";
	cin >> x;

	f = fun(x);
	cout << "F= " << f;
}