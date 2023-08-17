#include "main.h"
/**
 * print_last_digit: This program prints the last digit of a number
 * Description: This program  prints the last digit of a number.
 *@r: an integer input
 * Return: it returns the value of the last digit
 *
 */
int print_last_digit(int r)
{
	int i;

	if (r < 0)
	{
		i = -1 * (r % 10);
	}
	else
	{
		i = r % 10;
	}
	_putchar(i);
	return (i);
}
