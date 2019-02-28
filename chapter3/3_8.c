#include <stdio.h>

int main()
{
	float cup = 1;

	scanf("%f", &cup);

	printf("%.2f cup = %.2fpints\n", cup, cup / 2);
	printf("%.2f cup = %.2founces\n", cup, cup * 8);
	printf("%.2f cup = %.2ftablespoons\n", cup, cup * 8 * 2);
	printf("%.2f cup = %.2fteaspoons\n", cup, cup * 8 * 2 * 3);

	return 0;
}
