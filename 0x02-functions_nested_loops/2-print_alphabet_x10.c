#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');

}

/**
 * print_alphabet_x10 - print lower case alphabet 10x
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_alphabet();
	}
}

