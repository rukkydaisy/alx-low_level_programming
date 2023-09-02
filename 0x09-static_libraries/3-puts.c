#include "main.h"
/**
* _puts - this program prints out a string
* followed bt a new line
*
* @str: the string
*
* Return: 0
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
