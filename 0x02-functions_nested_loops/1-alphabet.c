#include <stdio.h>

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
}

int main(void)
{
	print_alphabet();
	return 0;
}
