#include "main.h"
/**
 * _pow_recursion - a function that calulate the power of a given integer
 * @x : the given integer
 * @y : the power
 * Return: return 1 or the power of given integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
