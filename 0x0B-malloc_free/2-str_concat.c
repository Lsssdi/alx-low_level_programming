#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string to be added on to s1
 *
 * Return: pointer to new string else NULL
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = 0;
	int l2 = 0;
	int i1 = 0;
	int i2 = 0;
	char *c;

	while (*(s1 + l1))
		l1++;

	while (*(s2 + l2))
		l2++;

	c = malloc((l1 + l2 + 1) * sizeof(*s1));

	if (c == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (; i1 < l1; i1++)
			c[i1] = *(s1 + i1);
	}

	if (s2 == NULL)
		c[l1] = '\0';
	else
	{
		for (; i2 < l2; i2++)
			c[l1 + i2] = *(s2 + i2);

		c[l1 + l2] = '\0';
	}

	return (c);
	
}


