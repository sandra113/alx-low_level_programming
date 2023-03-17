#include <stdlib.h>
#include <time.h>
/* more header goes there */
/**
 * main - Positive or negative
 * Return: Always 0 (Success)
 */

/* betty syle doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);
	if (n < 0)
	{
		printf("n is negative\n");
	} else if (n == 0)
	{
		printf("n is zero\n");
	} else if (n > 0)
	{
		printf("n is positive\n");
	}
	return (0);
}
