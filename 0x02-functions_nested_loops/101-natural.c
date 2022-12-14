#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: void
 */

void main(void)
{
	int i = 0;
	int sum = 0;

	for (; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
}
