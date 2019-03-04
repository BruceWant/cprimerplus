#include <stdio.h>
#include <string.h>

#define LENGTH 20

int main()
{
	char first[LENGTH];

	printf("Enter your first name: ");

	scanf("%s", first);

	printf("\"%s\"\n", first);
	printf("\"%20s\"\n", first);
	printf("\"%-20s\"\n", first);
	printf("\"%*s\"\n", strlen(first) + 3, first);

	return 0;
}
