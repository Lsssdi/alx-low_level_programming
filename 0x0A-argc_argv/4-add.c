#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumber - checks if string is numeric
 * @n: string
 *
 * Return: 1 if number else 0
 */

int isNumber(char *s)
{
	while(*s)
	{
		if (!isdigit(*s))
			return (0);

		s++;
	}

	return (1);
}

/**
 * main - entry point to programme
 * @argc: arguemnt count
 * argv: arguments from command line
 *
 * Return: 1 if error or 0 if success
 */

int main(int argc, char **argv)
{
	int i = 1;
	int j = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		if (!isNumber(*(argv + i)))
		{
			printf("Error\n");
			return (1);
		}
	}

	for (; j < argc; j++)
		sum = sum + atoi(*(argv + j));

	printf("%d\n", sum);
	return (0);

}

