#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Destination string to concatenate to
 * @src: Source string to concatenate from
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Find the end of the destination string */
	for (i = 0; dest[i] != '\0'; i++);

        /* Append the source string to the destination string */
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	/* Add the terminating null byte */
	dest[i + j] = '\0';

	/* Return a pointer to the resulting string */
	return dest;
}
