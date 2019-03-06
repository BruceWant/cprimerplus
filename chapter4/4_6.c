#include <stdio.h>
#include <string.h>

int main()
{
	char first_name[20], last_name[20];
	unsigned first_width, last_width;

	printf("Enter your first name: ");
	scanf("%s", first_name);

	printf("Enter your last name: ");
	scanf("%s", last_name);

	first_width = (unsigned) strlen(first_name);
	last_width = (unsigned) strlen(last_name);

	printf("%s %s\n", first_name, last_name);
	printf("%*zd %*zd\n", first_width,first_width,
						last_width, last_width);

	printf("%s %s\n", first_name, last_name);
	printf("%-*zd %-*zd\n", first_width,first_width,
						last_width, last_width);

	return 0;
}
