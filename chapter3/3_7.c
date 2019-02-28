#include <stdio.h>

int main()
{
	float CM = 2.54,
		  cm = 0,
		  inch = 0;
	
	printf("Enter you height in inches: ");
	scanf("%f", &inch);

	printf("You are %f inches, and %f centimeters\n", inch, inch * CM);

	printf("Enter you height in centimeters: ");
	scanf("%f", &cm);

	printf("You are %f centimeters, and %f inches\n", cm, cm / CM);

	return 0;
}
