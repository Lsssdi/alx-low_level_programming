#include "main.h"

/**
 * print_alphabet - prints out letters of the alphabet in lower case and a
 * new line
 *
 * Return: On Succes 0;
 */

void print_alphabet(void)
{
	char first = 'a';

	for (; first <= 'z'; first++)
	{
		_putchar(first);
	}

	_putchar('\n');
}
