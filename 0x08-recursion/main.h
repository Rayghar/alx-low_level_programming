#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Firdaus
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x07-pointers_arrays_strings directory.
 */

#include <stddef.h>

int _putchar(char c);
void *_memset(void *s, int c, size_t n);
void *_memcpy(void *dest, const void *src, size_t n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int check_prime(int n, int divisor);
int _sqrt_recursion(int n);
int _sqrt_recursion_helper(int n, int i);
int _strlen_recursion(char *s);
int check_palindrome(char *s, int start, int end);
int is_palindrome(char *s);









#endif /* MAIN_H */
