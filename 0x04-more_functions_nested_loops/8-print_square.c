#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: integer and dimension of square
 *
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		for (; i < size; i++)
		{
			int j = 0;

			for (; j < size; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
