#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the natural square root of.
 *
 * Return: The natural square root of n If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - Helps to recursively find the square root of a number.
 * @n: The number to find the square root of.
 * @i: The current guess at the square root of n.
 *
 * Return: The square root of n if i * i == n If i * i > n, return -1.
 *         Otherwise, return the result of calling the function recursively with n and i + 1.
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_helper(n, i + 1));
}
