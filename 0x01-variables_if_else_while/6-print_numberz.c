#include <stdio.h>

/**
 *main - Entry point
 *Return: Is an integer
 */
int main(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
