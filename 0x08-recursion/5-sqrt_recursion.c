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
