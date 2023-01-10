#include "main.h"

/**
 * print_line - prints a line on std output
 * @n: integer which specifies length of line
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		for (; i <= n; i++)
			_putchar('_');

		_putchar('\n');
	}
}
