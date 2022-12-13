#include "main.h" 

/**
 * main - Entry point 
 *
 *prrints outs '_putchar' followed by a new line 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[]= {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i = 0;

	for (; i < 9; i++)
	{
		_putchar(word[i]);
	}

	return (0);
}
