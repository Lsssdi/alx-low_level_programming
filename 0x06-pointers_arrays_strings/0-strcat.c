#include "main.h"
#include <string.h>

/**
 * _strcat - appends a string to another
 * @dest: string to be added on to
 * @src: string to be added
 *
 * Return: poinyter to char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int l1 = strlen(dest);
	int l2 = strlen(src);

	for (; i < l2; i++)
	{
		*(dest + l1 + i) = *(src + i);
	}

	*(dest + l1 + l2) = '\0';

	return (dest);
}
