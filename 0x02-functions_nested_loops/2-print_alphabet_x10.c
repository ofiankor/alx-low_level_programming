#include "main.h"
/**
 *print_alphabet_x10 - Prints alphabet 10X
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char l;
	int j;

	j = 0;
	while (j <= 9)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar(10);
		j++;
	}
}
