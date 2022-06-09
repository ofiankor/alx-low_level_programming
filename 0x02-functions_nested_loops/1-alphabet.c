#include "main.h"
/**
 *print_alphabet - Print the lower case of alphabets
 *Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char i;
	i= 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
