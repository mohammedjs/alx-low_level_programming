#include <stdio.h>
/**
 * main -prints numbers between 00 to 89
 *
 * Return:Always 0 (Succes)
 *
 */
int main(void)
{
	int i, j;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 57)
		{
			putchar(i);
			putchar(i);
			putchar(' ');
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
