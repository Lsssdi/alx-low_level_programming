#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to an array
 * @size: size of sqaure array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (; i < size; i++)
	{
		sum1 = sum1 + *(a + (i * size) + i);
		sum2 = sum2 + *(a + (i * size) + size - 1 - i);
	}

	printf("%d, %d\n", sum1, sum2);

}

