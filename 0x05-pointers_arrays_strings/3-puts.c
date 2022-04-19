#include "main.h"
/**
 * _puts- prints a string
 * @str: pointer to array of characters
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
