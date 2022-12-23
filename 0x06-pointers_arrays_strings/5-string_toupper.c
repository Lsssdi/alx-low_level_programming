#include <string.h>

/**
 * string_toupper - changes lowercase letter to uppercase
 * @c: pointer to charcater
 *
 * Return: uppercase charcter
 */

char *string_toupper(char *c)
{
	int j = 0;

	while (*(c + j))
	{
		int i = 97;

		for (; i <= 122; i++)
		{
			if (*(c + j) == '0' - '0' + i)
			{
				*(c + j) = '0' - '0' + i - 32;
				break;
			}
		}

		j++;

	}

		return (c);
}
