#include <stdio.h>

/**
 * main - entry point to programme
 * @argc: number of arguments from command line
 * @argv: array of arguments entered
 *
 * Return: 0 (Always Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);

	return (0);
}
