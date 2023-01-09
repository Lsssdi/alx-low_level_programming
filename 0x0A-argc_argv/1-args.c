#include <stdio.h>

/**
 * main - entry point to programme
 * @argc: number of arguments entered in command line
 * @argv: array of arguments entered in command line
 *
 * Return: 0 (Always Success)
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
