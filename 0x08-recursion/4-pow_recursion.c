/**
 * _pow_recursion - returns the value of x raised to the poweer of y
 * @x: an integer which is the base
 * @y: an integer which is the exponent
 *
 * Return: x to te power of y else -1 if y is not an positive integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
