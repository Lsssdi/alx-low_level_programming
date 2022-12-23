#include "main.h"
#include <string.h>

/**
 * _strncat - appends one string to another
 * @dest: string to be added to
 * @src: string which substring is to be added from
 * n: integer which is length of substring to be appended
 *
 * Return: pointer to new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l1 = strlen(dest);
	int l2 = strlen(src);

	if (n > l2)
		n = l2;

	for (; i < n; i++)
		*(dest + l1 + i) = *(src + i);

	*(dest + l1 + n) = '\0';

	return (dest);
}
