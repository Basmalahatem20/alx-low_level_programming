#include <stdio.h>

/**
 * main - entry point
 *
 * Destination: print numbers using putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ascii*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}

