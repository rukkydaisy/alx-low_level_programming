#include "main.h"
/**
 * void print_alphabet_x10 - Prints alphabet 10 times
 *
 * Description: prints with _putchar
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int j;

	for (j = 0; j < 10 ; j++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}


