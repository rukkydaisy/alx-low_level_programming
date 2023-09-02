#include "main.h"
/**
 *  _islower - detects lowercase and upper case
 *
 *  Description: use _putchar to print
 *
 *  @c: collects alphabets
 *
 * Return: 1 if c is lower and 0 if otherwise
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
	}
	return (lower);
}


