#include <stdio.h>
#include <float.h>

int main()
{
	double dnum = 1.0 / 3.0;
	float  fnum = 1.0 / 3.0;

	printf("double: %.4f %.12f %16.f\n", dnum, dnum, dnum);

	printf("float : %.4f %.12f %16.f\n", dnum, dnum, dnum);

	printf("FLT_DIG: %d\n", FLT_DIG);
	printf("DBL_DIG: %d\n", DBL_DIG);

	return 0;
}
