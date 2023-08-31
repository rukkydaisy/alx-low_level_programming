#include "main.h"
/**
 * _pow_recursion - this program performs the index
 * of a number
 * @x: the base number
 * @y: the index number
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
