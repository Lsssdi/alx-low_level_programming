#include "main.h"

/**
 * print_alphabet_x10 - prints out the letters of the alphabet in lower case
 * on 10 lines then followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		char letter = 'a';

		for (; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
