#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x, f;
	cout << "x= ";
	cin >> x;

	f = sqrt(2 *x +2*sqrt(pow(x,2) - 4)) / (sqrt(pow(x, 2) - 4 + x + 2));
	cout << "F= " << f;
}