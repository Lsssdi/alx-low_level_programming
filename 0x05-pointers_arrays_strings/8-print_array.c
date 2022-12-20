#include <stdio.h>

/**
 * *print_array - prinst the first n elemnts of an array of integers
 * @a: address of array
 * @n: number of elementsv to be displayed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *a);
		a++;

		if (i < n - 1)
			printf(", ");
	}

	putchar('\n');
}
