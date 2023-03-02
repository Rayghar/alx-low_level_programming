#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to concatenate from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	/* get the length of dest */
	for (dest_len = 0; dest[dest_len]; dest_len++)
		;

	/* concatenate up to n bytes from src to dest */
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len + i] = src[i];

	/* add a null terminator to dest */
	dest[dest_len + i] = '\0';

	return dest;
}
