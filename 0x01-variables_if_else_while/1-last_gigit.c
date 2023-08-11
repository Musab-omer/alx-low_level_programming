#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: 'this program will assign a random number
 * to the variable n each time it is exeucted
 * and print the last digit of the number stored in the variable n .
 *
 * Return: Alwayes 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);
	return (0);
}
