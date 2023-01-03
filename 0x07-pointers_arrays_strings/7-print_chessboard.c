#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to an array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;

	for (; i < 8; i++)
	{
		int j = 0;

		for (; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
