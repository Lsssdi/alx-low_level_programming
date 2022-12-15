#include "main.h"

/**
 * _isupper - checks if char is uppercase
 * @c: an integer
 *
 * Return: 1 if uppercase and 0 ptherwise
 */

int _isupper(int c)
{
	int i = 65;
	int status = 0;

	for (; i <= 90; i++)
	{
		if (c == '0' - '0' + i)
		{
			status = 1;
			break;
		}
	}

	return (status);
}
