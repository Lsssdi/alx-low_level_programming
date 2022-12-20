#include "main.h"
#include <string.h>

/**
 * puts2 - print every other character of a string starting with the first
 * @str: pointer to a string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int l = strlen(str);

	for (; i < l; i++)
	{
		if (i % 2 == 0)
			_putchar(*str);

		str++;
	}

	_putchar('\n');
}
