#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: an integer
 *
 * Return: 1 if digit and 0 ptherwise
 */

int _isdigit(int c)
{
	int i = 48;
	int status = 0;

	for (; i <= 57; i++)
	{
		if (c == '0' - '0' + i)
		{
			status = 1;
			break;
		}
	}

	return (status);
}
