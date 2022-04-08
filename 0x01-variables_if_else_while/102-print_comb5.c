#include <stdio.h>
/**
 * main -prints numbers between 00 to 89
 *
 * Return:Always 0 (Succes)
 *
 */
int main(void)
{
	int i, j, k;

	i = 48;
	while (i < 58)
	{
		j = 49;
		while (j < 57)
		{
			k = 48;
			while (k < 58)
			{
				putchar(i);
				putchar(i);
				putchar(' ');
				putchar(k);
				putchar(j);
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
