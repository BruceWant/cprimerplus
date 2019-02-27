#include <stdio.h>

int main()
{
	float age = 0;

	printf("how old are you?\n");
	scanf("%f", &age);

	printf("You are %.0f years age, eqaul %e seconds age\n", age, age*3.156e7);
	return 0;
}
