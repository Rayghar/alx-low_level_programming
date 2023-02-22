#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* Loop for 10 times */
	{
		for (j = 'a'; j <= 'z'; j++) /* Loop for each letter */
		{
			_putchar(j); /* Print the letter */
                }
		_putchar('\n'); /* Print a new line after each set of letters */
	}
}
