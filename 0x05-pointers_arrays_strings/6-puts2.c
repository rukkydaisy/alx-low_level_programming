#include "main.h"
/**
 * puts2 - this program prins out every other character of a string
 * starting with the first character
 * followed by a newline
 *
 * @str: the string
 *
 * Return: 0
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
