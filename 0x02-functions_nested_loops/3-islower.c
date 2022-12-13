#include "main.h"

/**
 * _islower - confirms wether charcter is lowercase
 *
 * Return: 0 if lower case and 1 if otherwise
 */

int _islower(int c)
{
	int i = 0;
	int status = 0;

	for (; i <= 25; i++)
	{
		if (c == '0' + 49 + i)
		{
			status = 1;
		}
	}
	
	return (status);	
}
