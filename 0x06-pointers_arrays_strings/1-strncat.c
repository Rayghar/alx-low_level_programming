#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strncat - concatenates two strings, up to n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to concatenate from src
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = 0;
	char *dest_end;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	dest_end = dest + dest_len;

	while (*src != '\0' && n-- > 0)
	{
		*dest_end++ = *src++;
	}

	*dest_end = '\0';

	return dest;
}
