#include <stdio.h>

#define LENGTH 20
int main()
{
	char first[LENGTH], last[LENGTH];
	
	printf("Enter your first name: ");
	scanf("%s", first);

	printf("Enter your last name: ");
	scanf("%s", last);

	printf("Your name is %s %s\n", last, first);

	return 0;
}
