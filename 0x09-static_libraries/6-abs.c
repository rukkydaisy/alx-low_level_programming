#include "main.h"
/**
 * _abs: function that computes the absolute value of an int
 *
 * Description: The standard library provides a similar funct..
 *
 *@r: The value
 *
 * Return: always 0
 *
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r *= -1);
	}
}
