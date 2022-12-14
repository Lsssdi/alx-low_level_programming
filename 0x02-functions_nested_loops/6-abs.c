#include "main.h"

/**
 * _abs - returns the absolute value of an integer
 *@n: an integer
 * Return: absolute value of entered value.
 */

int _abs(int n)
{
	int number = n;

	if (n >= 0)
	{
		number = n;
	}
	else if (n < 0)
	{
		number = -1 * n;
	}

	return (number);
}
