#include <stdio.h>

int main()
{
	double quart_gram = 950,
		   molecule_gram = 3.0e-23;
		   /* molecule_amount = 1; */
	int quart_amount = 0;
	
	scanf("%d", &quart_amount);
	
	printf("%e\n", quart_amount * quart_gram / molecule_gram);

	return 0;
}
