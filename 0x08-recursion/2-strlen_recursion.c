#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: the length of a string as an integer
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum = _strlen_recursion(s + 1) + 1;
	}

	return (sum);

}
