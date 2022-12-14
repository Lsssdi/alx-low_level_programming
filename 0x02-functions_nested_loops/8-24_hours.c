#include "main.h"

/**
 * jack_bauer - prints out every minute of the day
 *
 * Return: void.
 */

void jack_bauer(void)
{
	int a = 0;

	for (; a <= 2; a++)
	{
		int b = 0;

		for (; b <= 9; b++)
		{
			int c = 0;

			for (; c <= 5; c++)
			{
				int d = 0;

				for (; d <= 9; d++)
				{
				_putchar(a % 10 + '0');
				_putchar(b % 10 + '0');
				_putchar(':');
				_putchar(c % 10 + '0');
				_putchar(d % 10 + '0');
				_putchar('\n');
				}

				if (a == 2 && b == 3 && c == 5)
					break;
			}

			if (a == 2 && b == 3)
				break;
		}
	}


}
