#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: number of chars to make space
 * @c: char to initialize array with
 *
 * Return: pointer to array or Null if size is 0 
 * or if memeory allocations fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (; i < size; i++)
		a[i] = c;

	return (a);
}
