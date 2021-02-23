#include "math.h"
double x, f;
void fun()
{
	f = sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4)) / (sqrt(pow(x, 2) - 4 + x + 2));
}