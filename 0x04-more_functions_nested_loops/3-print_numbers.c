#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9 followed by a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		_putchar('0' + i);
	}

	_putchar('\n');
}
