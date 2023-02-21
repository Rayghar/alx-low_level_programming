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
	n = rand()- RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	int last_digit = n % 10;
	if (last_digit > 5)
		printf("%d and is greater than 5\n", last_digit);
	else if (last_digit == 0)
		printf("%d and is 0\n", last_digit);
	else
		printf("%d less than 6 and not 0\n", last_digit);
	printf("\n");
	return (0);
}
