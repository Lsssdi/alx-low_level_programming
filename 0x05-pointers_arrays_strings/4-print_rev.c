#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints an entered string in reverse
 * @s: pointer to a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int slen = strlen(s);
	char *endPtr = s + slen - 1;

	while (slen > 0)
	{
		_putchar(*endPtr);
		endPtr--;
		slen--;
	}

	_putchar('\n');

}
