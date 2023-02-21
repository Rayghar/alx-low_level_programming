#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: 0 on success, non-zero value on failure
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand();
	printf("Last digit of %d is ", n);
	if (n % 10 > 5)
		printf("is positive");
	else if (n % 10 == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	printf("\n");
	return (0);
}
