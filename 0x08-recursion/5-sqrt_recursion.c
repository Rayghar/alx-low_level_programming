#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the natural square root of
 *
 * Return: the natural square root of n or -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	int i, root;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
	{
		root = _sqrt_recursion(n / 2);
		i = 0;
		while (i <= root)
		{
			if (i * i == n)
				return (i);
			i++;
		}
		return (-1);
	}
}
