#include <stdio.h>

/**
 * main- prints the number of arguments passed to it
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on sucess
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
