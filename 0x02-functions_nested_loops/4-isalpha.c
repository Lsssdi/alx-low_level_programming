#include "main.h"

/**
 * _isalpha - confirms wether charcter is lowercase or 
 * uppercase alphabet or not
 *
 * Return: 0 if lower/upper case and 1 if otherwise
 */

int _isalpha(int c)
{
	int i = 65;
	int j = 97;
	int status = 0;

	for (; i <= 90; i++)
	{
		if (c == '0' - '0' + i )
		{
			status = 1;
		}
	}

	for (; j <= 122; j++)
	{
		if (c == '0' - '0' + j)
		{
			status = 1;
		}
	}
	
	return (status);	
}
