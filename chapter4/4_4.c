#include <stdio.h>

int main()
{
	char name[20];
	float height = 0;

	printf("Enter your height in centimeter: ");
	scanf("%f", &height);
	
	printf("Enter your name: ");
	scanf("%s", name);

	printf("%s, you are %.3f meter tall\n", name, height / 100);

	return 0;
}
