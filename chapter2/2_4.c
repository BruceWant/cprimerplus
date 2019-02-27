#include <stdio.h>

void jolly()
{
	printf("jolly good ");
}

void deny()
{
	printf("Which nobody can deny!\n");
}

int main()
{
	printf("For he's a ");
	jolly();
	printf("fellow!\n");

	printf("For he's a ");
	jolly();
	printf("fellow!\n");

	printf("For he's a ");
	jolly();
	printf("fellow!\n");

	deny();

	return 0;

}
