#include "main.h"

/**
 * printNum - prints out an integer
 * @n: an integer
 *
 * times_table - prinst out the 9 times table starting with 0
 *
 * Return: void.
 */

void printNum(int n)
{
	if (n / 10)
		printNum(n / 10);

	_putchar(n % 10 + '0');
}

void times_table(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		int b = 0;

		for (; b <= 9; b++)
		{
			printNum(a * b);

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (a * (b + 1) < 10)
			{
				if (a == 0 && b == 9)
					continue;

				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
