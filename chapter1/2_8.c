#include <stdio.h>

void two()
{
	printf("two\n");
	printf("three\n");
}

void one_three()
{
	printf("one\n");
	two();
}

int main()
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");

	return 0;
}
