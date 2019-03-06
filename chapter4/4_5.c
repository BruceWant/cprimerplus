#include <stdio.h>

int main()
{
	float speed = 0, filesize = 0, time = 0;

	printf("Enter the file size: ");
	scanf("%f", &filesize);

	printf("Enter the download speed: ");
	scanf("%f", &speed);

	printf("At %.2f megabits per second, "
			"a file a %.2f megabytes\n", speed, filesize);
	printf("downloads in %.2f seconds.\n", filesize * 8 / speed);

	return 0;
}
