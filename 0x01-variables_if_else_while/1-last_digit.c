#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entery point
 *
 * Description: This program will assign a random
 * number to
 * the variable n each time it execute
 *
 * Output: The output of the program is'
 * Last digit flolowed by n
 * follwed by is digit and is greter than 5'
 * or 'Last digit folowed by n followed by is digit and is 0'
 * or 'Last digit folowed by n
 * folowed by and is less then 6 and not0'
 *
 * Return: Always 0 (success
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}

	return (0);
}
