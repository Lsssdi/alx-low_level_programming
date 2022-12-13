#include "main.h"

/**
 * print_sign - prints to standard output the sign of a number
 *
 * Return 1 if positive, 0 if zero and -1 if negative
 */

int print_sign(int n)
{
	int status;

	if (n > 0)
	{
		_putchar('+');
		status = 1;
	}
	else if (n == 0)
	{ 
		_putchar('0');
		status = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		status = -1;
	}

	return (status);
}
