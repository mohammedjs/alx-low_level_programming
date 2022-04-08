#include <stdio.h>

/**
 * main - printing a-z
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char dig = '0';
	char alp = 'a';

	while (dig <= '9')
	{
		putchar(dig);
		dig++;
	}
	while (alp <= 'e')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
