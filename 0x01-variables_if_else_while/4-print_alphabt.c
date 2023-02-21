#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: 0 on success, non-zero value on failure
 */
int main(void)
{
	char letter  = 'a';
	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{	putchar(leter);
		}
		letter++;
	}
	letter  = 'A';
	while (letter <= 'Z')
	{
		if (letter != 'Q' && letter != 'E')
		{	putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
