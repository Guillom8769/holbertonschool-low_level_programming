#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  determine if the last digit
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	Last_digit = n % 10;

	printf("Last digit of %d is %d ", n, Last_digit);

	if (Last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (Last_digit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
