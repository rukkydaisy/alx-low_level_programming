#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char n = '0';
	char m = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
