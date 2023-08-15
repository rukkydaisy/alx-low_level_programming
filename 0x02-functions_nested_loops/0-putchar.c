#include <stdio.h>
/*
 * main - Prints _putchar
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
