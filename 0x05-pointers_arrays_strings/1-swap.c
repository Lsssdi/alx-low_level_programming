#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to the first integer
 * @b: a pointer to the second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}