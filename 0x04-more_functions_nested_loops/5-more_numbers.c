#include "main.h"

/**
 * printNum - prints out an integer
 * @n: an integer
 *
 * Return: void
 */

void printNum(int n)
{
	if (n / 10)
		printNum(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * more numbers - prints the numbers 0 to 14 ten times
 * each on a new line
 *
 * Return: void
 */
	
void more_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		int a = 0;

		for (; a <= 14; a++)
			printNum(a);
		_putchar('\n');
	}
}
