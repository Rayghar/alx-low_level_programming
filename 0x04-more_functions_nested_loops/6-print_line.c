#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a straight line of underscores
 * @n: number of times to print underscore character
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
