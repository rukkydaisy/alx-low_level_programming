#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char zero = '0';

	while (zero <= '9')
	{
		putchar(zero);
		zero++;
	}
	putchar('\n');
	return (0);
}
