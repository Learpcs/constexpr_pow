#include <stdio.h>
#include "1.cpp"
#include <cmath>	

int main()
{
	float a, b;
	scanf("%f%f", &a, &b);
	printf("%f%^%f\nmy_math::pow(): %f\ncmath pow(): %f", a, b, my_math::pow(a, b), pow(a, b));
}