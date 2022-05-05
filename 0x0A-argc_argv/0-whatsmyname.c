#include <stdio.h>

/**
 * main- print name of program
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 on sucess
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
