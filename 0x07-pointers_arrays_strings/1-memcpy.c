/**
 * _memcpy - copies specified amount of bytes from one memory 
 * to another
 * @dest: pointer to destination mmeory area
 * @src: pointer to source memory area
 * @n: number of bytes to be copied from source memory area
 *
 * Return: pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0; 

	for (; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
