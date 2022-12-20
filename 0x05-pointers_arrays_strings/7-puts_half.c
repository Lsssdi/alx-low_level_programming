#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: pointer to a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int l = strlen(str);

	if (l % 2 == 0)
		i = (l / 2);
	else
		i = (l + 1) / 2;

	while (i < l)
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}
