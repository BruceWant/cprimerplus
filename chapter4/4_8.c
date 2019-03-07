#include <stdio.h>

//#define US    1
#define LITER 3.785
#define KILO  1.609

int main()
{
	float mile = 1.0, gallon = 1.0;
	
	printf("Enter the number of miles your traveled: \n");
	scanf("%f", &mile);

	printf("Enter the number of gallons of gasoline consumed: \n");
	scanf("%f", &gallon);

	#ifdef US
		printf("miles per gallon: %.1f\n", mile / gallon);
	#else
		printf("liters per 100 km: %1f\n",
				(gallon * LITER)/(mile * KILO * 100)); 
	#endif

	return 0;
}
