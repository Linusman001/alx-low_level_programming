#include <stdio.h>

/**
 * main - prints first 50 finabocci numbers,
 * startingfrom 1 and 2, separated by comma and space.
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long f = 0, s = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = f + s;
		printf("%lu", sum);

		f = s;
		s = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
