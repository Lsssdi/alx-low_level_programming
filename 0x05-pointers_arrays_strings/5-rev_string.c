#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char c;
	int i;
	char *e = s + strlen(s) - 1;

	if (strlen(s) % 2 != 0)
		i = (strlen(s) - 1) / 2;
	else
		i = strlen(s) / 2;

	while (i > 0)
	{
		c = *s;
		*s = *e;
		*e = c;
		i--;
		s++;
		e--;
	}

}
