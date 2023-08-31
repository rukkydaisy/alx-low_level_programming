#include "main.h"

/**
 * _puts_recursion - this program prints out a string
 *
 * @s: the string
 *
 * Return 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
