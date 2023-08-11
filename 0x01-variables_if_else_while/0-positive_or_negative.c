#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print random number every time whenever program executed
 *
 * Return Alwyes success (0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is Positive\n");
	}
	else if (n < 0)
	{
		printf("is nagative\n");
	}
	else
	{
		printf("is Zero\n");
	}
	/**
	 *  return value of main Always Success (0)
	 */
	return (0);
}
