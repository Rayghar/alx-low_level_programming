#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int end, int start);

int is_palindrome(char *s)
{
	int len = 0;

	if (!*s)
		return (1);
	
	while (s[len])
		len++;

	return (check_palindrome(s, len - 1, 0));
}

/**
 * check_palindrome - recursively checks if a string is a palindrome
 * @s: the string to check
 * @end: the index of the last character in s
 * @start: the index of the first character in s
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int end, int start)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, end - 1, start + 1));
}
