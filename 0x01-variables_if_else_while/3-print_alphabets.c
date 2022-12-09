#include <stdio.h>

/**
 * main - Entry point
 *
 * prints out the alphabet in loweer case then upper case all in on line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters[52] = {'a','b','c','d','e','f','g','h','i','k','l',
		'm','n','o','p','q','r','s','t','u','v','w','x','y','z','A',
		'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q',
		'R','S','T','U','V','W','X','Y','Z', '\n'};

	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(letters[i]);
	}

	return (0);
}
