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
	j = 48;
	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (j != i && j < i)
			{
				putchar(j);
				putchar(i);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		j++;
	}
		putchar('\n');
		return (0);
}
