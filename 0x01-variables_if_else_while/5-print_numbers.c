#include <stdio.h>

/**
 * main - Entry point
 *
 * prints single digits of base from 0 in a single line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char digit[] = {'0','1','2','3','4','5','6','7','8','9','\n'};

	int i;
	for (i = 0; i < 11; i++)
	{
		putchar(digit[i]);
	}
	
	return (0);
}
