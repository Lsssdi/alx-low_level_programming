#include "main.h"

/**
 * print_diagonal - prints a diagonal line on std output
 * @n: integer which specifies length of line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		for (; i <= n; i++)
		{
			int s = i - 1;

			for (; s > 0; s--)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
}
