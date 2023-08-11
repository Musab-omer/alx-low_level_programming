#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a random number to the variable n
 * each time it is executed.
 * if the number is greater then 0: print is positiv
 * if the number is 0: print is zero
 * if the number is less than 0: print is negative
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is Zero\n", n);
	}
	return (0);
}
