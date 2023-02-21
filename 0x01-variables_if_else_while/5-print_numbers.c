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
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is ", n);
	if (last_digit > 5)
		printf("%d and is greater than 5", last_digit);
	else if (last_digit == 0)
		printf("%d and is 0", last_digit);
	else
		printf("%d and is less than 6 and not 0", last_digit);
	printf("\n");
	return (0);
}
