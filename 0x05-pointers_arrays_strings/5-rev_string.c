#include "main.h"

/**
 * _strlen - retursn lengh of string 
 * @s: string
 * Return: lengh of charactes
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}
