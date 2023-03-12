#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Negative numbers don't have a natural square root */
		return (-1);

	if (n == 0 || n == 1) /* The square root of 0 or 1 is itself */
		return (n);
	return (_sqrt_helper(n, 1, n / 2));
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to find the square root of
 * @min: the minimum possible square root
 * @max: the maximum possible square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int min, int max)
{
	int mid;

	if (max < min) /* square root not found */
		return -1;

	mid = (min + max) / 2; /* find midpoint */

	if (mid * mid == n) /* square root found */
		return mid;
	else if (mid * mid > n) /* search left half */
		return _sqrt_helper(n, min, mid - 1);
	else /* search right half */
		return _sqrt_helper(n, mid + 1, max);
}
