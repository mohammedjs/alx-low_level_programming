#include <stdio.h>

/**
 * main - printing a-z
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
