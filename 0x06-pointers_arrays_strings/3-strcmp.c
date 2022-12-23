#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int id = 0;
	int i = 0;
	int a = 0;
	int b = 0;
	int min;

	if (strlen(s1) <= strlen(s2))
		min = strlen(s1);
	else if (strlen(s2) < strlen(s1))
		min = strlen(s2);

	while (i <= min && id == 0)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			for (; a <= 127; a++)
			{
				if ('0' - '0' + a == *(s1 + i))
					break;
			}

			for (; b <= 127; b++)
			{
				if ('0' - '0' + b == *(s2 + i))
					break;
			}

			id = a - b;
		}

		i++;
	}

	return (id);

}
