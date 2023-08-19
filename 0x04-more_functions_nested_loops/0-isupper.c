#include "main.h"
/*
 * _isupper: this program checks for upper case letter
 *
 * Descritpion: Write a function that checks for uppercase character.
 *
 * Return: returns 1 if c is uppercase and zero if otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
