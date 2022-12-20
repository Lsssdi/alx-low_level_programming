#include "main.h"

/**
 * _puts - prints a string to standard output
 * @str: a pointer to a string
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
