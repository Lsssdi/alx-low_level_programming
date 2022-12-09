#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the numbers of base 16 (in lower case) in a single line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char base16Char[] = {'0','1','2','3','4','5','6','7','8','9','a','b',
		'c','d','e','f'};

	for (int i = 0; i < 16; i++)
	{
		putchar(base16Char[i]);
	}
	putchar('\n');
	return (0);
}
