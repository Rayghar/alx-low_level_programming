// main.h file
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif /* MAIN_H */

// main.c file
#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '_';

	_putchar(c);
	c = 'p';
	_putchar(c);
	c = 'u';
	_putchar(c);
	c = 't';
	_putchar(c);
	c = 'c';
	_putchar(c);
	c = 'h';
	_putchar(c);
	c = 'a';
	_putchar(c);
	c = 'r';
	_putchar(c);
	c = '\n';
	_putchar(c);
	return (0);
}

// _putchar function implementation
int _putchar(char c)
{
	return (write(1, &c, 1));
}
