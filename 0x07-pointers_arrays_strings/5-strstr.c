/**
 * _strstr - finds substring within another string
 * @haystack: pointer to string to be searched
 * @needle: pointer to substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int l = 0;
	char *ptr = 0;

	while (*(needle + l) != '\0')
		l++;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			int i = 0;

			while (*(haystack + i) == *(needle + i) &&
					*(needle + i) != '\0' &&
					*(haystack + i) != '\0')
				i++;

			if (i == l)
			{
				ptr = haystack;
				break;
			}
		}

		haystack++;
	}

	return (ptr);

}
