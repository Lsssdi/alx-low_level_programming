#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all different possible combination of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		for (int n = i+1; n < 10; n++)
		{
		
			putchar(i%10 + '0');
			putchar(n%10 + '0');

			if (i == 8)
			{
				putchar('\n');
				return (0);
			}

			putchar(',');
			putchar(' ');
		}
	}
}
