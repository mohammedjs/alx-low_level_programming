#include "main.h"

/**
 * _strlen - return length of a string
 * @s: string
 * @count: number of words
 * Retutn: length of a sting
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
