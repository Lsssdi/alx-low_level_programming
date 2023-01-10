#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: integer and height of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		for (; i <= size; i++)
		{
			int j = 0;
			int k = 1;

			for (; j < size - i; j++)
				_putchar(' ');

			for (; k <= i; k++)
				_putchar('#');
			
			_putchar('\n');
		}
	}
}

