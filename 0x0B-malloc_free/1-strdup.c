#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: returns pointer to string duplication
 */

char *_strdup(char *str)
{
	int l = 0;
	int i = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (*(str + l))
		l++;

	dup = malloc(l * sizeof(*str));

	if (dup == NULL)
	{	
		free (dup);
		return (NULL);
	}

	for (; i < l; i++)
		dup[i] = *(str + i);

	return (dup);
}
