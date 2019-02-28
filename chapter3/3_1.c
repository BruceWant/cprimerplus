#include <stdio.h>

int main()
{
	int var = 1e9,
		var2 = 2e9;
	float fvar = 2e38,
		  fvar2 = 2e38;

	int isum = var + var2;
	printf("%d\n", isum);

	printf("%f\n", fvar + fvar2);

	return 0;
}
