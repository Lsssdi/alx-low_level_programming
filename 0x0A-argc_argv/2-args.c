#include <stdio.h>

/**
 * main - entry to programme
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0
 */

int main (int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
