/**
 * _memset - fills memory area with a constant byte
 * @s: pointer to memory area of a char
 * @b: char byte to fill memory area
 * @n: number of bytes to be filled
 *
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
