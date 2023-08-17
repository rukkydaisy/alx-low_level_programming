#include "main.h"
/*
 * _isalpha - Entry point
 *@c returns as decscribed
 * Description: This function checks for alphabetic character
 *
 * Return: returns 1 is c is a letter and returns 0 otherrwise
 *
 */

int _isalpha(int c)
{
	char a;
	char b;
	int lower = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		for (b = 'A'; b <= 'Z'; b++)
		{
			_putchar(a);
			_putchar(b);
		}
		if (a == c || b == c)
			lower = 1;
	}
	_putchar('\n');
	return (lower);
}
