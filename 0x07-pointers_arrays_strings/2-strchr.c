/**
 * _strchr(char *s, char c)
 * @s: pointer to a string
 * @c: character to search for in string
 *
 * Return: pointer to address of first occurence of
 * charcter in string else return NULL
 */

char *_strchr(char *s, char c)
{
	char *strAddr = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			strAddr = s;
			break;
		}

		s++;
	}

	return (strAddr);
}
