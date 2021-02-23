#include <iostream>
using namespace std;
#include "math.h"
void fun();
extern double x, f;
void main()
{
	cout << "x= ";
	cin >> x;
	fun();
	cout << "F= " << f;
}