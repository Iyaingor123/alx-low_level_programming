# include <stdio.h>

/**
 * main - function that prints the numbers 1-100, multiples of three
 * Fizz is printed instead of number, mutiples of five
 * Buzz, for multiple of three and five, FIZBUZZ
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		printf("FIZZBUZZ");

		else if ((num % 3) == 0)
			printf("FIZZ");

		else if ((num % 5) == 0)
			printf("BUZZ");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}
		printf("\n");
		return (0);
}
