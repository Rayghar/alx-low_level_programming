#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to compute the square root of.
 *
 * Return: the natural square root of n, or -1 if n does not have a
 *         natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* negative numbers do not have natural square roots */
		return (-1);
	if (n == 0 || n == 1) /* the square root of 0 or 1 is itself */
		return (n);
	int root = _sqrt_recursion(n / 2);

	if (root * root == n)
		return (root);
	else if (root * root < n)
		return _sqrt_recursion((n - root * root) == -1 ? -1 : root);
	else
		return -1;
}
