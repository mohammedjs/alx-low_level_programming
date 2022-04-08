#include <stdio.h>
/**
 * main - printing a-z and A-Z
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char alps = 'a';
	char alpC = 'A';

	for (int a = 1; a < 26; a++)
	{
		putchar(alps);
		alps++;
	}
	while (alpC < 'Z' + 1)
	{
		putchar(alpC);
		alpC++;
	}
	putchar('\n');
	return (0);
}
