#include "main.h"
/**
 * sqrt_a - the program returns the natural square
 * root of a number
 * @n: the number
 *
 * Return: 0
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - this program returns the natural
 * squareroot of a number
 * @n: the number
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
