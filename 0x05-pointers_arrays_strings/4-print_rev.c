#include "main.h"
/**
 * print_rev - prints in revrse
 * @s: string paramete
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while(*(s + count) != '\0')
		count++;
	count--;
	while(count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');
}
