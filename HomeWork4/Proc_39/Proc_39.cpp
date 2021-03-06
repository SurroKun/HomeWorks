#include "pch.h"
#include <iostream>
#include<math.h>

float power1(float a, float b) {
	return a <= 0 ? 0 : exp(b*log(a));
}

float power2(float a, int n) {
	float temp = 1;
	int i;
	for (i = 1; i <= abs(n); ++i) temp *= a;
	return n < 0 ? 1 / temp : temp;
}

float power3(float a, float b) {
	if (fmod(b, 1) == 0) return power2(a, (int)b);
	else return power1(a, b);
}



int main(void)
{
	float p, a, b, c;
	printf("P:");
	scanf("%f", &p);
	printf("A: ");
	scanf("%f", &a);
	printf("B: ");
	scanf("%f", &b);
	printf("C: ");
	scanf("%f", &c);

	printf("power3: %f\n", power3(a, p));
	printf("power3: %f\n", power3(b, p));
	printf("power3: %f\n", power3(c, p));

	return 0;
}