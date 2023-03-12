#include "main.h"
#include <stdio.h>
#define __USE_MISC
#include <math.h>
#undef __USE_MISC
#include <stdio.h>

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: the integer to test for primality
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2) /* 0 and 1 are not prime */
		return 0;
	if (n == 2) /* 2 is the only even prime number */
		return 1;
	if (n % 2 == 0) /* all other even numbers are not prime */
		return 0;
	return check_prime(n, 3);
}

/**
 * check_prime - helper function for is_prime_number
 * @n: the integer to test for primality
 * @divisor: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
	if (divisor * divisor > n) /* we've checked all possible divisors */
		return 1;
	if (n % divisor == 0) /* n is not prime */
		return 0;
	else
		return check_prime(n, divisor + 2); /* check the next odd divisor */
}
