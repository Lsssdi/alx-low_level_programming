#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the numbers in order from integer n up to and
 * including
 *
 * Return: void (nothing)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d", n);

			if ( n != 98)
			{
				printf(", ");
			}
		}
		printf("98\n");
	}
}
