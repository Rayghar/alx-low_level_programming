#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: natural square root of n, -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	root = _sqrt_recursion(n / 2);

	if (root * root == n)
		return (root);

	else if (root * root < n)
		return (_sqrt_helper(n, root + 1, n - 1));

	else
		return (-1);
}
