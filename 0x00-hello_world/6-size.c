#include <stdio.h>

/*
 * main: Entry point 
 *
 * prints out size of different type of varibales based on computer the programme is being compiled and run on
 *
 * Return: always 0
 */

int main(void)
{
	char varChar;
	int varInt;
	long int varLongInt;
	long long int varLongLongInt;
	float varFloat;

	printf("Size of a char: %ld byte(s)\n", sizeof(varChar));
	printf("Size of an int: %ld byte(s)\n", sizeof(varInt));
	printf("Size of a long int: %ld byte(s)\n", sizeof(varLongInt));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(varLongLongInt));
	printf("Size of a float: %ld byte(s)\n", sizeof(varFloat));
	return (0);
}
