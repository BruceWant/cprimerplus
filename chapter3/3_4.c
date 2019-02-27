#include <stdio.h>

int main()
{
	float var = 0.0;

	printf("Enter a floating-point value: ");
	scanf("%f", &var);

	printf("fixed-point notation: %f\n", var);
	printf("exponential notation: %e\n", var);
	printf("p notation: %a\n", var);

	return 0;
}
