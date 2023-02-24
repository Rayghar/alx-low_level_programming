#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line of backslashes in the terminal
 * @n: number of times to print the diagonal character ('\')
 *
 * Description: This function prints a diagonal line of backslashes in the terminal
 * with leading spaces for each row. The diagonal line ends with a newline character.
 * If n is 0 or less, the function only prints a newline character.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
       	{
		_putchar('\n');  // if n is 0 or less, only print a newline
		return;
    	}

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < i; j++) 
		{
			_putchar(' ');  // print spaces for all columns before the diagonal
        	}
        _putchar('\\');  // print the diagonal character for the i-th row
        _putchar('\n');  // end the row with a newline
    	}
}
