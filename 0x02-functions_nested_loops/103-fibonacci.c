#include <stdio.h>

/**
 * main - prints the sum of even- valued fibonacci sequence
 * not exceeding 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long f = 0, s = 1, fsum;
	float total_sum;

	while (1)
	{
		fsum = f + s;
		if (fsum > 4000000)
			break;

		if ((fsum % 2) == 0)
			total_sum += fsum;

		f = s;
		s = fsum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
