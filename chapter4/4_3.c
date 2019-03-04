#include <stdio.h>

int main()
{
	float num = 0.0;

	printf("Enter a float number: ");
	scanf("%f", &num);

	printf("The input is %.1f or %.1e.\n", num, num);
	printf("The input is %+.3f or %.3E.\n", num, num);

	return 0;
}
