#include "main.h"

/**
 * print_last_digit - prints and returns last digit of given number
 *
 * Return: last digit of given number
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = -1 * n;
	}

	ld = n % 10;

	_putchar('0' + ld);
	return (ld);
}
