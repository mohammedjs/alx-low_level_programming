#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Determines either greater than 5, is less than 6, or is zero
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	else if (r == 0)
		printf("Last digit of %d is %d and is greater is 0\n", n, r);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	return (0);
}
