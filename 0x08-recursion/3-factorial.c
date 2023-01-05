/**
 * factorial - returns the factorial of a given integer
 * @n: an integer
 *
 * Return: factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	{
		return (n * factorial(n - 1));
	}
}
