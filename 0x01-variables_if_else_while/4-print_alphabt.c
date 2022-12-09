#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the letters of the alphabet in a single line except 'e' and 'q'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = {'a','b','c','d','f','g','h','i','j','k','l','m'
		,'n','o','p','r','s','t','u','v','w','x','y','z','\n'};

	int i;
	for (i = 0; i < 25; i++)
	{
		putchar(alphabet[i]);
	}
	
	return (0);
}
