#include "main.h"
#include <unistd.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return(0);
