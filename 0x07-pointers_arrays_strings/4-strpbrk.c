/**
 * _strpbrk - finds string within another string
 * @s: pointer to string to be searched
 * @accept: pointer to substring to find
 *
 * Return: pointer to substring within string else NULL if substring
 * does not exist
 */
char *_strpbrk(char *s, char *accept)
{
	int NotFound = 1;
	int l = 0;
	char *ptr = 0;

	while (*(accept + l) != '\0')
		l++;

	while (*s != '\0' && NotFound)
	{
		int i = 0;

		for (; i < l; i++)
		{
			if (*s == *(accept + i))
			{
				ptr = s;
				NotFound = 0;
			}
		}

		s++;
	}

	return (ptr);
}
